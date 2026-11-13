// Name: core_ladder.cpp_staticInit_FUN_004fd2d0
// Address: 004fd2d0
// Address Range: [[004fd2d0, 004fd2f3]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_staticInit_FUN_004fd2d0(void)

#include "nocturne.h"

void __cdecl core_ladder_cpp_staticInit_FUN_004fd2d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CLadderClassInfo,"CLadder",core_ladder_cpp_factoryFuncLadder_FUN_004fd300,
             &g_CLadderClassVersion,2,&g_CDemonActorClassInfo);
  return;
}
