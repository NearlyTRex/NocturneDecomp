// Name: core_flies.cpp_factoryFunc_FUN_0048eec0
// Address: 0048eec0
// Address Range: [[0048eec0, 0048eedb]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_flies_cpp_factoryFunc_FUN_0048eec0(void)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_factoryFunc_FUN_0048eec0(void)

{
  CFlies *pCVar1;
  
  pCVar1 = (CFlies *)FUN_0056497c(0x2a18);
  if (pCVar1 == (CFlies *)0x0) {
    return (CFlies *)0x0;
  }
  pCVar1 = core_flies_cpp_CFlies_ctor_FUN_0048eef0(pCVar1);
  return pCVar1;
}
