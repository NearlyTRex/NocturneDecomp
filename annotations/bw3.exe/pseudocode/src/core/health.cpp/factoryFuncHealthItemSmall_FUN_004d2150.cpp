// Name: core_health.cpp_factoryFuncHealthItemSmall_FUN_004d2150
// Address: 004d2150
// Address Range: [[004d2150, 004d216b]]
// Convention: __cdecl
// Signature: CHealthItemSmall * __cdecl core_health_cpp_factoryFuncHealthItemSmall_FUN_004d2150(void)

#include "nocturne.h"

CHealthItemSmall * __cdecl core_health_cpp_factoryFuncHealthItemSmall_FUN_004d2150(void)

{
  CHealthItemSmall *pCVar1;
  
  pCVar1 = (CHealthItemSmall *)operator_new(0x2e4);
  if (pCVar1 == (CHealthItemSmall *)0x0) {
    return (CHealthItemSmall *)0x0;
  }
  pCVar1 = core_health_cpp_CHealthItemSmall_ctor_FUN_004d2180(pCVar1);
  return pCVar1;
}
