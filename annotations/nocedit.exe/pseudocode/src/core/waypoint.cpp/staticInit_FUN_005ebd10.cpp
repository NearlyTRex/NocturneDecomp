// Name: core_waypoint.cpp_staticInit_FUN_005ebd10
// Address: 005ebd10
// Address Range: [[005ebd10, 005ebd33]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_staticInit_FUN_005ebd10(void)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_staticInit_FUN_005ebd10(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CWayPointClassInfo,"CWayPoint",
             core_waypoint_cpp_factoryFuncWayPoint_FUN_005ebe30,&g_CWayPointClassVersion,2,
             &g_CTriggerClassInfo);
  return;
}
