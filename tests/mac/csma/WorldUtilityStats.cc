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

#include "WorldUtilityStats.h"
#include "Packet.h"

Define_Module(WorldUtilityStats);

void WorldUtilityStats::initialize(int stage)
{
	BaseWorldUtility::initialize(stage);

	if(stage == 0) {
		bitsSent = 0;
		bitsReceived = 0;

		//register for global stats to collect
		Packet tmp(10);
		catPacket = subscribe(this, &tmp);
	}
}


void WorldUtilityStats::receiveBBItem(int category, const BBItem *details, int scopeModuleId)
{
	if(category == catPacket)
	{
		const Packet* p = static_cast<const Packet*>(details);
		bitsSent += p->getNbBitsSent();
		bitsReceived += p->getNbBitsReceived();
	}
	else {
		opp_error("BBItem of unexpected category: %s", details->getClassName());
	}
}

void WorldUtilityStats::finish()
{
	recordScalar("GlobalTrafficGenerated", bitsSent, "bit");
	recordScalar("GlobalTrafficReceived", bitsReceived, "bit");
}