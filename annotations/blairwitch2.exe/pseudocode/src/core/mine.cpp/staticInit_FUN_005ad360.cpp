// Name: core_mine.cpp_staticInit_FUN_005ad360
// Address: 005ad360
// Address Range: [[005ad360, 005ad383]]
// Convention: __cdecl
// Signature: void __cdecl core_mine_cpp_staticInit_FUN_005ad360(void)

#include "nocturne.h"

void __cdecl core_mine_cpp_staticInit_FUN_005ad360(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CSpiritMineClassInfo,"?CSpiritMine" + 1,
             core_mine_cpp_factoryFuncSpiritMine_FUN_005ad390,&g_CSpiritMineClassVersion,1,
             &g_CBoxActorClassInfo);
  return;
}
