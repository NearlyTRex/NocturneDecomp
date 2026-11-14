// Name: core_flies.cpp_factoryFuncFlies_FUN_004a6a60
// Address: 004a6a60
// Address Range: [[004a6a60, 004a6a7b]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_flies_cpp_factoryFuncFlies_FUN_004a6a60(void)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_factoryFuncFlies_FUN_004a6a60(void)

{
  CFlies *pCVar1;
  
  pCVar1 = (CFlies *)operator_new(0x2b7c);
  if (pCVar1 == (CFlies *)0x0) {
    return (CFlies *)0x0;
  }
  pCVar1 = core_flies_cpp_CFlies_ctor_FUN_004a6a90(pCVar1);
  return pCVar1;
}
