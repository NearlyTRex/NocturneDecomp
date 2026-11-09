// Name: core_biggs.cpp_staticInit_FUN_00414cb0
// Address: 00414cb0
// Address Range: [[00414cb0, 00414cd3]]
// Convention: unknown
// Signature: void core_biggs_cpp_staticInit_FUN_00414cb0(void)

#include "nocturne.h"

void core_biggs_cpp_staticInit_FUN_00414cb0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBiggsClassInfo,(char *)0x5cbc85,core_biggs_cpp_factoryFuncBiggs_FUN_00414ce0,
             &g_CBiggsClassVersion,1,&g_CEnemyClassInfo);
  return;
}
