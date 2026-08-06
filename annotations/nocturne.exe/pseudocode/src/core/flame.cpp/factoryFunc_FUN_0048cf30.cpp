// Name: core_flame.cpp_factoryFunc_FUN_0048cf30
// Address: 0048cf30
// Address Range: [[0048cf30, 0048cf4b]]
// Convention: __cdecl
// Signature: CFlame * __cdecl core_flame_cpp_factoryFunc_FUN_0048cf30(void)

#include "nocturne.h"

CFlame * __cdecl core_flame_cpp_factoryFunc_FUN_0048cf30(void)

{
  CFlame *pCVar1;
  
  pCVar1 = operator_new(0x29c);
  if (pCVar1 == (CFlame *)0x0) {
    return (CFlame *)0x0;
  }
  pCVar1 = core_flame_cpp_CFlame_ctor_FUN_0048cf60(pCVar1);
  return pCVar1;
}
