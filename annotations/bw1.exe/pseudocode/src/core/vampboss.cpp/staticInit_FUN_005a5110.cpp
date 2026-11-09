// Name: core_vampboss.cpp_staticInit_FUN_005a5110
// Address: 005a5110
// Address Range: [[005a5110, 005a5133]]
// Convention: unknown
// Signature: void core_vampboss_cpp_staticInit_FUN_005a5110(void)

#include "nocturne.h"

void core_vampboss_cpp_staticInit_FUN_005a5110(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CVampireBossClassInfo,"?CVampireBoss" + 1,
             core_vampboss_cpp_factoryFuncVampireBoss_FUN_005a5140,&g_CVampireBossClassVersion,4,
             &g_CEnemyClassInfo);
  return;
}
