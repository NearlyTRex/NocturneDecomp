// Name: core_svetlana.cpp_staticInit_FUN_00592da0
// Address: 00592da0
// Address Range: [[00592da0, 00592dc3]]
// Convention: unknown
// Signature: void core_svetlana_cpp_staticInit_FUN_00592da0(void)

#include "nocturne.h"

void core_svetlana_cpp_staticInit_FUN_00592da0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CSvetlanaClassInfo,"CSvetlana",
             core_svetlana_cpp_factoryFuncSvetlana_FUN_00592dd0,&g_CSvetlanaClassVersion,1,
             &g_CHeroClassInfo);
  return;
}
