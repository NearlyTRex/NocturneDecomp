// Name: core_construc.cpp_factoryFuncConstructBone_FUN_00444520
// Address: 00444520
// Address Range: [[00444520, 0044453b]]
// Convention: __cdecl
// Signature: CConstructBone * __cdecl core_construc_cpp_factoryFuncConstructBone_FUN_00444520(void)

#include "nocturne.h"

CConstructBone * __cdecl core_construc_cpp_factoryFuncConstructBone_FUN_00444520(void)

{
  CConstructBone *pCVar1;
  
  pCVar1 = (CConstructBone *)operator_new(0xd860);
  if (pCVar1 == (CConstructBone *)0x0) {
    return (CConstructBone *)0x0;
  }
  pCVar1 = core_construc_cpp_CConstructBone_ctor_FUN_00444550(pCVar1);
  return pCVar1;
}
