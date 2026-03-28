// Name: core_glass.cpp_factoryFunc_FUN_004e9000
// Address: 004e9000
// Address Range: [[004e9000, 004e9022]]
// Convention: __cdecl
// Signature: CGlass * __cdecl core_glass_cpp_factoryFunc_FUN_004e9000(void)

#include "nocturne.h"

CGlass * __cdecl core_glass_cpp_factoryFunc_FUN_004e9000(void)

{
  CGlass *pCVar1;
  
  pCVar1 = (CGlass *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1b0(0xb40,"..\\core\\glass.cpp",0x2c);
  if (pCVar1 == (CGlass *)0x0) {
    return (CGlass *)0x0;
  }
  pCVar1 = core_glass_cpp_CGlass_ctor_FUN_004e9040(pCVar1);
  return pCVar1;
}
