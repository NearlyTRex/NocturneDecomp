// Name: core_backgnd.cpp_staticInit_FUN_0040ee50
// Address: 0040ee50
// Address Range: [[0040ee50, 0040ee73]]
// Convention: unknown
// Signature: void core_backgnd_cpp_staticInit_FUN_0040ee50(void)

#include "nocturne.h"

void core_backgnd_cpp_staticInit_FUN_0040ee50(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBackgroundActorClassInfo,"CBackgroundActor",
             core_backgnd_cpp_factoryFuncBackgroundActor_FUN_0040ee80,
             &g_CBackgroundActorClassVersion,3,&g_CDemonActorClassInfo);
  return;
}
