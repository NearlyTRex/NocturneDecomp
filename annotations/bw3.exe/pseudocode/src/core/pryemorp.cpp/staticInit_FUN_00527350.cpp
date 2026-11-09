// Name: core_pryemorp.cpp_staticInit_FUN_00527350
// Address: 00527350
// Address Range: [[00527350, 00527373]]
// Convention: unknown
// Signature: void core_pryemorp_cpp_staticInit_FUN_00527350(void)

#include "nocturne.h"

void core_pryemorp_cpp_staticInit_FUN_00527350(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CPryeMorphClassInfo,"CPryeMorph",
             core_pryemorp_cpp_factoryFuncPryeMorph_FUN_00527380,&g_CPryeMorphClassVersion,8,
             &g_CNPCClassInfo);
  return;
}
