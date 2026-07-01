// Name: core_ammo.cpp_factoryFunc_FUN_00410d80
// Address: 00410d80
// Address Range: [[00410d80, 00410da2]]
// Convention: __cdecl
// Signature: CAmmo * __cdecl core_ammo_cpp_factoryFunc_FUN_00410d80(void)

#include "nocturne.h"

CAmmo * __cdecl core_ammo_cpp_factoryFunc_FUN_00410d80(void)

{
  CAmmo *pCVar1;
  
  pCVar1 = (CAmmo *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x31c,"..\\core\\ammo.cpp",30);
  if (pCVar1 == (CAmmo *)0x0) {
    return (CAmmo *)0x0;
  }
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(pCVar1);
  return pCVar1;
}
