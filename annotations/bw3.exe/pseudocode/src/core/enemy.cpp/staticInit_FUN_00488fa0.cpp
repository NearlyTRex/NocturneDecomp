// Name: core_enemy.cpp_staticInit_FUN_00488fa0
// Address: 00488fa0
// Address Range: [[00488fa0, 00488fc0]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_staticInit_FUN_00488fa0(void)

#include "nocturne.h"

void __cdecl core_enemy_cpp_staticInit_FUN_00488fa0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CEnemyClassInfo,"CEnemy",(CDemonActor_FactoryFunc *)0x0,
             &g_CEnemyClassVersion,0xe,&g_CCharacterClassInfo);
  return;
}
