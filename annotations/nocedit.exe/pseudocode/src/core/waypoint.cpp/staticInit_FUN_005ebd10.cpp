// Name: core_waypoint.cpp_staticInit_FUN_005ebd10
// Address: 005ebd10
// Address Range: [[005ebd10, 005ebd33]]
// Convention: __cdecl
// Signature: CDemonActorType * core_waypoint.cpp_staticInit_FUN_005ebd10(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_waypoint_cpp_staticInit_FUN_005ebd10(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CWayPointClassInfo,"CWayPoint",core_waypoint_cpp_FUN_005ebe30,
                      &g_CWayPointClassVersion,2,&g_CTriggerClassInfo);
  return pCVar1;
}
