// Name: core_melee.cpp_CMelee_canPickup_FUN_00509830
// Address: 00509830
// Address Range: [[00509830, 0050985e]]
// Convention: __cdecl
// Signature: int __cdecl core_melee_cpp_CMelee_canPickup_FUN_00509830(CMelee *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_melee_cpp_CMelee_canPickup_FUN_00509830(CMelee *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if (*(int *)&this_ptr->field_0x588 != 0) {
    iVar1 = core_actor_cpp_FUN_0040c550(picker,"CHero");
    if (iVar1 != 0) {
      return 2;
    }
  }
  return 3;
}
