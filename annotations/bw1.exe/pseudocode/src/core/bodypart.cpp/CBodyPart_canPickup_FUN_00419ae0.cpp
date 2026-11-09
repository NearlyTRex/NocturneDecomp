// Name: core_bodypart.cpp_CBodyPart_canPickup_FUN_00419ae0
// Address: 00419ae0
// Address Range: [[00419ae0, 00419afe]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_CBodyPart_canPickup_FUN_00419ae0(CBodyPart *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_canPickup_FUN_00419ae0(CBodyPart *this_ptr,CDemonActor *picker)

{
  if ((*(int *)&this_ptr->field_0x158 == 0) && (*(int *)&this_ptr->field_0xcc4 == 0)) {
    return 3;
  }
  return 0;
}
