// Name: core_waypoint.cpp_factoryFuncWayPoint_FUN_005ab990
// Address: 005ab990
// Address Range: [[005ab990, 005ab9ab]]
// Convention: unknown
// Signature: void core_waypoint_cpp_factoryFuncWayPoint_FUN_005ab990(void)

#include "nocturne.h"

void core_waypoint_cpp_factoryFuncWayPoint_FUN_005ab990(void)

{
  CWayPoint *this_ptr;
  
  this_ptr = (CWayPoint *)FUN_005c0f32(0x55c);
  if (this_ptr == (CWayPoint *)0x0) {
    return;
  }
  core_waypoint_cpp_CWayPoint_ctor_FUN_005ab9c0(this_ptr);
  return;
}
