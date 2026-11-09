// Name: core_baal.cpp_staticInit_FUN_00596600
// Address: 00596600
// Address Range: [[00596600, 00596623]]
// Convention: unknown
// Signature: void core_baal_cpp_staticInit_FUN_00596600(void)

#include "nocturne.h"

void core_baal_cpp_staticInit_FUN_00596600(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CBaalClassInfo,(char *)0x5d9489,core_baal_cpp_factoryFuncBaal_FUN_00596630,
             &g_CBaalClassVersion,1,&g_CEnemyClassInfo);
  return;
}
