// Name: core_baron.cpp_factoryFunc_FUN_00413d00
// Address: 00413d00
// Address Range: [[00413d00, 00413d25]]
// Convention: __cdecl
// Signature: CBaronWeapon * core_baron.cpp_factoryFunc_FUN_00413d00(void)

#include "nocturne.h"

CBaronWeapon * __cdecl core_baron_cpp_factoryFunc_FUN_00413d00(void)

{
  CBaronWeapon *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x57c,"..\\core\\baron.cpp",0x2ab);
  if (pCVar1 == (CBaronWeapon *)0x0) {
    return (CBaronWeapon *)0x0;
  }
  pCVar1 = core_baron_cpp_CBaronWeapon_ctor_FUN_00413d40(pCVar1);
  return pCVar1;
}
