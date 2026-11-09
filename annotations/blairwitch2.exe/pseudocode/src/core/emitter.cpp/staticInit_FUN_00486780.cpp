// Name: core_emitter.cpp_staticInit_FUN_00486780
// Address: 00486780
// Address Range: [[00486780, 004867a3]]
// Convention: unknown
// Signature: void core_emitter_cpp_staticInit_FUN_00486780(void)

#include "nocturne.h"

void core_emitter_cpp_staticInit_FUN_00486780(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CEmitterClassInfo,";CEmitter" + 1,
             core_emitter_cpp_factoryFuncEmitter_FUN_004867b0,&g_CEmitterClassVersion,0xe,
             &g_CDemonActorClassInfo);
  return;
}
