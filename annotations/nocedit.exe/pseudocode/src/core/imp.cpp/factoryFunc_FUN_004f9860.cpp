// Name: core_imp.cpp_factoryFunc_FUN_004f9860
// Address: 004f9860
// Address Range: [[004f9860, 004f9882]]
// Convention: __cdecl
// Signature: CImp * core_imp.cpp_factoryFunc_FUN_004f9860(void)

#include "nocturne.h"

CImp * __cdecl core_imp_cpp_factoryFunc_FUN_004f9860(void)

{
  CImp *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbef4,"..\\core\\imp.cpp",0x59);
  if (pCVar1 == (CImp *)0x0) {
    return (CImp *)0x0;
  }
  pCVar1 = core_imp_cpp_CImp_ctor_FUN_004f98a0(pCVar1);
  return pCVar1;
}
