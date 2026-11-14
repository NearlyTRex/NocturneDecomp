// Name: core_construc.cpp_factoryFuncConstruct_FUN_004457f0
// Address: 004457f0
// Address Range: [[004457f0, 0044580b]]
// Convention: __cdecl
// Signature: CConstruct * __cdecl core_construc_cpp_factoryFuncConstruct_FUN_004457f0(void)

#include "nocturne.h"

CConstruct * __cdecl core_construc_cpp_factoryFuncConstruct_FUN_004457f0(void)

{
  CConstruct *pCVar1;
  
  pCVar1 = (CConstruct *)operator_new(0xca6c);
  if (pCVar1 == (CConstruct *)0x0) {
    return (CConstruct *)0x0;
  }
  pCVar1 = core_construc_cpp_CConstruct_ctor_FUN_00445820(pCVar1);
  return pCVar1;
}
