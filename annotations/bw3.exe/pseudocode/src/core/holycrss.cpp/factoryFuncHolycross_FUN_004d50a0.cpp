// Name: core_holycrss.cpp_factoryFuncHolycross_FUN_004d50a0
// Address: 004d50a0
// Address Range: [[004d50a0, 004d50bb]]
// Convention: __cdecl
// Signature: CHolycross * __cdecl core_holycrss_cpp_factoryFuncHolycross_FUN_004d50a0(void)

#include "nocturne.h"

CHolycross * __cdecl core_holycrss_cpp_factoryFuncHolycross_FUN_004d50a0(void)

{
  CHolycross *pCVar1;
  
  pCVar1 = (CHolycross *)operator_new(0x594);
  if (pCVar1 == (CHolycross *)0x0) {
    return (CHolycross *)0x0;
  }
  pCVar1 = core_holycrss_cpp_CHolycross_ctor_FUN_004d50d0(pCVar1);
  return pCVar1;
}
