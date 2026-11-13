// Name: core_unionzom.cpp_staticInit_FUN_005a3cd0
// Address: 005a3cd0
// Address Range: [[005a3cd0, 005a3cf3]]
// Convention: __cdecl
// Signature: void __cdecl core_unionzom_cpp_staticInit_FUN_005a3cd0(void)

#include "nocturne.h"

void __cdecl core_unionzom_cpp_staticInit_FUN_005a3cd0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CUnionZombieClassInfo,"CUnionZombie",
             core_unionzom_cpp_factoryFuncUnionZombie_FUN_005a3d00,&g_CUnionZombieClassVersion,1,
             &g_CBasicEnemyClassInfo);
  return;
}
