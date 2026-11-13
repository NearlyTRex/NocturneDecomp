// Name: core_stairs.cpp_staticInit_FUN_005848e0
// Address: 005848e0
// Address Range: [[005848e0, 00584903]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_staticInit_FUN_005848e0(void)

#include "nocturne.h"

void __cdecl core_stairs_cpp_staticInit_FUN_005848e0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CStairsClassInfo,"Y@CStairs" + 2,
             core_stairs_cpp_factoryFuncStairs_FUN_00584910,&g_CStairsClassVersion,2,
             &g_CDemonActorClassInfo);
  return;
}
