// Name: core_stranger.cpp_factoryFunc_FUN_005bb0e0
// Address: 005bb0e0
// MANUAL RECONSTRUCTION
// Address Range: [[005bb0e0, 005bb105]]
// Convention: __cdecl
// Signature: CStranger * __cdecl core_stranger_cpp_factoryFunc_FUN_005bb0e0(void)

#include "nocturne.h"

CStranger * __cdecl core_stranger_cpp_factoryFunc_FUN_005bb0e0(void)

{
  CStranger *pCVar1;
  
  pCVar1 = (CStranger *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                     (sizeof(CStranger),"..\\core\\stranger.cpp",0x1d3);
  if (pCVar1 == (CStranger *)0x0) {
    return (CStranger *)0x0;
  }
  pCVar1 = core_stranger_cpp_CStranger_ctor_FUN_005bb120(pCVar1);
  return pCVar1;
}
