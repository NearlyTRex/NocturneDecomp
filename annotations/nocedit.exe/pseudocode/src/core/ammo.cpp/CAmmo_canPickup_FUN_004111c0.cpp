// Name: core_ammo.cpp_CAmmo_canPickup_FUN_004111c0
// Address: 004111c0
// Address Range: [[004111c0, 004111db]]
// Convention: __cdecl
// Signature: int __cdecl core_ammo_cpp_CAmmo_canPickup_FUN_004111c0(CAmmo *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_ammo_cpp_CAmmo_canPickup_FUN_004111c0(CAmmo *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
