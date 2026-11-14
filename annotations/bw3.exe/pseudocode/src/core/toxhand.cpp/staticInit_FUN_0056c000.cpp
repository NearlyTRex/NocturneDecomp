// Name: core_toxhand.cpp_staticInit_FUN_0056c000
// Address: 0056c000
// Address Range: [[0056c000, 0056c023]]
// Convention: __cdecl
// Signature: void __cdecl core_toxhand_cpp_staticInit_FUN_0056c000(void)

#include "nocturne.h"

void __cdecl core_toxhand_cpp_staticInit_FUN_0056c000(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CTheHandClassInfo,"CTheHand",
             core_toxhand_cpp_factoryFuncTheHand_FUN_0056c030,&g_CTheHandClassVersion,1,
             &g_CEnemyClassInfo);
  return;
}
