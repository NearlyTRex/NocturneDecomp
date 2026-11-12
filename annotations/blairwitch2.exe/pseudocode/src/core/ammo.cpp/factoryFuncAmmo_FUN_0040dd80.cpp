// Name: core_ammo.cpp_factoryFuncAmmo_FUN_0040dd80
// Address: 0040dd80
// Address Range: [[0040dd80, 0040dd9b]]
// Convention: __cdecl
// Signature: CAmmo * __cdecl core_ammo_cpp_factoryFuncAmmo_FUN_0040dd80(void)

#include "nocturne.h"

CAmmo * __cdecl core_ammo_cpp_factoryFuncAmmo_FUN_0040dd80(void)

{
  CAmmo *pCVar1;
  
  pCVar1 = (CAmmo *)operator_new(0x47c);
  if (pCVar1 == (CAmmo *)0x0) {
    return (CAmmo *)0x0;
  }
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_0040ddb0(pCVar1);
  return pCVar1;
}
