// Name: core_colonel.cpp_factoryFunc_FUN_0043f7a0
// Address: 0043f7a0
// MANUAL RECONSTRUCTION
// Address Range: [[0043f7a0, 0043f7c2]]
// Convention: __cdecl
// Signature: CColonel * __cdecl core_colonel_cpp_factoryFunc_FUN_0043f7a0(void)

#include "nocturne.h"

CColonel * __cdecl core_colonel_cpp_factoryFunc_FUN_0043f7a0(void)

{
  CColonel *pCVar1;
  
  pCVar1 = (CColonel *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                     (sizeof(CColonel),"..\\core\\colonel.cpp",0x7e);
  if (pCVar1 == (CColonel *)0x0) {
    return (CColonel *)0x0;
  }
  pCVar1 = core_colonel_cpp_CColonel_ctor_FUN_0043f7e0(pCVar1);
  return pCVar1;
}
