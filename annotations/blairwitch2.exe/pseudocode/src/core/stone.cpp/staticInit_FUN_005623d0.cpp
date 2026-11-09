// Name: core_stone.cpp_staticInit_FUN_005623d0
// Address: 005623d0
// Address Range: [[005623d0, 005623f3]]
// Convention: unknown
// Signature: void core_stone_cpp_staticInit_FUN_005623d0(void)

#include "nocturne.h"

void core_stone_cpp_staticInit_FUN_005623d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CTempleStoneClassInfo,"?CTempleStone" + 1,
             core_stone_cpp_factoryFuncTempleStone_FUN_00562400,&g_CTempleStoneClassVersion,1,
             &g_CBoxActorClassInfo);
  return;
}
