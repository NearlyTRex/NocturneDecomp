// Name: core_tvbat.cpp_staticInit_FUN_005a3eb0
// Address: 005a3eb0
// Address Range: [[005a3eb0, 005a3ed3]]
// Convention: unknown
// Signature: void core_tvbat_cpp_staticInit_FUN_005a3eb0(void)

#include "nocturne.h"

void core_tvbat_cpp_staticInit_FUN_005a3eb0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CTVBatClassInfo,(char *)0x5f8b90,core_tvbat_cpp_factoryFuncTVBat_FUN_005a3ee0,
             &g_CTVBatClassVersion,5,&g_CEnemyClassInfo);
  return;
}
