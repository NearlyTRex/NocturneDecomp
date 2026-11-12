// Name: core_waypoint.cpp_factoryFuncWayPoint_FUN_005ab990
// Address: 005ab990
// Address Range: [[005ab990, 005ab9ab]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_factoryFuncWayPoint_FUN_005ab990(void)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_factoryFuncWayPoint_FUN_005ab990(void)

{
  CWayPoint *pCVar1;
  
  pCVar1 = (CWayPoint *)operator_new(0x55c);
  if (pCVar1 == (CWayPoint *)0x0) {
    return (CWayPoint *)0x0;
  }
  pCVar1 = core_waypoint_cpp_CWayPoint_ctor_FUN_005ab9c0(pCVar1);
  return pCVar1;
}
