// Name: core_gargoyle.cpp_factoryFunc_FUN_004a7320
// Address: 004a7320
// Address Range: [[004a7320, 004a733b]]
// Convention: __cdecl
// Signature: CGargoyle * __cdecl core_gargoyle_cpp_factoryFunc_FUN_004a7320(void)

#include "nocturne.h"

CGargoyle * __cdecl core_gargoyle_cpp_factoryFunc_FUN_004a7320(void)

{
  CGargoyle *pCVar1;
  
  pCVar1 = operator_new(0xbd80);
  if (pCVar1 == (CGargoyle *)0x0) {
    return (CGargoyle *)0x0;
  }
  pCVar1 = core_gargoyle_cpp_CGargoyle_ctor_FUN_004a7350(pCVar1);
  return pCVar1;
}
