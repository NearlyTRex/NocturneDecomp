// Name: core_construc.cpp_factoryFuncConstructRed_FUN_004445d0
// Address: 004445d0
// Address Range: [[004445d0, 004445eb]]
// Convention: __cdecl
// Signature: CConstructRed * __cdecl core_construc_cpp_factoryFuncConstructRed_FUN_004445d0(void)

#include "nocturne.h"

CConstructRed * __cdecl core_construc_cpp_factoryFuncConstructRed_FUN_004445d0(void)

{
  CConstructRed *pCVar1;
  
  pCVar1 = operator_new(0xd860);
  if (pCVar1 == (CConstructRed *)0x0) {
    return (CConstructRed *)0x0;
  }
  pCVar1 = core_construc_cpp_CConstructRed_ctor_FUN_00444600(pCVar1);
  return pCVar1;
}
