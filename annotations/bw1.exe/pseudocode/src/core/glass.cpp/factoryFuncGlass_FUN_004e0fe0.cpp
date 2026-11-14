// Name: core_glass.cpp_factoryFuncGlass_FUN_004e0fe0
// Address: 004e0fe0
// Address Range: [[004e0fe0, 004e0ffb]]
// Convention: __cdecl
// Signature: CGlass * __cdecl core_glass_cpp_factoryFuncGlass_FUN_004e0fe0(void)

#include "nocturne.h"

CGlass * __cdecl core_glass_cpp_factoryFuncGlass_FUN_004e0fe0(void)

{
  CGlass *pCVar1;
  
  pCVar1 = (CGlass *)operator_new(0xb40);
  if (pCVar1 == (CGlass *)0x0) {
    return (CGlass *)0x0;
  }
  pCVar1 = core_glass_cpp_CGlass_ctor_FUN_004e1010(pCVar1);
  return pCVar1;
}
