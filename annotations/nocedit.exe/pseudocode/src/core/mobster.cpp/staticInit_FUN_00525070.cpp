// Name: core_mobster.cpp_staticInit_FUN_00525070
// Address: 00525070
// Address Range: [[00525070, 00525093]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_staticInit_FUN_00525070(void)

#include "nocturne.h"

void __cdecl core_mobster_cpp_staticInit_FUN_00525070(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CMobsterClassInfo,"CMobster",
             core_mobster_cpp_factoryFuncMobster_FUN_005251c0,&g_CMobsterClassVersion,7,
             &g_CEnemyClassInfo);
  return;
}
