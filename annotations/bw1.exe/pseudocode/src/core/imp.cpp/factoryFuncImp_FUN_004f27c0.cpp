// Name: core_imp.cpp_factoryFuncImp_FUN_004f27c0
// Address: 004f27c0
// Address Range: [[004f27c0, 004f27db]]
// Convention: __cdecl
// Signature: CImp * __cdecl core_imp_cpp_factoryFuncImp_FUN_004f27c0(void)

#include "nocturne.h"

CImp * __cdecl core_imp_cpp_factoryFuncImp_FUN_004f27c0(void)

{
  CImp *pCVar1;
  
  pCVar1 = (CImp *)operator_new(0xc2a0);
  if (pCVar1 == (CImp *)0x0) {
    return (CImp *)0x0;
  }
  pCVar1 = core_imp_cpp_CImp_ctor_FUN_004f27f0(pCVar1);
  return pCVar1;
}
