// Name: core_flies.cpp_factoryFuncFlies_FUN_004bfa30
// Address: 004bfa30
// Address Range: [[004bfa30, 004bfa4b]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_flies_cpp_factoryFuncFlies_FUN_004bfa30(void)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_factoryFuncFlies_FUN_004bfa30(void)

{
  CFlies *pCVar1;
  
  pCVar1 = (CFlies *)operator_new(0x2a20);
  if (pCVar1 == (CFlies *)0x0) {
    return (CFlies *)0x0;
  }
  pCVar1 = core_flies_cpp_CFlies_ctor_FUN_004bfa60(pCVar1);
  return pCVar1;
}
