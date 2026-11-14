// Name: core_waypoint.cpp_staticInit_FUN_00587c00
// Address: 00587c00
// Address Range: [[00587c00, 00587c23]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_staticInit_FUN_00587c00(void)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_staticInit_FUN_00587c00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CWayPointClassInfo,"CWayPoint",
             core_waypoint_cpp_factoryFuncWayPoint_FUN_00587d40,&g_CWayPointClassVersion,2,
             &g_CTriggerClassInfo);
  return;
}
