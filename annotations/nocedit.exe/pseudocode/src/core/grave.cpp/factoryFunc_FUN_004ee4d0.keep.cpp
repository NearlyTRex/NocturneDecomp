// Name: core_grave.cpp_factoryFunc_FUN_004ee4d0
// Address: 004ee4d0
// MANUAL RECONSTRUCTION
// Address Range: [[004ee4d0, 004ee4f2]]
// Convention: __cdecl
// Signature: CGrave * __cdecl core_grave_cpp_factoryFunc_FUN_004ee4d0(void)

#include "nocturne.h"

CGrave * __cdecl core_grave_cpp_factoryFunc_FUN_004ee4d0(void)

{
  CGrave *pCVar1;
  
  pCVar1 = (CGrave *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CGrave),"..\\core\\grave.cpp",0x26);
  if (pCVar1 == (CGrave *)0x0) {
    return (CGrave *)0x0;
  }
  pCVar1 = core_grave_cpp_CGrave_ctor_FUN_004ee510(pCVar1);
  return pCVar1;
}
