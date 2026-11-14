// Name: core_gargoyle.cpp_factoryFuncGargoyle_FUN_004dc240
// Address: 004dc240
// Address Range: [[004dc240, 004dc25b]]
// Convention: __cdecl
// Signature: CGargoyle * __cdecl core_gargoyle_cpp_factoryFuncGargoyle_FUN_004dc240(void)

#include "nocturne.h"

CGargoyle * __cdecl core_gargoyle_cpp_factoryFuncGargoyle_FUN_004dc240(void)

{
  CGargoyle *pCVar1;
  
  pCVar1 = (CGargoyle *)operator_new(0xc2c4);
  if (pCVar1 == (CGargoyle *)0x0) {
    return (CGargoyle *)0x0;
  }
  pCVar1 = core_gargoyle_cpp_CGargoyle_ctor_FUN_004dc270(pCVar1);
  return pCVar1;
}
