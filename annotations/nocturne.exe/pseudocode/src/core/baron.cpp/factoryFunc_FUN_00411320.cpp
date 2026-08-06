// Name: core_baron.cpp_factoryFunc_FUN_00411320
// Address: 00411320
// Address Range: [[00411320, 0041133b]]
// Convention: __cdecl
// Signature: CBaronWeapon * __cdecl core_baron_cpp_factoryFunc_FUN_00411320(void)

#include "nocturne.h"

CBaronWeapon * __cdecl core_baron_cpp_factoryFunc_FUN_00411320(void)

{
  CBaronWeapon *pCVar1;
  
  pCVar1 = operator_new(0x574);
  if (pCVar1 == (CBaronWeapon *)0x0) {
    return (CBaronWeapon *)0x0;
  }
  pCVar1 = core_baron_cpp_CBaronWeapon_ctor_FUN_00411350(pCVar1);
  return pCVar1;
}
