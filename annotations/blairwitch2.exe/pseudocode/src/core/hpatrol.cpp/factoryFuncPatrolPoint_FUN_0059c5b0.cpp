// Name: core_hpatrol.cpp_factoryFuncPatrolPoint_FUN_0059c5b0
// Address: 0059c5b0
// Address Range: [[0059c5b0, 0059c5cb]]
// Convention: __cdecl
// Signature: CPatrolPoint * __cdecl core_hpatrol_cpp_factoryFuncPatrolPoint_FUN_0059c5b0(void)

#include "nocturne.h"

CPatrolPoint * __cdecl core_hpatrol_cpp_factoryFuncPatrolPoint_FUN_0059c5b0(void)

{
  CPatrolPoint *pCVar1;
  
  pCVar1 = (CPatrolPoint *)operator_new(0x6bc);
  if (pCVar1 == (CPatrolPoint *)0x0) {
    return (CPatrolPoint *)0x0;
  }
  pCVar1 = core_hpatrol_cpp_CPatrolPoint_ctor_FUN_0059c5e0(pCVar1);
  return pCVar1;
}
