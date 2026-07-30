// Name: core_waypoint.cpp_staticInit_FUN_00552380
// Address: 00552380
// Address Range: [[00552380, 005523a3]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_staticInit_FUN_00552380(void)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_staticInit_FUN_00552380(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CWayPointActorType_02ddf514,"CWayPoint",
             core_waypoint_cpp_factoryFunc_FUN_005524a0,&INT_005c1578,2,
             &g_CTriggerActorType_02dd1084);
  return;
}
