// Name: core_hotdemon.cpp_staticInit_FUN_004d3790
// Address: 004d3790
// Address Range: [[004d3790, 004d37b3]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_staticInit_FUN_004d3790(void)

#include "nocturne.h"

void core_hotdemon_cpp_staticInit_FUN_004d3790(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CHotDemonClassInfo,"CHotDemon",
             core_hotdemon_cpp_factoryFuncHotDemon_FUN_004d37c0,&g_CHotDemonClassVersion,1,
             &g_CEnemyClassInfo);
  return;
}
