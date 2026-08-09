// Name: core_stairs.cpp_staticInit_FUN_00534750
// Address: 00534750
// Address Range: [[00534750, 00534773]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_staticInit_FUN_00534750(void)

#include "nocturne.h"

void __cdecl core_stairs_cpp_staticInit_FUN_00534750(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CStairsActorType_02dc9ea8,"CStairs",
             core_stairs_cpp_factoryFuncStairs_FUN_00534780,&INT_005c0fc4,2,
             &g_CDemonActorActorType_00763e48);
  return;
}
