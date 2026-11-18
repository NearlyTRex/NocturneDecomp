// Name: core_ladder.cpp_staticInit_FUN_004c4230
// Address: 004c4230
// Address Range: [[004c4230, 004c4253]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_staticInit_FUN_004c4230(void)

#include "nocturne.h"

void __cdecl core_ladder_cpp_staticInit_FUN_004c4230(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CLadderClassInfo,"CLadder",core_ladder_cpp_factoryFuncLadder_FUN_004c4260,
             &g_CLadderClassVersion,2,&g_CDemonActorClassInfo);
  return;
}
