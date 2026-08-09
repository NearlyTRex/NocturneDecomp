// Name: core_ammo.cpp_factoryFuncAmmo_FUN_0040eb40
// Address: 0040eb40
// Address Range: [[0040eb40, 0040eb5b]]
// Convention: __cdecl
// Signature: CAmmo * __cdecl core_ammo_cpp_factoryFuncAmmo_FUN_0040eb40(void)

#include "nocturne.h"

CAmmo * __cdecl core_ammo_cpp_factoryFuncAmmo_FUN_0040eb40(void)

{
  CAmmo *pCVar1;
  
  pCVar1 = operator_new(0x314);
  if (pCVar1 == (CAmmo *)0x0) {
    return (CAmmo *)0x0;
  }
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar1);
  return pCVar1;
}
