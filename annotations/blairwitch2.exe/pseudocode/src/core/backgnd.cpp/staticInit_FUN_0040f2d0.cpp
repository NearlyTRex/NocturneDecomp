// Name: core_backgnd.cpp_staticInit_FUN_0040f2d0
// Address: 0040f2d0
// Address Range: [[0040f2d0, 0040f2f3]]
// Convention: unknown
// Signature: void core_backgnd_cpp_staticInit_FUN_0040f2d0(void)

#include "nocturne.h"

void core_backgnd_cpp_staticInit_FUN_0040f2d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBackgroundActorClassInfo,"CBackgroundActor",
             core_backgnd_cpp_factoryFuncBackgroundActor_FUN_0040f300,
             &g_CBackgroundActorClassVersion,3,&g_CDemonActorClassInfo);
  return;
}
