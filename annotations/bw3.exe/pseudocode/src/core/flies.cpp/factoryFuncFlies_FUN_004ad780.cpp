// Name: core_flies.cpp_factoryFuncFlies_FUN_004ad780
// Address: 004ad780
// Address Range: [[004ad780, 004ad79b]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_flies_cpp_factoryFuncFlies_FUN_004ad780(void)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_factoryFuncFlies_FUN_004ad780(void)

{
  CFlies *pCVar1;
  
  pCVar1 = (CFlies *)operator_new(0x2a20);
  if (pCVar1 == (CFlies *)0x0) {
    return (CFlies *)0x0;
  }
  pCVar1 = core_flies_cpp_CFlies_ctor_FUN_004ad7b0(pCVar1);
  return pCVar1;
}
