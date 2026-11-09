// Name: core_bodypart.cpp_CBodyPart_canPickup_FUN_00415710
// Address: 00415710
// Address Range: [[00415710, 0041572e]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_CBodyPart_canPickup_FUN_00415710(CBodyPart *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_canPickup_FUN_00415710(CBodyPart *this_ptr,CDemonActor *picker)

{
  if ((*(int *)&this_ptr->field_0x158 == 0) && (*(int *)&this_ptr->field_0xcc4 == 0)) {
    return 3;
  }
  return 0;
}
