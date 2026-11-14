// Name: core_emitter.cpp_staticInit_FUN_00487980
// Address: 00487980
// Address Range: [[00487980, 004879a3]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_staticInit_FUN_00487980(void)

#include "nocturne.h"

void __cdecl core_emitter_cpp_staticInit_FUN_00487980(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CEmitterClassInfo,";CEmitter" + 1,
             core_emitter_cpp_factoryFuncEmitter_FUN_004879b0,&g_CEmitterClassVersion,0xe,
             &g_CDemonActorClassInfo);
  return;
}
