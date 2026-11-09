// Name: core_trap.cpp_CTrap_canPickup_FUN_00599d90
// Address: 00599d90
// Address Range: [[00599d90, 00599d9f] [00599da3, 00599dbe]]
// Convention: __cdecl
// Signature: int __cdecl core_trap_cpp_CTrap_canPickup_FUN_00599d90(CTrap *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_trap_cpp_CTrap_canPickup_FUN_00599d90(CTrap *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if ((*(int *)&this_ptr->field_0x2d8 == 0) &&
     (iVar1 = core_actor_cpp_FUN_0040c550(picker,"CHero"), iVar1 != 0)) {
    return 2;
  }
  return 0;
}
