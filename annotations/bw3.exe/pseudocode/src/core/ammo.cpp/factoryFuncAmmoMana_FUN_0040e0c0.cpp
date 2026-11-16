// Name: core_ammo.cpp_factoryFuncAmmoMana_FUN_0040e0c0
// Address: 0040e0c0
// Address Range: [[0040e0c0, 0040e0db]]
// Convention: __cdecl
// Signature: CAmmoMana * __cdecl core_ammo_cpp_factoryFuncAmmoMana_FUN_0040e0c0(void)

#include "nocturne.h"

CAmmoMana * __cdecl core_ammo_cpp_factoryFuncAmmoMana_FUN_0040e0c0(void)

{
  CAmmoMana *pCVar1;
  
  pCVar1 = (CAmmoMana *)operator_new(800);
  if (pCVar1 == (CAmmoMana *)0x0) {
    return (CAmmoMana *)0x0;
  }
  pCVar1 = core_ammo_cpp_CAmmoMana_ctor_FUN_0040e0f0(pCVar1);
  return pCVar1;
}
