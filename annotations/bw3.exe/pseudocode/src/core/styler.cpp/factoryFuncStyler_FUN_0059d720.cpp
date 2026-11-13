// Name: core_styler.cpp_factoryFuncStyler_FUN_0059d720
// Address: 0059d720
// Address Range: [[0059d720, 0059d73b]]
// Convention: __cdecl
// Signature: CStyler * __cdecl core_styler_cpp_factoryFuncStyler_FUN_0059d720(void)

#include "nocturne.h"

CStyler * __cdecl core_styler_cpp_factoryFuncStyler_FUN_0059d720(void)

{
  CStyler *pCVar1;
  
  pCVar1 = (CStyler *)operator_new(0x487c8);
  if (pCVar1 == (CStyler *)0x0) {
    return (CStyler *)0x0;
  }
  pCVar1 = core_styler_cpp_CStyler_ctor_FUN_0059d750(pCVar1);
  return pCVar1;
}
