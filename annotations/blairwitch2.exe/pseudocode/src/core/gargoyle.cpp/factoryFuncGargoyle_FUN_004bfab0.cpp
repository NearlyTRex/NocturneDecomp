// Name: core_gargoyle.cpp_factoryFuncGargoyle_FUN_004bfab0
// Address: 004bfab0
// Address Range: [[004bfab0, 004bfacb]]
// Convention: __cdecl
// Signature: CGargoyle * __cdecl core_gargoyle_cpp_factoryFuncGargoyle_FUN_004bfab0(void)

#include "nocturne.h"

CGargoyle * __cdecl core_gargoyle_cpp_factoryFuncGargoyle_FUN_004bfab0(void)

{
  CGargoyle *pCVar1;
  
  pCVar1 = (CGargoyle *)operator_new(0x10b54);
  if (pCVar1 == (CGargoyle *)0x0) {
    return (CGargoyle *)0x0;
  }
  pCVar1 = core_gargoyle_cpp_CGargoyle_ctor_FUN_004bfae0(pCVar1);
  return pCVar1;
}
