// Name: core_backgnd.cpp_staticInit_FUN_00412740
// Address: 00412740
// Address Range: [[00412740, 00412763]]
// Convention: __cdecl
// Signature: void __cdecl core_backgnd_cpp_staticInit_FUN_00412740(void)

#include "nocturne.h"

void __cdecl core_backgnd_cpp_staticInit_FUN_00412740(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CBackgroundActorClassInfo,"CBackgroundActor",
             core_backgnd_cpp_factoryFuncBackgroundActor_FUN_00412770,
             &g_CBackgroundActorClassVersion,2,&g_CDemonActorClassInfo);
  return;
}
