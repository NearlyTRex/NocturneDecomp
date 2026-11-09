// Name: core_hand.cpp_staticInit_FUN_005a9ba0
// Address: 005a9ba0
// Address Range: [[005a9ba0, 005a9bc3]]
// Convention: unknown
// Signature: void core_hand_cpp_staticInit_FUN_005a9ba0(void)

#include "nocturne.h"

void core_hand_cpp_staticInit_FUN_005a9ba0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CHandClassInfo,"CHand",core_hand_cpp_factoryFuncHand_FUN_005a9bd0,
             &g_CHandClassVersion,2,&g_CBasicEnemyClassInfo);
  return;
}
