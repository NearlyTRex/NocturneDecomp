// Name: core_ammo.cpp_factoryFuncAmmo_FUN_0040de30
// Address: 0040de30
// Address Range: [[0040de30, 0040de4b]]
// Convention: __cdecl
// Signature: CAmmo * __cdecl core_ammo_cpp_factoryFuncAmmo_FUN_0040de30(void)

#include "nocturne.h"

CAmmo * __cdecl core_ammo_cpp_factoryFuncAmmo_FUN_0040de30(void)

{
  CAmmo *pCVar1;
  
  pCVar1 = (CAmmo *)operator_new(800);
  if (pCVar1 == (CAmmo *)0x0) {
    return (CAmmo *)0x0;
  }
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_0040de60(pCVar1);
  return pCVar1;
}
