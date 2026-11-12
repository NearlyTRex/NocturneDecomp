// Name: core_baron.cpp_factoryFuncBaronWeapon_FUN_004108b0
// Address: 004108b0
// Address Range: [[004108b0, 004108cb]]
// Convention: __cdecl
// Signature: CBaronWeapon * __cdecl core_baron_cpp_factoryFuncBaronWeapon_FUN_004108b0(void)

#include "nocturne.h"

CBaronWeapon * __cdecl core_baron_cpp_factoryFuncBaronWeapon_FUN_004108b0(void)

{
  CBaronWeapon *pCVar1;
  
  pCVar1 = (CBaronWeapon *)operator_new(0x6d8);
  if (pCVar1 == (CBaronWeapon *)0x0) {
    return (CBaronWeapon *)0x0;
  }
  pCVar1 = core_baron_cpp_CBaronWeapon_ctor_FUN_004108e0(pCVar1);
  return pCVar1;
}
