// Name: core_ammo.cpp_factoryFuncAmmo_FUN_0040db90
// Address: 0040db90
// Address Range: [[0040db90, 0040dbab]]
// Convention: __cdecl
// Signature: CAmmo * __cdecl core_ammo_cpp_factoryFuncAmmo_FUN_0040db90(void)

#include "nocturne.h"

CAmmo * __cdecl core_ammo_cpp_factoryFuncAmmo_FUN_0040db90(void)

{
  CAmmo *pCVar1;
  
  pCVar1 = (CAmmo *)operator_new(0x31c);
  if (pCVar1 == (CAmmo *)0x0) {
    return (CAmmo *)0x0;
  }
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar1);
  return pCVar1;
}
