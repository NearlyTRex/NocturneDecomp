// Name: core_waypoint.cpp_factoryFunc_FUN_005524a0
// Address: 005524a0
// Address Range: [[005524a0, 005524bb]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_factoryFunc_FUN_005524a0(void)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_factoryFunc_FUN_005524a0(void)

{
  CWayPoint *pCVar1;
  
  pCVar1 = operator_new(0x550);
  if (pCVar1 == (CWayPoint *)0x0) {
    return (CWayPoint *)0x0;
  }
  pCVar1 = core_waypoint_cpp_CWayPoint_ctor_FUN_005524d0(pCVar1);
  return pCVar1;
}
