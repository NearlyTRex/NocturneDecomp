// Name: core_emitter.cpp_staticInit_FUN_00478360
// Address: 00478360
// Address Range: [[00478360, 00478383]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_staticInit_FUN_00478360(void)

#include "nocturne.h"

void __cdecl core_emitter_cpp_staticInit_FUN_00478360(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CEmitterActorType_01bcde80,"CEmitter",
             core_emitter_cpp_factoryFunc_FUN_00478390,&INT_005b75dc,7,
             &g_CDemonActorActorType_00763e48);
  return;
}
