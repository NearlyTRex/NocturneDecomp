// Name: core_hpriest.cpp_factoryFunc_FUN_004b9ac0
// Address: 004b9ac0
// Address Range: [[004b9ac0, 004b9adb]]
// Convention: __cdecl
// Signature: CHighPriestOfGardath * __cdecl core_hpriest_cpp_factoryFunc_FUN_004b9ac0(void)

#include "nocturne.h"

CHighPriestOfGardath * __cdecl core_hpriest_cpp_factoryFunc_FUN_004b9ac0(void)

{
  int iVar1;
  CHighPriestOfGardath *pCVar2;
  
  iVar1 = FUN_0056497c(0x1f5d4);
  if (iVar1 == 0) {
    return (CHighPriestOfGardath *)0x0;
  }
  pCVar2 = (CHighPriestOfGardath *)core_hpriest_cpp_FUN_004b9af0(iVar1);
  return pCVar2;
}
