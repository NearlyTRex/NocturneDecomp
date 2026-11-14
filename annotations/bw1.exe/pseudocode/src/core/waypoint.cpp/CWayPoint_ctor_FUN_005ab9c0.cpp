// Name: core_waypoint.cpp_CWayPoint_ctor_FUN_005ab9c0
// Address: 005ab9c0
// Address Range: [[005ab9c0, 005ab9ff]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_ctor_FUN_005ab9c0(CWayPoint *this_ptr)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_ctor_FUN_005ab9c0(CWayPoint *this_ptr)

{
  CWayPoint *pCVar1;
  
  pCVar1 = (CWayPoint *)core_trigger_cpp_CTrigger_ctor_FUN_0059afb0(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CWayPointVTable;
  (pCVar1->base).trigger_size.x = 0.5;
  (pCVar1->base).trigger_size.y = 1.0;
  (pCVar1->base).trigger_size.z = 0.5;
  pCVar1->num_adjacent_waypoints = 0;
  return pCVar1;
}
