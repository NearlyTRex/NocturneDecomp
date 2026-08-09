// Name: core_stairs.cpp_staticInit_FUN_005b9b00
// Address: 005b9b00
// Address Range: [[005b9b00, 005b9b23]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_staticInit_FUN_005b9b00(void)

#include "nocturne.h"

void __cdecl core_stairs_cpp_staticInit_FUN_005b9b00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CStairsClassInfo,"CStairs",core_stairs_cpp_factoryFuncStairs_FUN_005b9b30,
             &g_CStairsClassVersion,2,&g_CDemonActorClassInfo);
  return;
}
