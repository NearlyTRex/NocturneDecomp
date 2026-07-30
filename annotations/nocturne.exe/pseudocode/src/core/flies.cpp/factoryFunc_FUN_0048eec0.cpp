// Name: core_flies.cpp_factoryFunc_FUN_0048eec0
// Address: 0048eec0
// Address Range: [[0048eec0, 0048eedb]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_flies_cpp_factoryFunc_FUN_0048eec0(void)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_factoryFunc_FUN_0048eec0(void)

{
  int iVar1;
  CFlies *pCVar2;
  
  iVar1 = FUN_0056497c(0x2a18);
  if (iVar1 == 0) {
    return (CFlies *)0x0;
  }
  pCVar2 = (CFlies *)core_flies_cpp_FUN_0048eef0(iVar1);
  return pCVar2;
}
