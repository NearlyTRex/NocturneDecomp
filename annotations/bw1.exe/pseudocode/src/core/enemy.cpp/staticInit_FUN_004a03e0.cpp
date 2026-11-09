// Name: core_enemy.cpp_staticInit_FUN_004a03e0
// Address: 004a03e0
// Address Range: [[004a03e0, 004a0400]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_staticInit_FUN_004a03e0(void)

#include "nocturne.h"

void __cdecl core_enemy_cpp_staticInit_FUN_004a03e0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CEnemyClassInfo,"CEnemy",(CDemonActor_FactoryFunc *)0x0,
             &g_CEnemyClassVersion,10,&g_CCharacterClassInfo);
  return;
}
