// Name: core_baron.cpp_factoryFuncBaronWeapon_FUN_00410430
// Address: 00410430
// Address Range: [[00410430, 0041044b]]
// Convention: __cdecl
// Signature: CBaronWeapon * __cdecl core_baron_cpp_factoryFuncBaronWeapon_FUN_00410430(void)

#include "nocturne.h"

CBaronWeapon * __cdecl core_baron_cpp_factoryFuncBaronWeapon_FUN_00410430(void)

{
  CBaronWeapon *pCVar1;
  
  pCVar1 = (CBaronWeapon *)operator_new(0x57c);
  if (pCVar1 == (CBaronWeapon *)0x0) {
    return (CBaronWeapon *)0x0;
  }
  pCVar1 = core_baron_cpp_CBaronWeapon_ctor_FUN_00410460(pCVar1);
  return pCVar1;
}
