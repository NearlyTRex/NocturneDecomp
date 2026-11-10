// Name: core_melee.cpp_CMelee_canPickup_FUN_004eab90
// Address: 004eab90
// Address Range: [[004eab90, 004eabbe]]
// Convention: __cdecl
// Signature: int __cdecl core_melee_cpp_CMelee_canPickup_FUN_004eab90(CMelee *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_melee_cpp_CMelee_canPickup_FUN_004eab90(CMelee *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if (this_ptr->can_go_in_inventory != 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(picker,"CHero");
    if (iVar1 != 0) {
      return 2;
    }
  }
  return 3;
}
