// Name: core_health.cpp_factoryFuncHealthItem_FUN_004ea300
// Address: 004ea300
// Address Range: [[004ea300, 004ea31b]]
// Convention: __cdecl
// Signature: CHealthItem * __cdecl core_health_cpp_factoryFuncHealthItem_FUN_004ea300(void)

#include "nocturne.h"

CHealthItem * __cdecl core_health_cpp_factoryFuncHealthItem_FUN_004ea300(void)

{
  CHealthItem *pCVar1;
  
  pCVar1 = (CHealthItem *)operator_new(0x2dc);
  if (pCVar1 == (CHealthItem *)0x0) {
    return (CHealthItem *)0x0;
  }
  pCVar1 = core_health_cpp_CHealthItem_ctor_FUN_004ea330(pCVar1);
  return pCVar1;
}
