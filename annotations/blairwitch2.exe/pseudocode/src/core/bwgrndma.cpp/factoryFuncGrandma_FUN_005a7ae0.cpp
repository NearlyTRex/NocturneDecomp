// Name: core_bwgrndma.cpp_factoryFuncGrandma_FUN_005a7ae0
// Address: 005a7ae0
// Address Range: [[005a7ae0, 005a7afb]]
// Convention: __cdecl
// Signature: CGrandma * __cdecl core_bwgrndma_cpp_factoryFuncGrandma_FUN_005a7ae0(void)

#include "nocturne.h"

CGrandma * __cdecl core_bwgrndma_cpp_factoryFuncGrandma_FUN_005a7ae0(void)

{
  CGrandma *pCVar1;
  
  pCVar1 = (CGrandma *)operator_new(0x11854);
  if (pCVar1 == (CGrandma *)0x0) {
    return (CGrandma *)0x0;
  }
  pCVar1 = core_bwgrndma_cpp_CGrandma_ctor_FUN_005a7b10(pCVar1);
  return pCVar1;
}
