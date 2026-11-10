// Name: core_bodypart.cpp_CBodyPart_getCarrier_FUN_004166f0
// Address: 004166f0
// Address Range: [[004166f0, 004166fa]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_bodypart_cpp_CBodyPart_getCarrier_FUN_004166f0(CBodyPart *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_bodypart_cpp_CBodyPart_getCarrier_FUN_004166f0(CBodyPart *this_ptr)

{
  return this_ptr->carried_by_actor;
}
