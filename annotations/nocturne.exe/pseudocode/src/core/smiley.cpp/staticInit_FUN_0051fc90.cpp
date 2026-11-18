// Name: core_smiley.cpp_staticInit_FUN_0051fc90
// Address: 0051fc90
// Address Range: [[0051fc90, 0051fcb3]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_staticInit_FUN_0051fc90(void)

#include "nocturne.h"

void __cdecl core_smiley_cpp_staticInit_FUN_0051fc90(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CSmileyClassInfo,"CSmiley",core_smiley_cpp_factoryFuncSmiley_FUN_0051fcc0,
             &g_CSmileyClassVersion,1,&g_CEnemyClassInfo);
  return;
}
