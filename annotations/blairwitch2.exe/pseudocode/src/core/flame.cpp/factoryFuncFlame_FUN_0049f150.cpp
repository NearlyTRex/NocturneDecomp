// Name: core_flame.cpp_factoryFuncFlame_FUN_0049f150
// Address: 0049f150
// Address Range: [[0049f150, 0049f16b]]
// Convention: __cdecl
// Signature: CFlame * __cdecl core_flame_cpp_factoryFuncFlame_FUN_0049f150(void)

#include "nocturne.h"

CFlame * __cdecl core_flame_cpp_factoryFuncFlame_FUN_0049f150(void)

{
  CFlame *pCVar1;
  
  pCVar1 = (CFlame *)operator_new(0x400);
  if (pCVar1 == (CFlame *)0x0) {
    return (CFlame *)0x0;
  }
  pCVar1 = core_flame_cpp_CFlame_ctor_FUN_0049f180(pCVar1);
  return pCVar1;
}
