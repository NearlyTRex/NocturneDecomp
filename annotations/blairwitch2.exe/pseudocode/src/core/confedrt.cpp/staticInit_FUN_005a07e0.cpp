// Name: core_confedrt.cpp_staticInit_FUN_005a07e0
// Address: 005a07e0
// Address Range: [[005a07e0, 005a0803]]
// Convention: __cdecl
// Signature: void __cdecl core_confedrt_cpp_staticInit_FUN_005a07e0(void)

#include "nocturne.h"

void __cdecl core_confedrt_cpp_staticInit_FUN_005a07e0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CConfederateClassInfo,"CConfederate",
             core_confedrt_cpp_factoryFuncConfederate_FUN_005a0810,&g_CConfederateClassVersion,1,
             &g_CBasicEnemyClassInfo);
  return;
}
