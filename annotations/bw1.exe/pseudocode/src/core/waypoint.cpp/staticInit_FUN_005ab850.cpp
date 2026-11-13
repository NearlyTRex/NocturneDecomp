// Name: core_waypoint.cpp_staticInit_FUN_005ab850
// Address: 005ab850
// Address Range: [[005ab850, 005ab873]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_staticInit_FUN_005ab850(void)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_staticInit_FUN_005ab850(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CWayPointClassInfo,"CWayPoint",
             core_waypoint_cpp_factoryFuncWayPoint_FUN_005ab990,&g_CWayPointClassVersion,2,
             &g_CTriggerClassInfo);
  return;
}
