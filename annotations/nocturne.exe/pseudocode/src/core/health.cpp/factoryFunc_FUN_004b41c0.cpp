// Name: core_health.cpp_factoryFunc_FUN_004b41c0
// Address: 004b41c0
// Address Range: [[004b41c0, 004b41db]]
// Convention: __cdecl
// Signature: CHealthItem * __cdecl core_health_cpp_factoryFunc_FUN_004b41c0(void)

#include "nocturne.h"

CHealthItem * __cdecl core_health_cpp_factoryFunc_FUN_004b41c0(void)

{
  int iVar1;
  CHealthItem *pCVar2;
  
  iVar1 = FUN_0056497c(0x2d4);
  if (iVar1 == 0) {
    return (CHealthItem *)0x0;
  }
  pCVar2 = (CHealthItem *)core_health_cpp_FUN_004b41f0(iVar1);
  return pCVar2;
}
