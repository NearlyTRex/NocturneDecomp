// Name: core_carved.cpp_staticInit_FUN_004282c0
// Address: 004282c0
// Address Range: [[004282c0, 004282e3]]
// Convention: unknown
// Signature: void core_carved_cpp_staticInit_FUN_004282c0(void)

#include "nocturne.h"

void core_carved_cpp_staticInit_FUN_004282c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CCarvedClassInfo,"CCarved",core_carved_cpp_factoryFuncCarved_FUN_004286a0,
             &g_CCarvedClassVersion,1,&g_CEnemyClassInfo);
  return;
}
