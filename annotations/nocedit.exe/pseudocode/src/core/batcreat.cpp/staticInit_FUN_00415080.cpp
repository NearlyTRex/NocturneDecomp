// Name: core_batcreat.cpp_staticInit_FUN_00415080
// Address: 00415080
// Address Range: [[00415080, 004150a3]]
// Convention: __cdecl
// Signature: void core_batcreat.cpp_staticInit_FUN_00415080(void)

#include "nocturne.h"

void __cdecl core_batcreat_cpp_staticInit_FUN_00415080(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CBatCreatureClassInfo,"CBatCreature",
             core_batcreat_cpp_factoryFunc_FUN_004150b0,&g_CBatCreatureClassVersion,1,
             &g_CEnemyClassInfo);
  return;
}
