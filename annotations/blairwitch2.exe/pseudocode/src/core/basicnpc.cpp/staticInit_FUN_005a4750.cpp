// Name: core_basicnpc.cpp_staticInit_FUN_005a4750
// Address: 005a4750
// Address Range: [[005a4750, 005a4773]]
// Convention: unknown
// Signature: void core_basicnpc_cpp_staticInit_FUN_005a4750(void)

#include "nocturne.h"

void core_basicnpc_cpp_staticInit_FUN_005a4750(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBasicNPCClassInfo,"?CBasicNPC" + 1,
             core_basicnpc_cpp_factoryFuncBasicNPC_FUN_005a4780,&g_CBasicNPCClassVersion,1,
             &g_CBasicEnemyClassInfo);
  return;
}
