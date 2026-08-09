// Name: core_imp.cpp_factoryFuncImp_FUN_004bb730
// Address: 004bb730
// Address Range: [[004bb730, 004bb74b]]
// Convention: __cdecl
// Signature: CImp * __cdecl core_imp_cpp_factoryFuncImp_FUN_004bb730(void)

#include "nocturne.h"

CImp * __cdecl core_imp_cpp_factoryFuncImp_FUN_004bb730(void)

{
  CImp *pCVar1;
  
  pCVar1 = operator_new(0xbd5c);
  if (pCVar1 == (CImp *)0x0) {
    return (CImp *)0x0;
  }
  pCVar1 = core_imp_cpp_CImp_ctor_FUN_004bb760(pCVar1);
  return pCVar1;
}
