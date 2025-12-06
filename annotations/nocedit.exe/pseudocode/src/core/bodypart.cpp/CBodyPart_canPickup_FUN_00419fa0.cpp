// Name: core_bodypart.cpp_CBodyPart_canPickup_FUN_00419fa0
// Address: 00419fa0
// Address Range: [[00419fa0, 00419fbe]]
// Convention: __cdecl
// Signature: int core_bodypart.cpp_CBodyPart_canPickup_FUN_00419fa0(CBodyPart * this_ptr, CDemonActor * picker)

#include "nocturne.h"

int __cdecl
core_bodypart_cpp_CBodyPart_canPickup_FUN_00419fa0(CBodyPart *this_ptr,CDemonActor *picker)

{
  if ((*(int *)this_ptr->field1_0x158 == 0) && (*(int *)(this_ptr->field1_0x158 + 0xb6c) == 0)) {
    return 3;
  }
  return 0;
}
