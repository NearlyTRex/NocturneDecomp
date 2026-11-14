// Name: core_melee.cpp_CMelee_canPickup_FUN_004e7270
// Address: 004e7270
// Address Range: [[004e7270, 004e729e]]
// Convention: __cdecl
// Signature: int __cdecl core_melee_cpp_CMelee_canPickup_FUN_004e7270(CMelee *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_melee_cpp_CMelee_canPickup_FUN_004e7270(CMelee *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  if (this_ptr->can_go_in_inventory == 0) {
    iVar1 = 3;
  }
  else {
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(picker,"CHero");
    iVar1 = 0;
    if (iVar2 != 0) {
      return 2;
    }
  }
  return iVar1;
}
