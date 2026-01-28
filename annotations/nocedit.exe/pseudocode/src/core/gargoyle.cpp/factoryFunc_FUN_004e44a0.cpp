// Name: core_gargoyle.cpp_factoryFunc_FUN_004e44a0
// Address: 004e44a0
// Address Range: [[004e44a0, 004e44c2]]
// Convention: __cdecl
// Signature: CGargoyle * __cdecl core_gargoyle_cpp_factoryFunc_FUN_004e44a0(void)

#include "nocturne.h"

CGargoyle * __cdecl core_gargoyle_cpp_factoryFunc_FUN_004e44a0(void)

{
  CGargoyle *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf18,"..\\core\\gargoyle.cpp",0x58);
  if (pCVar1 == (CGargoyle *)0x0) {
    return (CGargoyle *)0x0;
  }
  pCVar1 = core_gargoyle_cpp_CGargoyle_ctor_FUN_004e44e0(pCVar1);
  return pCVar1;
}
