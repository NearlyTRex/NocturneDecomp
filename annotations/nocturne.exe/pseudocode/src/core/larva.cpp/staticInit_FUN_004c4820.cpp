// Name: core_larva.cpp_staticInit_FUN_004c4820
// Address: 004c4820
// Address Range: [[004c4820, 004c4843]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_staticInit_FUN_004c4820(void)

#include "nocturne.h"

void __cdecl core_larva_cpp_staticInit_FUN_004c4820(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CLarvaActorType_01cc3124,"CLarva",
             core_larva_cpp_factoryFuncLarva_FUN_004c4850,&INT_005bac7c,2,
             &g_CEnemyActorType_01bcdebc);
  return;
}
