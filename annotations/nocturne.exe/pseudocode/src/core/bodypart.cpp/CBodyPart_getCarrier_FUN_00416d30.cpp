// Name: core_bodypart.cpp_CBodyPart_getCarrier_FUN_00416d30
// Address: 00416d30
// Address Range: [[00416d30, 00416d3a]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_bodypart_cpp_CBodyPart_getCarrier_FUN_00416d30(CBodyPart *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_bodypart_cpp_CBodyPart_getCarrier_FUN_00416d30(CBodyPart *this_ptr)

{
  return this_ptr->carried_by_actor;
}
