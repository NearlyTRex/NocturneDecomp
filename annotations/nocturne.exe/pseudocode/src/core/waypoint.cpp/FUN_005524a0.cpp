// Name: core_waypoint.cpp_FUN_005524a0
// Address: 005524a0
// Address Range: [[005524a0, 005524bb]]
// Convention: unknown
// Signature: void core_waypoint_cpp_FUN_005524a0(void)

#include "nocturne.h"

void core_waypoint_cpp_FUN_005524a0(void)

{
  CWayPoint *this_ptr;
  
  this_ptr = (CWayPoint *)FUN_0056497c(0x550);
  if (this_ptr == (CWayPoint *)0x0) {
    return;
  }
  core_waypoint_cpp_FUN_005524d0(this_ptr);
  return;
}
