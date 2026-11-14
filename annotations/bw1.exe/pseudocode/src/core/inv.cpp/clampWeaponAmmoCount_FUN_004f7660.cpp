// Name: core_inv.cpp_clampWeaponAmmoCount_FUN_004f7660
// Address: 004f7660
// Address Range: [[004f7660, 004f768f]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_clampWeaponAmmoCount_FUN_004f7660(CDemonActor *actor_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_clampWeaponAmmoCount_FUN_004f7660(CDemonActor *actor_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = (CTommyGun *)core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,g_CTommyGunClassInfo.name_hash);
  if ((pCVar1 != (CDemonActor *)0x0) && (200 < *(int *)(pCVar1[4].actor_name + 8))) {
    pCVar1[4].actor_name[8] = -0x38;
    pCVar1[4].actor_name[9] = '\0';
    pCVar1[4].actor_name[10] = '\0';
    pCVar1[4].actor_name[0xb] = '\0';
    return;
  }
  return;
}
