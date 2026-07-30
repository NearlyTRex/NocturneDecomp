// Name: core_manpuz.cpp_staticInit_FUN_004c93b0
// Address: 004c93b0
// Address Range: [[004c93b0, 004c93f6]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_staticInit_FUN_004c93b0(void)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_staticInit_FUN_004c93b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CMansionPuzzleCircleActorType_01cc485c,"CMansionPuzzleCircle",
             core_manpuz_cpp_factoryFunc_FUN_004c9400,&INT_005bad50,3,
             &g_CDemonActorActorType_00763e48);
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CMirrorHackActorType_01cc4898,"CMirrorHack",core_manpuz_cpp_FUN_004cbad0,
             &INT_005bad54,1,&g_CDemonActorActorType_00763e48);
  return;
}
