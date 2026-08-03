// Name: core_bodypart.cpp_CBodyPart_pickup_FUN_00416cb0
// Address: 00416cb0
// Address Range: [[00416cb0, 00416cbe]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_pickup_FUN_00416cb0(CBodyPart *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_pickup_FUN_00416cb0(CBodyPart *this_ptr,CDemonActor *carrier)

{
  this_ptr->carried_by_actor = carrier;
  return;
}
