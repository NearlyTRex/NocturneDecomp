// Name: core_hotdemon.cpp_staticInit_FUN_004ef9b0
// Address: 004ef9b0
// Address Range: [[004ef9b0, 004ef9d3]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_staticInit_FUN_004ef9b0(void)

#include "nocturne.h"

void core_hotdemon_cpp_staticInit_FUN_004ef9b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CHotDemonClassInfo,"CHotDemon",
             core_hotdemon_cpp_factoryFuncHotDemon_FUN_004ef9e0,&g_CHotDemonClassVersion,1,
             &g_CEnemyClassInfo);
  return;
}
