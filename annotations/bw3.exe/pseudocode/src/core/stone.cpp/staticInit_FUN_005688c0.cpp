// Name: core_stone.cpp_staticInit_FUN_005688c0
// Address: 005688c0
// Address Range: [[005688c0, 005688e3]]
// Convention: __cdecl
// Signature: void __cdecl core_stone_cpp_staticInit_FUN_005688c0(void)

#include "nocturne.h"

void __cdecl core_stone_cpp_staticInit_FUN_005688c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CTempleStoneClassInfo,"?CTempleStone" + 1,
             core_stone_cpp_factoryFuncTempleStone_FUN_005688f0,&g_CTempleStoneClassVersion,1,
             &g_CBoxActorClassInfo);
  return;
}
