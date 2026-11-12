// Name: core_hpatrol.cpp_CPatrolPoint_ctor_FUN_0059c5e0
// Address: 0059c5e0
// Address Range: [[0059c5e0, 0059c601]]
// Convention: unknown
// Signature: CPatrolPoint * core_hpatrol_cpp_CPatrolPoint_ctor_FUN_0059c5e0(CPatrolPoint *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CPatrolPoint * core_hpatrol_cpp_CPatrolPoint_ctor_FUN_0059c5e0(CPatrolPoint *this_ptr)

{
  CWayPoint *pCVar1;
  
  pCVar1 = core_waypoint_cpp_CWayPoint_ctor_FUN_00587d70(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CPatrolPointVTable;
  *(uint *)&pCVar1->field_0x6b8 = 1;
  return (CPatrolPoint *)pCVar1;
}
