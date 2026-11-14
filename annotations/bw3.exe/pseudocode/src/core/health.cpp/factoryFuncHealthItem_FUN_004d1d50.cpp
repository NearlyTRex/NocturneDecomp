// Name: core_health.cpp_factoryFuncHealthItem_FUN_004d1d50
// Address: 004d1d50
// Address Range: [[004d1d50, 004d1d6b]]
// Convention: __cdecl
// Signature: CHealthItem * __cdecl core_health_cpp_factoryFuncHealthItem_FUN_004d1d50(void)

#include "nocturne.h"

CHealthItem * __cdecl core_health_cpp_factoryFuncHealthItem_FUN_004d1d50(void)

{
  CHealthItem *pCVar1;
  
  pCVar1 = (CHealthItem *)operator_new(0x2e4);
  if (pCVar1 == (CHealthItem *)0x0) {
    return (CHealthItem *)0x0;
  }
  pCVar1 = core_health_cpp_CHealthItem_ctor_FUN_004d1d80(pCVar1);
  return pCVar1;
}
