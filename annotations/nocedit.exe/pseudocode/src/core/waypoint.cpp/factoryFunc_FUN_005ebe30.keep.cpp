// Name: core_waypoint.cpp_factoryFunc_FUN_005ebe30
// Address: 005ebe30
// MANUAL RECONSTRUCTION
// Address Range: [[005ebe30, 005ebe52]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_factoryFunc_FUN_005ebe30(void)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_factoryFunc_FUN_005ebe30(void)

{
  CWayPoint *pCVar1;
  
  pCVar1 = (CWayPoint *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CWayPoint),"..\\core\\waypoint.cpp",0x53)
  ;
  if (pCVar1 == (CWayPoint *)0x0) {
    return (CWayPoint *)0x0;
  }
  pCVar1 = core_waypoint_cpp_CWayPoint_ctor_FUN_005ebe70(pCVar1);
  return pCVar1;
}
