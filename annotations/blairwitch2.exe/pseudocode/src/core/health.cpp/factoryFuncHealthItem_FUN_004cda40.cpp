// Name: core_health.cpp_factoryFuncHealthItem_FUN_004cda40
// Address: 004cda40
// Address Range: [[004cda40, 004cda5b]]
// Convention: __cdecl
// Signature: CHealthItem * __cdecl core_health_cpp_factoryFuncHealthItem_FUN_004cda40(void)

#include "nocturne.h"

CHealthItem * __cdecl core_health_cpp_factoryFuncHealthItem_FUN_004cda40(void)

{
  CHealthItem *pCVar1;
  
  pCVar1 = (CHealthItem *)operator_new(0x43c);
  if (pCVar1 == (CHealthItem *)0x0) {
    return (CHealthItem *)0x0;
  }
  pCVar1 = core_health_cpp_CHealthItem_ctor_FUN_004cda70(pCVar1);
  return pCVar1;
}
