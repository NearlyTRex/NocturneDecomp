// Name: core_ammo.cpp_CAmmo_canPickup_FUN_0040e490
// Address: 0040e490
// Address Range: [[0040e490, 0040e4ab]]
// Convention: __cdecl
// Signature: int __cdecl core_ammo_cpp_CAmmo_canPickup_FUN_0040e490(CAmmo *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_ammo_cpp_CAmmo_canPickup_FUN_0040e490(CAmmo *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_FUN_0040c840(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
