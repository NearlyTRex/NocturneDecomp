// Name: core_flame.cpp_factoryFuncFlame_FUN_004b7a00
// Address: 004b7a00
// Address Range: [[004b7a00, 004b7a1b]]
// Convention: __cdecl
// Signature: CFlame * __cdecl core_flame_cpp_factoryFuncFlame_FUN_004b7a00(void)

#include "nocturne.h"

CFlame * __cdecl core_flame_cpp_factoryFuncFlame_FUN_004b7a00(void)

{
  CFlame *pCVar1;
  
  pCVar1 = (CFlame *)operator_new(0x2a4);
  if (pCVar1 == (CFlame *)0x0) {
    return (CFlame *)0x0;
  }
  pCVar1 = core_flame_cpp_CFlame_ctor_FUN_004b7a30(pCVar1);
  return pCVar1;
}
