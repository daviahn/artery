//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

package artery.application;

// Middleware for ITS G5 services
simple Middleware
{
	parameters:
		@class(artery::Middleware);
		@signal[Identity.update](type=artery::Identity);
		@signal[Identity.remove](type=artery::Identity);
		@signal[StoryboardSignal](type=StoryboardSignal);

		string radioDriverModule;
		string localEnvironmentModule = default("");
		string globalEnvironmentModule = default("");
		string mobilityModule;
		double updateInterval = default(0.1s) @unit(s);
		string datetime;
		xml services;

		bool vanetzaEnableSecurity = default(true);
		string vanetzaCryptoBackend = default("Null");
		string vanetzaCertificateManager = default("NullOk");
		string vanetzaSecuritySignService = default("dummy");
		string vanetzaSecurityVerifyService = default("dummy");
		int vanetzaDccQueueLength = default(2);

	gates:
		input radioDriverIn;
		output radioDriverOut;
}