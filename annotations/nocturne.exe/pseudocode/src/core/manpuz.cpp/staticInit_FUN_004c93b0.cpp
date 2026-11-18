// Name: core_manpuz.cpp_staticInit_FUN_004c93b0
// Address: 004c93b0
// Address Range: [[004c93b0, 004c93f6]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_staticInit_FUN_004c93b0(void)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_staticInit_FUN_004c93b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CMansionPuzzleCircleClassInfo,"CMansionPuzzleCircle",
             core_manpuz_cpp_factoryFuncMansionPuzzleCircle_FUN_004c9400,
             &g_CMansionPuzzleCircleClassVersion,3,&g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CMirrorHackClassInfo,"CMirrorHack",
             core_manpuz_cpp_factoryFuncMirrorHack_FUN_004cbad0,&g_CMirrorHackClassVersion,1,
             &g_CDemonActorClassInfo);
  return;
}
