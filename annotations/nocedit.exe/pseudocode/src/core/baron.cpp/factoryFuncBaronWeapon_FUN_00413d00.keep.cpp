// Name: core_baron.cpp_factoryFuncBaronWeapon_FUN_00413d00
// Address: 00413d00
// MANUAL RECONSTRUCTION
// Address Range: [[00413d00, 00413d25]]
// Convention: __cdecl
// Signature: CBaronWeapon * __cdecl core_baron_cpp_factoryFuncBaronWeapon_FUN_00413d00(void)

#include "nocturne.h"

CBaronWeapon * __cdecl core_baron_cpp_factoryFuncBaronWeapon_FUN_00413d00(void)

{
  CBaronWeapon *pCVar1;
  
  pCVar1 = (CBaronWeapon *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CBaronWeapon),"..\\core\\baron.cpp",683);
  if (pCVar1 == (CBaronWeapon *)0x0) {
    return (CBaronWeapon *)0x0;
  }
  pCVar1 = core_baron_cpp_CBaronWeapon_ctor_FUN_00413d40(pCVar1);
  return pCVar1;
}
