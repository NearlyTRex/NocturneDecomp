// Name: core_waypoint.cpp_factoryFuncWayPoint_FUN_00579240
// Address: 00579240
// Address Range: [[00579240, 0057925b]]
// Convention: unknown
// Signature: void core_waypoint_cpp_factoryFuncWayPoint_FUN_00579240(void)

#include "nocturne.h"

void core_waypoint_cpp_factoryFuncWayPoint_FUN_00579240(void)

{
  CWayPoint *this_ptr;
  
  this_ptr = (CWayPoint *)operator_new(0x55c);
  if (this_ptr == (CWayPoint *)0x0) {
    return;
  }
  core_waypoint_cpp_CWayPoint_ctor_FUN_00579270(this_ptr);
  return;
}
