// Name: core_smiley.cpp_staticInit_FUN_0056bdf0
// Address: 0056bdf0
// Address Range: [[0056bdf0, 0056be13]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_staticInit_FUN_0056bdf0(void)

#include "nocturne.h"

void __cdecl core_smiley_cpp_staticInit_FUN_0056bdf0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CSmileyClassInfo,"CSmiley",core_smiley_cpp_factoryFuncSmiley_FUN_0056be20,
             &g_CSmileyClassVersion,1,&g_CEnemyClassInfo);
  return;
}
