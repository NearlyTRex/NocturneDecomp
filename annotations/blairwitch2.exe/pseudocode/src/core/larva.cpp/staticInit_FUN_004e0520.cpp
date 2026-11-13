// Name: core_larva.cpp_staticInit_FUN_004e0520
// Address: 004e0520
// Address Range: [[004e0520, 004e0543]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_staticInit_FUN_004e0520(void)

#include "nocturne.h"

void __cdecl core_larva_cpp_staticInit_FUN_004e0520(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CLarvaClassInfo,"CLarva",core_larva_cpp_factoryFuncLarva_FUN_004e0550,
             &g_CLarvaClassVersion,2,&g_CEnemyClassInfo);
  return;
}
