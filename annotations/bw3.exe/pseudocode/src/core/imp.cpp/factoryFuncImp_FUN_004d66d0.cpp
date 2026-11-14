// Name: core_imp.cpp_factoryFuncImp_FUN_004d66d0
// Address: 004d66d0
// Address Range: [[004d66d0, 004d66eb]]
// Convention: __cdecl
// Signature: CImp * __cdecl core_imp_cpp_factoryFuncImp_FUN_004d66d0(void)

#include "nocturne.h"

CImp * __cdecl core_imp_cpp_factoryFuncImp_FUN_004d66d0(void)

{
  CImp *pCVar1;
  
  pCVar1 = (CImp *)operator_new(0xd08c);
  if (pCVar1 == (CImp *)0x0) {
    return (CImp *)0x0;
  }
  pCVar1 = core_imp_cpp_CImp_ctor_FUN_004d6700(pCVar1);
  return pCVar1;
}
