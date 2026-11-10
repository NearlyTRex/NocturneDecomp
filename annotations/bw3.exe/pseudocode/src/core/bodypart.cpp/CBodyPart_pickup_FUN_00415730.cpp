// Name: core_bodypart.cpp_CBodyPart_pickup_FUN_00415730
// Address: 00415730
// Address Range: [[00415730, 0041573e]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_pickup_FUN_00415730(CBodyPart *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_pickup_FUN_00415730(CBodyPart *this_ptr,CDemonActor *carrier)

{
  this_ptr->carried_by_actor = carrier;
  return;
}
