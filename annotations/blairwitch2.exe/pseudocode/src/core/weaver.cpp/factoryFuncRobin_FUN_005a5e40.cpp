// Name: core_weaver.cpp_factoryFuncRobin_FUN_005a5e40
// Address: 005a5e40
// Address Range: [[005a5e40, 005a5e5b]]
// Convention: __cdecl
// Signature: CRobin * __cdecl core_weaver_cpp_factoryFuncRobin_FUN_005a5e40(void)

#include "nocturne.h"

CRobin * __cdecl core_weaver_cpp_factoryFuncRobin_FUN_005a5e40(void)

{
  CRobin *pCVar1;
  
  pCVar1 = (CRobin *)operator_new(0x11858);
  if (pCVar1 == (CRobin *)0x0) {
    return (CRobin *)0x0;
  }
  pCVar1 = core_weaver_cpp_CRobin_ctor_FUN_005a5e70(pCVar1);
  return pCVar1;
}
