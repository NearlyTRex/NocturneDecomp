// Name: core_bodypart.cpp_CBodyPart_getCarrier_FUN_004157b0
// Address: 004157b0
// Address Range: [[004157b0, 004157ba]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_bodypart_cpp_CBodyPart_getCarrier_FUN_004157b0(CBodyPart *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_bodypart_cpp_CBodyPart_getCarrier_FUN_004157b0(CBodyPart *this_ptr)

{
  return this_ptr->carried_by_actor;
}
