// Name: core_inv.cpp_clampWeaponAmmoCount_FUN_004fd5d0
// Address: 004fd5d0
// Address Range: [[004fd5d0, 004fd5ff]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_clampWeaponAmmoCount_FUN_004fd5d0(CDemonActor *actor_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_clampWeaponAmmoCount_FUN_004fd5d0(CDemonActor *actor_ptr)

{
  CTommyGun *pCVar1;
  
  pCVar1 = (CTommyGun *)
           core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CTommyGunClassInfo.name_hash);
  if ((pCVar1 != (CTommyGun *)0x0) && (200 < (pCVar1->base).ammo_count)) {
    (pCVar1->base).ammo_count = 200;
    return;
  }
  return;
}
