// Name: core_ammo.cpp_CAmmo_canPickup_FUN_0040dfe0
// Address: 0040dfe0
// Address Range: [[0040dfe0, 0040dffb]]
// Convention: __cdecl
// Signature: int __cdecl core_ammo_cpp_CAmmo_canPickup_FUN_0040dfe0(CAmmo *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_ammo_cpp_CAmmo_canPickup_FUN_0040dfe0(CAmmo *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
