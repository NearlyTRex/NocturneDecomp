// Name: core_enemy.cpp_staticInit_FUN_00479530
// Address: 00479530
// Address Range: [[00479530, 00479550]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_staticInit_FUN_00479530(void)

#include "nocturne.h"

void __cdecl core_enemy_cpp_staticInit_FUN_00479530(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CEnemyActorType_01bcdebc,"CEnemy",(CDemonActor_FactoryFunc *)0x0,
             &INT_005b7604,10,&g_CCharacterActorType_00765a60);
  return;
}
