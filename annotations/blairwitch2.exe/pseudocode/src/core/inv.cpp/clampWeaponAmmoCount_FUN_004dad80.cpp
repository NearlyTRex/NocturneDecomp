// Name: core_inv.cpp_clampWeaponAmmoCount_FUN_004dad80
// Address: 004dad80
// Address Range: [[004dad80, 004dadaf]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_clampWeaponAmmoCount_FUN_004dad80(CDemonActor *actor_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_clampWeaponAmmoCount_FUN_004dad80(CDemonActor *actor_ptr)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0(actor_ptr,g_CTommyGunClassInfo.name_hash);
  if ((iVar1 != 0) && (200 < *(int *)(iVar1 + 0x6c4))) {
    *(uint *)(iVar1 + 0x6c4) = 200;
    return;
  }
  return;
}
