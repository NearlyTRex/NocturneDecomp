// Name: core_stone.cpp_staticInit_FUN_00584e50
// Address: 00584e50
// Address Range: [[00584e50, 00584e73]]
// Convention: __cdecl
// Signature: void __cdecl core_stone_cpp_staticInit_FUN_00584e50(void)

#include "nocturne.h"

void __cdecl core_stone_cpp_staticInit_FUN_00584e50(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CTempleStoneClassInfo,"?CTempleStone" + 1,
             core_stone_cpp_factoryFuncTempleStone_FUN_00584e80,&g_CTempleStoneClassVersion,1,
             &g_CBoxActorClassInfo);
  return;
}
