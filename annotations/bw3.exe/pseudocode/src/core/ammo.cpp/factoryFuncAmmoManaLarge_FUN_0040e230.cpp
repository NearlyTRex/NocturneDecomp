// Name: core_ammo.cpp_factoryFuncAmmoManaLarge_FUN_0040e230
// Address: 0040e230
// Address Range: [[0040e230, 0040e24b]]
// Convention: __cdecl
// Signature: CAmmoManaLarge * __cdecl core_ammo_cpp_factoryFuncAmmoManaLarge_FUN_0040e230(void)

#include "nocturne.h"

CAmmoManaLarge * __cdecl core_ammo_cpp_factoryFuncAmmoManaLarge_FUN_0040e230(void)

{
  CAmmoManaLarge *pCVar1;
  
  pCVar1 = (CAmmoManaLarge *)operator_new(800);
  if (pCVar1 == (CAmmoManaLarge *)0x0) {
    return (CAmmoManaLarge *)0x0;
  }
  pCVar1 = core_ammo_cpp_CAmmoManaLarge_ctor_FUN_0040e260(pCVar1);
  return pCVar1;
}
