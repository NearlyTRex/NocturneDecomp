// Name: core_health.cpp_factoryFunc_FUN_004b41c0
// Address: 004b41c0
// Address Range: [[004b41c0, 004b41db]]
// Convention: __cdecl
// Signature: CHealthItem * __cdecl core_health_cpp_factoryFunc_FUN_004b41c0(void)

#include "nocturne.h"

CHealthItem * __cdecl core_health_cpp_factoryFunc_FUN_004b41c0(void)

{
  CHealthItem *pCVar1;
  
  pCVar1 = (CHealthItem *)FUN_0056497c(0x2d4);
  if (pCVar1 == (CHealthItem *)0x0) {
    return (CHealthItem *)0x0;
  }
  pCVar1 = core_health_cpp_CHealthItem_ctor_FUN_004b41f0(pCVar1);
  return pCVar1;
}
