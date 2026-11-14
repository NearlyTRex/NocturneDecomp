// Name: core_construc.cpp_factoryFuncConstruct_FUN_004423f0
// Address: 004423f0
// Address Range: [[004423f0, 0044240b]]
// Convention: __cdecl
// Signature: CConstruct * __cdecl core_construc_cpp_factoryFuncConstruct_FUN_004423f0(void)

#include "nocturne.h"

CConstruct * __cdecl core_construc_cpp_factoryFuncConstruct_FUN_004423f0(void)

{
  CConstruct *pCVar1;
  
  pCVar1 = (CConstruct *)operator_new(0xd860);
  if (pCVar1 == (CConstruct *)0x0) {
    return (CConstruct *)0x0;
  }
  pCVar1 = core_construc_cpp_CConstruct_ctor_FUN_00442420(pCVar1);
  return pCVar1;
}
