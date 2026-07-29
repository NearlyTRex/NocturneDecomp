// Name: core_waypoint.cpp_FUN_005524d0
// Address: 005524d0
// Address Range: [[005524d0, 0055250f]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_FUN_005524d0(CWayPoint *this_ptr)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_FUN_005524d0(CWayPoint *this_ptr)

{
  CWayPoint *pCVar1;
  
  pCVar1 = (CWayPoint *)core_trigger_cpp_CTrigger_ctor_FUN_005478b0(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CWayPointVTable;
  (pCVar1->base).trigger_size.x = 0.5;
  (pCVar1->base).trigger_size.y = 1.0;
  (pCVar1->base).trigger_size.z = 0.5;
  pCVar1->num_adjacent_waypoints = 0;
  return pCVar1;
}
