// Name: core_waypoint.cpp_factoryFuncWayPoint_FUN_00579240
// Address: 00579240
// Address Range: [[00579240, 0057925b]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_factoryFuncWayPoint_FUN_00579240(void)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_factoryFuncWayPoint_FUN_00579240(void)

{
  CWayPoint *pCVar1;
  
  pCVar1 = (CWayPoint *)operator_new(0x55c);
  if (pCVar1 == (CWayPoint *)0x0) {
    return (CWayPoint *)0x0;
  }
  pCVar1 = core_waypoint_cpp_CWayPoint_ctor_FUN_00579270(pCVar1);
  return pCVar1;
}
