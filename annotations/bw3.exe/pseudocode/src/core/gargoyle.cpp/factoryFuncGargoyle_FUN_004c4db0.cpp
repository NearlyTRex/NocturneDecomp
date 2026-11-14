// Name: core_gargoyle.cpp_factoryFuncGargoyle_FUN_004c4db0
// Address: 004c4db0
// Address Range: [[004c4db0, 004c4dcb]]
// Convention: __cdecl
// Signature: CGargoyle * __cdecl core_gargoyle_cpp_factoryFuncGargoyle_FUN_004c4db0(void)

#include "nocturne.h"

CGargoyle * __cdecl core_gargoyle_cpp_factoryFuncGargoyle_FUN_004c4db0(void)

{
  CGargoyle *pCVar1;
  
  pCVar1 = (CGargoyle *)operator_new(0xd0b0);
  if (pCVar1 == (CGargoyle *)0x0) {
    return (CGargoyle *)0x0;
  }
  pCVar1 = core_gargoyle_cpp_CGargoyle_ctor_FUN_004c4de0(pCVar1);
  return pCVar1;
}
