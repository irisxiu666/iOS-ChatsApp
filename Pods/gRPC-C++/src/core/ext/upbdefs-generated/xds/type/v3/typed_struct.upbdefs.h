/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/type/v3/typed_struct.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef XDS_TYPE_V3_TYPED_STRUCT_PROTO_UPBDEFS_H_
#define XDS_TYPE_V3_TYPED_STRUCT_PROTO_UPBDEFS_H_

#include "upb/def.h"
#include "upb/port_def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/def.h"

#include "upb/port_def.inc"

extern upb_def_init xds_type_v3_typed_struct_proto_upbdefinit;

UPB_INLINE const upb_msgdef *xds_type_v3_TypedStruct_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &xds_type_v3_typed_struct_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "xds.type.v3.TypedStruct");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* XDS_TYPE_V3_TYPED_STRUCT_PROTO_UPBDEFS_H_ */
