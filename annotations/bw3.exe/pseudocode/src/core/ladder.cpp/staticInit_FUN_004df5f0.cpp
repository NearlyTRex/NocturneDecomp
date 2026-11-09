// Name: core_ladder.cpp_staticInit_FUN_004df5f0
// Address: 004df5f0
// Address Range: [[004df5f0, 004df613]]
// Convention: unknown
// Signature: void core_ladder_cpp_staticInit_FUN_004df5f0(void)

#include "nocturne.h"

void core_ladder_cpp_staticInit_FUN_004df5f0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CLadderClassInfo,"CLadder",core_ladder_cpp_factoryFuncLadder_FUN_004df620,
             &g_CLadderClassVersion,2,&g_CDemonActorClassInfo);
  return;
}
