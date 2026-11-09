// Name: core_inv.cpp_clampWeaponAmmoCount_FUN_004f7660
// Address: 004f7660
// Address Range: [[004f7660, 004f768f]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_clampWeaponAmmoCount_FUN_004f7660(CDemonActor *actor_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_clampWeaponAmmoCount_FUN_004f7660(CDemonActor *actor_ptr)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,g_CTommyGunClassInfo.name_hash);
  if ((iVar1 != 0) && (200 < *(int *)(iVar1 + 0x568))) {
    *(uint *)(iVar1 + 0x568) = 200;
    return;
  }
  return;
}
