// Name: core_emitter.cpp_staticInit_FUN_004a7c30
// Address: 004a7c30
// Address Range: [[004a7c30, 004a7c53]]
// Convention: __cdecl
// Signature: void core_emitter.cpp_staticInit_FUN_004a7c30(void)

#include "nocturne.h"

void __cdecl core_emitter_cpp_staticInit_FUN_004a7c30(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CEmitterClassInfo,"CEmitter",core_emitter_cpp_factoryFunc_FUN_004a7c60,
             &g_CEmitterClassVersion,7,&g_CDemonActorClassInfo);
  return;
}
