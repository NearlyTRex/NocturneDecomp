// Name: core_patrpoin.cpp_CPatrolPoint_ctor_FUN_0059c5e0
// Address: 0059c5e0
// Address Range: [[0059c5e0, 0059c601]]
// Convention: unknown
// Signature: CPatrolPoint * core_patrpoin_cpp_CPatrolPoint_ctor_FUN_0059c5e0(CPatrolPoint *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CPatrolPoint * core_patrpoin_cpp_CPatrolPoint_ctor_FUN_0059c5e0(CPatrolPoint *this_ptr)

{
  CWayPoint *pCVar1;
  
  pCVar1 = core_waypoint_cpp_CWayPoint_ctor_FUN_00587d70((CWayPoint *)this_ptr);
  *(byte **)&pCVar1->field_0x2b0 = &g_CPatrolPointVTable;
  *(uint *)&pCVar1->field_0x6b8 = 1;
  return (CPatrolPoint *)pCVar1;
}
