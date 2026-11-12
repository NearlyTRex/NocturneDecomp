// Name: core_hpriest.cpp_factoryFuncHighPriestOfGardath_FUN_004f0960
// Address: 004f0960
// Address Range: [[004f0960, 004f097b]]
// Convention: __cdecl
// Signature: CHighPriestOfGardath * __cdecl core_hpriest_cpp_factoryFuncHighPriestOfGardath_FUN_004f0960(void)

#include "nocturne.h"

CHighPriestOfGardath * __cdecl core_hpriest_cpp_factoryFuncHighPriestOfGardath_FUN_004f0960(void)

{
  CHighPriestOfGardath *pCVar1;
  
  pCVar1 = (CHighPriestOfGardath *)operator_new(0x1fb1c);
  if (pCVar1 == (CHighPriestOfGardath *)0x0) {
    return (CHighPriestOfGardath *)0x0;
  }
  pCVar1 = core_hpriest_cpp_CHighPriestOfGardath_ctor_FUN_004f0990(pCVar1);
  return pCVar1;
}
