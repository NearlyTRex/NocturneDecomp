// Name: core_ladder.cpp_staticInit_FUN_004dff00
// Address: 004dff00
// Address Range: [[004dff00, 004dff23]]
// Convention: unknown
// Signature: void core_ladder_cpp_staticInit_FUN_004dff00(void)

#include "nocturne.h"

void core_ladder_cpp_staticInit_FUN_004dff00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CLadderClassInfo,"CLadder",core_ladder_cpp_factoryFuncLadder_FUN_004dff30,
             &g_CLadderClassVersion,2,&g_CDemonActorClassInfo);
  return;
}
