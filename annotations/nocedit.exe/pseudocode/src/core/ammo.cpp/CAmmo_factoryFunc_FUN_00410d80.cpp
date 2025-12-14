// Name: core_ammo.cpp_CAmmo_factoryFunc_FUN_00410d80
// Address: 00410d80
// Address Range: [[00410d80, 00410da2]]
// Convention: __cdecl
// Signature: CAmmo * core_ammo.cpp_CAmmo_factoryFunc_FUN_00410d80(void)

#include "nocturne.h"

CAmmo * __cdecl core_ammo_cpp_CAmmo_factoryFunc_FUN_00410d80(void)

{
  CAmmo *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x31c,"..\\core\\ammo.cpp",0x1e);
  if (pCVar1 == (CAmmo *)0x0) {
    return (CAmmo *)0x0;
  }
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(pCVar1);
  return pCVar1;
}
