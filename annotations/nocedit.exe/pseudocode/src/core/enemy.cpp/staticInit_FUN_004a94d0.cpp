// Name: core_enemy.cpp_staticInit_FUN_004a94d0
// Address: 004a94d0
// Address Range: [[004a94d0, 004a94f0]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_staticInit_FUN_004a94d0(void)

#include "nocturne.h"

void __cdecl core_enemy_cpp_staticInit_FUN_004a94d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CEnemyClassInfo,"CEnemy",(CDemonActor_FactoryFunc *)0x0,
             &g_CEnemyClassVersion,10,&g_CCharacterClassInfo);
  return;
}
