// Name: core_hpriest.cpp_factoryFuncHighPriestOfGardath_FUN_004d4750
// Address: 004d4750
// Address Range: [[004d4750, 004d476b]]
// Convention: __cdecl
// Signature: CHighPriestOfGardath * __cdecl core_hpriest_cpp_factoryFuncHighPriestOfGardath_FUN_004d4750(void)

#include "nocturne.h"

CHighPriestOfGardath * __cdecl core_hpriest_cpp_factoryFuncHighPriestOfGardath_FUN_004d4750(void)

{
  CHighPriestOfGardath *pCVar1;
  
  pCVar1 = (CHighPriestOfGardath *)operator_new(0x243ac);
  if (pCVar1 == (CHighPriestOfGardath *)0x0) {
    return (CHighPriestOfGardath *)0x0;
  }
  pCVar1 = core_hpriest_cpp_CHighPriestOfGardath_ctor_FUN_004d4780(pCVar1);
  return pCVar1;
}
