// Name: core_ammo.cpp_CAmmo_canPickup_FUN_0040e080
// Address: 0040e080
// Address Range: [[0040e080, 0040e0b5]]
// Convention: __cdecl
// Signature: int __cdecl core_ammo_cpp_CAmmo_canPickup_FUN_0040e080(CAmmo *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_ammo_cpp_CAmmo_canPickup_FUN_0040e080(CAmmo *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    if ((*(int *)&this_ptr->field_0x318 != 10) && (*(int *)&this_ptr->field_0x318 != 0xb)) {
      return 2;
    }
    iVar2 = 5;
  }
  return iVar2;
}
