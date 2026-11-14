// Name: core_waypoint.cpp_factoryFuncWayPoint_FUN_00587d40
// Address: 00587d40
// Address Range: [[00587d40, 00587d5b]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_factoryFuncWayPoint_FUN_00587d40(void)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_factoryFuncWayPoint_FUN_00587d40(void)

{
  CWayPoint *pCVar1;
  
  pCVar1 = (CWayPoint *)operator_new(0x6bc);
  if (pCVar1 == (CWayPoint *)0x0) {
    return (CWayPoint *)0x0;
  }
  pCVar1 = core_waypoint_cpp_CWayPoint_ctor_FUN_00587d70(pCVar1);
  return pCVar1;
}
