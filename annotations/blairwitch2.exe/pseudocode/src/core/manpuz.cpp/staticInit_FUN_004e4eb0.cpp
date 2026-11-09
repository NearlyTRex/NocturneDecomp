// Name: core_manpuz.cpp_staticInit_FUN_004e4eb0
// Address: 004e4eb0
// Address Range: [[004e4eb0, 004e4ef6]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_staticInit_FUN_004e4eb0(void)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_staticInit_FUN_004e4eb0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CMansionPuzzleCircleClassInfo,"?CMansionPuzzleCircle" + 1,
             core_manpuz_cpp_factoryFuncMansionPuzzleCircle_FUN_004e4f00,
             &g_CMansionPuzzleCircleClassVersion,3,&g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c450
            ((CDemonActorType *)0x1d04738,"CMirrorHack",core_manpuz_cpp_FUN_004e7780,
             (int *)0x617ec4,1,&g_CDemonActorClassInfo);
  return;
}
