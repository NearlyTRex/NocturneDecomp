// Name: core_bodypart.cpp_CBodyPart_pickup_FUN_00419b00
// Address: 00419b00
// Address Range: [[00419b00, 00419b0e]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_pickup_FUN_00419b00(CBodyPart *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_pickup_FUN_00419b00(CBodyPart *this_ptr,CDemonActor *carrier)

{
  this_ptr->carried_by_actor = carrier;
  return;
}
