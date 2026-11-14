// Name: core_disease.cpp_factoryFuncDisease_FUN_0045bf50
// Address: 0045bf50
// Address Range: [[0045bf50, 0045bf6b]]
// Convention: __cdecl
// Signature: CDisease * __cdecl core_disease_cpp_factoryFuncDisease_FUN_0045bf50(void)

#include "nocturne.h"

CDisease * __cdecl core_disease_cpp_factoryFuncDisease_FUN_0045bf50(void)

{
  CDisease *pCVar1;
  
  pCVar1 = (CDisease *)operator_new(0x5a4);
  if (pCVar1 == (CDisease *)0x0) {
    return (CDisease *)0x0;
  }
  pCVar1 = core_disease_cpp_CDisease_ctor_FUN_0045bf80(pCVar1);
  return pCVar1;
}
