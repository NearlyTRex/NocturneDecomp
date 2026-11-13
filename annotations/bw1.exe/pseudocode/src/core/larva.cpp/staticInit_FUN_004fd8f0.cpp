// Name: core_larva.cpp_staticInit_FUN_004fd8f0
// Address: 004fd8f0
// Address Range: [[004fd8f0, 004fd913]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_staticInit_FUN_004fd8f0(void)

#include "nocturne.h"

void __cdecl core_larva_cpp_staticInit_FUN_004fd8f0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CLarvaClassInfo,"CLarva",core_larva_cpp_factoryFuncLarva_FUN_004fd920,
             &g_CLarvaClassVersion,2,&g_CEnemyClassInfo);
  return;
}
