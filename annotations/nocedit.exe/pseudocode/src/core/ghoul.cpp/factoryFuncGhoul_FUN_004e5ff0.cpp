// Name: core_ghoul.cpp_factoryFuncGhoul_FUN_004e5ff0
// Address: 004e5ff0
// Address Range: [[004e5ff0, 004e6015]]
// Convention: __cdecl
// Signature: CGhoul * __cdecl core_ghoul_cpp_factoryFuncGhoul_FUN_004e5ff0(void)

#include "nocturne.h"

CGhoul * __cdecl core_ghoul_cpp_factoryFuncGhoul_FUN_004e5ff0(void)

{
  CGhoul *pCVar1;
  
  pCVar1 = (CGhoul *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0xbf38,"..\\core\\ghoul.cpp",158);
  if (pCVar1 == (CGhoul *)0x0) {
    return (CGhoul *)0x0;
  }
  pCVar1 = core_ghoul_cpp_CGhoul_ctor_FUN_004e6030(pCVar1);
  return pCVar1;
}
