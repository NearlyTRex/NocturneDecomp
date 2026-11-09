// Name: core_basicene.cpp_staticInit_FUN_0059e380
// Address: 0059e380
// Address Range: [[0059e380, 0059e3a0]]
// Convention: unknown
// Signature: void core_basicene_cpp_staticInit_FUN_0059e380(void)

#include "nocturne.h"

void core_basicene_cpp_staticInit_FUN_0059e380(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBasicEnemyClassInfo,"@CBasicEnemy" + 1,(CDemonActor_FactoryFunc *)0x0,
             &g_CBasicEnemyClassVersion,10,&g_CEnemyClassInfo);
  return;
}
