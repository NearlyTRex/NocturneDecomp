// Name: core_stairs.cpp_staticInit_FUN_00561e90
// Address: 00561e90
// Address Range: [[00561e90, 00561eb3]]
// Convention: unknown
// Signature: void core_stairs_cpp_staticInit_FUN_00561e90(void)

#include "nocturne.h"

void core_stairs_cpp_staticInit_FUN_00561e90(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CStairsClassInfo,"Y@CStairs" + 2,
             core_stairs_cpp_factoryFuncStairs_FUN_00561ec0,&g_CStairsClassVersion,2,
             &g_CDemonActorClassInfo);
  return;
}
