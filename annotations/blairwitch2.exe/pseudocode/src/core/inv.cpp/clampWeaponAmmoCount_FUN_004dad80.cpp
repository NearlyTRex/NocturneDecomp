// Name: core_inv.cpp_clampWeaponAmmoCount_FUN_004dad80
// Address: 004dad80
// Address Range: [[004dad80, 004dadaf]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_clampWeaponAmmoCount_FUN_004dad80(CDemonActor *actor_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_clampWeaponAmmoCount_FUN_004dad80(CDemonActor *actor_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = (CTommyGun *)core_actor_cpp_castToClassHash_FUN_0040c8f0(actor_ptr,g_CTommyGunClassInfo.name_hash);
  if ((pCVar1 != (CDemonActor *)0x0) && (200 < (int)pCVar1[2].particle_systems[0].position.z)) {
    pCVar1[2].particle_systems[0].position.z = 2.8026e-43;
    return;
  }
  return;
}
