// Name: core_emitter.cpp_staticInit_FUN_0049ede0
// Address: 0049ede0
// Address Range: [[0049ede0, 0049ee03]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_staticInit_FUN_0049ede0(void)

#include "nocturne.h"

void __cdecl core_emitter_cpp_staticInit_FUN_0049ede0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CEmitterClassInfo,";CEmitter" + 1,
             core_emitter_cpp_factoryFuncEmitter_FUN_0049ee10,&g_CEmitterClassVersion,0xe,
             &g_CDemonActorClassInfo);
  return;
}
