// Name: core_waypoint.cpp_CWayPoint_FUN_005ec5e0
// Address: 005ec5e0
// Address Range: [[005ec5e0, 005ec604]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec5e0(CWayPoint *this_ptr)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec5e0(CWayPoint *this_ptr)

{
  core_waypoint_cpp_FUN_005ec4f0();
  core_trigger_cpp_CTrigger_FUN_005e1180(&this_ptr->base);
  (*((this_ptr->base).base.vtable._ub)->setup)((CDemonActor *)this_ptr);
  return;
}
