// Name: core_hpatrol.cpp_staticInit_FUN_0059c580
// Address: 0059c580
// Address Range: [[0059c580, 0059c5a3]]
// Convention: __cdecl
// Signature: void __cdecl core_hpatrol_cpp_staticInit_FUN_0059c580(void)

#include "nocturne.h"

void __cdecl core_hpatrol_cpp_staticInit_FUN_0059c580(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CPatrolPointClassInfo,"CPatrolPoint",
             core_hpatrol_cpp_factoryFuncPatrolPoint_FUN_0059c5b0,&g_CPatrolPointClassVersion,1,
             &g_CWayPointClassInfo);
  return;
}
