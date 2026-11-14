// Name: core_glass.cpp_factoryFuncGlass_FUN_004c9b70
// Address: 004c9b70
// Address Range: [[004c9b70, 004c9b8b]]
// Convention: __cdecl
// Signature: CGlass * __cdecl core_glass_cpp_factoryFuncGlass_FUN_004c9b70(void)

#include "nocturne.h"

CGlass * __cdecl core_glass_cpp_factoryFuncGlass_FUN_004c9b70(void)

{
  CGlass *pCVar1;
  
  pCVar1 = (CGlass *)operator_new(0xb70);
  if (pCVar1 == (CGlass *)0x0) {
    return (CGlass *)0x0;
  }
  pCVar1 = core_glass_cpp_CGlass_ctor_FUN_004c9ba0(pCVar1);
  return pCVar1;
}
