// Name: core_imp.cpp_factoryFuncImp_FUN_004f9860
// Address: 004f9860
// MANUAL RECONSTRUCTION
// Address Range: [[004f9860, 004f9882]]
// Convention: __cdecl
// Signature: CImp * __cdecl core_imp_cpp_factoryFuncImp_FUN_004f9860(void)

#include "nocturne.h"

CImp * __cdecl core_imp_cpp_factoryFuncImp_FUN_004f9860(void)

{
  CImp *pCVar1;
  
  pCVar1 = (CImp *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CImp),"..\\core\\imp.cpp",89);
  if (pCVar1 == (CImp *)0x0) {
    return (CImp *)0x0;
  }
  pCVar1 = core_imp_cpp_CImp_ctor_FUN_004f98a0(pCVar1);
  return pCVar1;
}
