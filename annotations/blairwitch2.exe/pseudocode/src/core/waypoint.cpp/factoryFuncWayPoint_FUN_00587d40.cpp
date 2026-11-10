// Name: core_waypoint.cpp_factoryFuncWayPoint_FUN_00587d40
// Address: 00587d40
// Address Range: [[00587d40, 00587d5b]]
// Convention: unknown
// Signature: void core_waypoint_cpp_factoryFuncWayPoint_FUN_00587d40(void)

#include "nocturne.h"

void core_waypoint_cpp_factoryFuncWayPoint_FUN_00587d40(void)

{
  CWayPoint *this_ptr;
  
  this_ptr = (CWayPoint *)debugAllocTracked1(0x6bc);
  if (this_ptr == (CWayPoint *)0x0) {
    return;
  }
  core_waypoint_cpp_CWayPoint_ctor_FUN_00587d70(this_ptr);
  return;
}
