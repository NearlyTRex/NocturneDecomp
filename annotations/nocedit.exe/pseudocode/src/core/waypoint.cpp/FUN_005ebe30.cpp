// Name: core_waypoint.cpp_FUN_005ebe30
// Address: 005ebe30
// Address Range: [[005ebe30, 005ebe52]]
// Convention: unknown
// Signature: undefined core_waypoint.cpp_FUN_005ebe30()

#include "nocturne.h"

void core_waypoint_cpp_FUN_005ebe30(void)

{
  CWayPoint *this_ptr;
  
  this_ptr = (CWayPoint *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x558,"..\\core\\waypoint.cpp",0x53);
  if (this_ptr == (CWayPoint *)0x0) {
    return;
  }
  core_waypoint_cpp_CWayPoint_ctor_FUN_005ebe70(this_ptr);
  return;
}
