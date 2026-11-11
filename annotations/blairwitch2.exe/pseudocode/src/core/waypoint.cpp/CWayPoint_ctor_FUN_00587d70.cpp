// Name: core_waypoint.cpp_CWayPoint_ctor_FUN_00587d70
// Address: 00587d70
// Address Range: [[00587d70, 00587db9]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_ctor_FUN_00587d70(CWayPoint *this_ptr)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_ctor_FUN_00587d70(CWayPoint *this_ptr)

{
  CWayPoint *pCVar1;
  
  pCVar1 = (CWayPoint *)core_trigger_cpp_CTrigger_ctor_FUN_005776f0(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CWayPointVTable;
  (pCVar1->base).trigger_size.x = 0.5;
  (pCVar1->base).trigger_size.y = 1.0;
  (pCVar1->base).trigger_size.z = 0.5;
  pCVar1->num_adjacent_waypoints = 0;
  *(uint *)&pCVar1->field_0x6b8 = 0;
  return pCVar1;
}
