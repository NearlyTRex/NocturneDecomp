// Name: core_schngeis.cpp_staticInit_FUN_005a2f50
// Address: 005a2f50
// Address Range: [[005a2f50, 005a2f73]]
// Convention: unknown
// Signature: void core_schngeis_cpp_staticInit_FUN_005a2f50(void)

#include "nocturne.h"

void core_schngeis_cpp_staticInit_FUN_005a2f50(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CSchnellGeistClassInfo,"CSchnellGeist",
             core_schngeis_cpp_factoryFuncSchnellGeist_FUN_005a2f80,&g_CSchnellGeistClassVersion,2,
             &g_CBasicEnemyClassInfo);
  return;
}
