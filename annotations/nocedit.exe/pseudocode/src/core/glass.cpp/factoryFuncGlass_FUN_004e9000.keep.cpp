// Name: core_glass.cpp_factoryFuncGlass_FUN_004e9000
// Address: 004e9000
// MANUAL RECONSTRUCTION
// Address Range: [[004e9000, 004e9022]]
// Convention: __cdecl
// Signature: CGlass * __cdecl core_glass_cpp_factoryFuncGlass_FUN_004e9000(void)

#include "nocturne.h"

CGlass * __cdecl core_glass_cpp_factoryFuncGlass_FUN_004e9000(void)

{
  CGlass *pCVar1;
  
  pCVar1 = (CGlass *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CGlass),"..\\core\\glass.cpp",44);
  if (pCVar1 == (CGlass *)0x0) {
    return (CGlass *)0x0;
  }
  pCVar1 = core_glass_cpp_CGlass_ctor_FUN_004e9040(pCVar1);
  return pCVar1;
}
