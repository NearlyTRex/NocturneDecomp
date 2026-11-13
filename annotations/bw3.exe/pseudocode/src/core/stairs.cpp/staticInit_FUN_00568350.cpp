// Name: core_stairs.cpp_staticInit_FUN_00568350
// Address: 00568350
// Address Range: [[00568350, 00568373]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_staticInit_FUN_00568350(void)

#include "nocturne.h"

void __cdecl core_stairs_cpp_staticInit_FUN_00568350(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CStairsClassInfo,"CStairs",core_stairs_cpp_factoryFuncStairs_FUN_00568380,
             &g_CStairsClassVersion,2,&g_CDemonActorClassInfo);
  return;
}
