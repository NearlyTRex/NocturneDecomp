// Name: core_waypoint.cpp_CWayPoint_getActorType_FUN_005ebe60
// Address: 005ebe60
// Address Range: [[005ebe60, 005ebe65]]
// Convention: __cdecl
// Signature: CDemonActorType * core_waypoint.cpp_CWayPoint_getActorType_FUN_005ebe60(CWayPoint * this_ptr)
// Globals:
//   CDemonActorType g_CWayPointClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_waypoint_cpp_CWayPoint_getActorType_FUN_005ebe60(CWayPoint *this_ptr)

{
  return &g_CWayPointClassInfo;
}


// Assembly code:
// 005ebe60: MOV EAX,0x3f958e4
//   Label: core_waypoint.cpp_CWayPoint_getActorType_FUN_005ebe60
//   XREF to: 03f958e4 (DATA)
// 005ebe65: RET
