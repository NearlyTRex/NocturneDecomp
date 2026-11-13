// Name: core_waypoint.cpp_staticInit_FUN_00579100
// Address: 00579100
// Address Range: [[00579100, 00579123]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_staticInit_FUN_00579100(void)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_staticInit_FUN_00579100(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CWayPointClassInfo,"CWayPoint",
             core_waypoint_cpp_factoryFuncWayPoint_FUN_00579240,&g_CWayPointClassVersion,2,
             &g_CTriggerClassInfo);
  return;
}
