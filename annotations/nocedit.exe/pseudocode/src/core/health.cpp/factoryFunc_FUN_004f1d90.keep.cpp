// Name: core_health.cpp_factoryFunc_FUN_004f1d90
// Address: 004f1d90
// MANUAL RECONSTRUCTION
// Address Range: [[004f1d90, 004f1db2]]
// Convention: __cdecl
// Signature: CHealthItem * __cdecl core_health_cpp_factoryFunc_FUN_004f1d90(void)

#include "nocturne.h"

CHealthItem * __cdecl core_health_cpp_factoryFunc_FUN_004f1d90(void)

{
  CHealthItem *pCVar1;
  
  pCVar1 = (CHealthItem *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CHealthItem),"..\\core\\health.cpp",34);
  if (pCVar1 == (CHealthItem *)0x0) {
    return (CHealthItem *)0x0;
  }
  pCVar1 = core_health_cpp_CHealthItem_ctor_FUN_004f1dd0(pCVar1);
  return pCVar1;
}
