// Name: core_smiley.cpp_staticInit_FUN_00549770
// Address: 00549770
// Address Range: [[00549770, 00549793]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_staticInit_FUN_00549770(void)

#include "nocturne.h"

void __cdecl core_smiley_cpp_staticInit_FUN_00549770(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CSmileyClassInfo,"CSmiley",core_smiley_cpp_factoryFuncSmiley_FUN_005497a0,
             &g_CSmileyClassVersion,1,&g_CEnemyClassInfo);
  return;
}
