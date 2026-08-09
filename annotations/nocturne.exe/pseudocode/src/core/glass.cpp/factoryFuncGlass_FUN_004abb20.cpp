// Name: core_glass.cpp_factoryFuncGlass_FUN_004abb20
// Address: 004abb20
// Address Range: [[004abb20, 004abb3b]]
// Convention: __cdecl
// Signature: CGlass * __cdecl core_glass_cpp_factoryFuncGlass_FUN_004abb20(void)

#include "nocturne.h"

CGlass * __cdecl core_glass_cpp_factoryFuncGlass_FUN_004abb20(void)

{
  CGlass *pCVar1;
  
  pCVar1 = operator_new(0xb38);
  if (pCVar1 == (CGlass *)0x0) {
    return (CGlass *)0x0;
  }
  pCVar1 = core_glass_cpp_CGlass_ctor_FUN_004abb50(pCVar1);
  return pCVar1;
}
