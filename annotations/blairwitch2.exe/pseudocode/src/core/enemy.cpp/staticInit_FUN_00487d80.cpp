// Name: core_enemy.cpp_staticInit_FUN_00487d80
// Address: 00487d80
// Address Range: [[00487d80, 00487da0]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_staticInit_FUN_00487d80(void)

#include "nocturne.h"

void __cdecl core_enemy_cpp_staticInit_FUN_00487d80(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CEnemyClassInfo,"CEnemy",(CDemonActor_FactoryFunc *)0x0,
             &g_CEnemyClassVersion,10,&g_CCharacterClassInfo);
  return;
}
