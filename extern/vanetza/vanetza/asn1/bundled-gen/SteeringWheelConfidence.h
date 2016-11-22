/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/home/rieblr/work/car2x/vanetza/vanetza/asn1/cdd_ts102894-2v1.1.1.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_SteeringWheelConfidence_H_
#define	_SteeringWheelConfidence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SteeringWheelConfidence {
	SteeringWheelConfidence_withinOnePointFiveDegrees	= 1,
	SteeringWheelConfidence_outOfRange	= 126,
	SteeringWheelConfidence_unavailable	= 127
} e_SteeringWheelConfidence;

/* SteeringWheelConfidence */
typedef long	 SteeringWheelConfidence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SteeringWheelConfidence;
asn_struct_free_f SteeringWheelConfidence_free;
asn_struct_print_f SteeringWheelConfidence_print;
asn_constr_check_f SteeringWheelConfidence_constraint;
ber_type_decoder_f SteeringWheelConfidence_decode_ber;
der_type_encoder_f SteeringWheelConfidence_encode_der;
xer_type_decoder_f SteeringWheelConfidence_decode_xer;
xer_type_encoder_f SteeringWheelConfidence_encode_xer;
per_type_decoder_f SteeringWheelConfidence_decode_uper;
per_type_encoder_f SteeringWheelConfidence_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SteeringWheelConfidence_H_ */
#include <asn_internal.h>