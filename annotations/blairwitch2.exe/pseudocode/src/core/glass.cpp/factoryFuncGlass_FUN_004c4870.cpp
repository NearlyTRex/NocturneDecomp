// Name: core_glass.cpp_factoryFuncGlass_FUN_004c4870
// Address: 004c4870
// Address Range: [[004c4870, 004c488b]]
// Convention: __cdecl
// Signature: CGlass * __cdecl core_glass_cpp_factoryFuncGlass_FUN_004c4870(void)

#include "nocturne.h"

CGlass * __cdecl core_glass_cpp_factoryFuncGlass_FUN_004c4870(void)

{
  CGlass *pCVar1;
  
  pCVar1 = (CGlass *)operator_new(0xc9c);
  if (pCVar1 == (CGlass *)0x0) {
    return (CGlass *)0x0;
  }
  pCVar1 = core_glass_cpp_CGlass_ctor_FUN_004c48a0(pCVar1);
  return pCVar1;
}
