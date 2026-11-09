// Name: core_biggs.cpp_staticInit_FUN_00414990
// Address: 00414990
// Address Range: [[00414990, 004149b3]]
// Convention: unknown
// Signature: void core_biggs_cpp_staticInit_FUN_00414990(void)

#include "nocturne.h"

void core_biggs_cpp_staticInit_FUN_00414990(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBiggsClassInfo,(char *)0x5d3c00,core_biggs_cpp_factoryFuncBiggs_FUN_004149c0,
             &g_CBiggsClassVersion,1,&g_CEnemyClassInfo);
  return;
}
