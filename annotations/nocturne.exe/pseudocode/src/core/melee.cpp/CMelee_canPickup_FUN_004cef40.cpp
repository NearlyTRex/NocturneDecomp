// Name: core_melee.cpp_CMelee_canPickup_FUN_004cef40
// Address: 004cef40
// Address Range: [[004cef40, 004cef6e]]
// Convention: __cdecl
// Signature: int __cdecl core_melee_cpp_CMelee_canPickup_FUN_004cef40(CMelee *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_melee_cpp_CMelee_canPickup_FUN_004cef40(CMelee *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if (this_ptr->can_go_in_inventory != 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(picker,"CHero");
    if (iVar1 != 0) {
      return 2;
    }
  }
  return 3;
}
