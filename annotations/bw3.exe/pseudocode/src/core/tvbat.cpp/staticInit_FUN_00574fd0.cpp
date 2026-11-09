// Name: core_tvbat.cpp_staticInit_FUN_00574fd0
// Address: 00574fd0
// Address Range: [[00574fd0, 00574ff3]]
// Convention: unknown
// Signature: void core_tvbat_cpp_staticInit_FUN_00574fd0(void)

#include "nocturne.h"

void core_tvbat_cpp_staticInit_FUN_00574fd0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CTVBatClassInfo,(char *)0x5d6f17,core_tvbat_cpp_factoryFuncTVBat_FUN_00575000,
             &g_CTVBatClassVersion,5,&g_CEnemyClassInfo);
  return;
}
