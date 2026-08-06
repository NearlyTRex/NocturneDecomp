// Name: core_hpriest.cpp_factoryFunc_FUN_004b9ac0
// Address: 004b9ac0
// Address Range: [[004b9ac0, 004b9adb]]
// Convention: __cdecl
// Signature: CHighPriestOfGardath * __cdecl core_hpriest_cpp_factoryFunc_FUN_004b9ac0(void)

#include "nocturne.h"

CHighPriestOfGardath * __cdecl core_hpriest_cpp_factoryFunc_FUN_004b9ac0(void)

{
  CHighPriestOfGardath *pCVar1;
  
  pCVar1 = operator_new(0x1f5d4);
  if (pCVar1 == (CHighPriestOfGardath *)0x0) {
    return (CHighPriestOfGardath *)0x0;
  }
  pCVar1 = core_hpriest_cpp_CHighPriestOfGardath_ctor_FUN_004b9af0(pCVar1);
  return pCVar1;
}
