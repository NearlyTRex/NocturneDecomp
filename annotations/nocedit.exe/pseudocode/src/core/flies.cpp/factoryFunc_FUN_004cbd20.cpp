// Name: core_flies.cpp_factoryFunc_FUN_004cbd20
// Address: 004cbd20
// Address Range: [[004cbd20, 004cbd42]]
// Convention: __cdecl
// Signature: CFlies * core_flies.cpp_factoryFunc_FUN_004cbd20(void)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_factoryFunc_FUN_004cbd20(void)

{
  CFlies *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2a20,"..\\core\\flies.cpp",0x19);
  if (pCVar1 == (CFlies *)0x0) {
    return (CFlies *)0x0;
  }
  pCVar1 = core_flies_cpp_CFlies_ctor_FUN_004cbd60(pCVar1);
  return pCVar1;
}
