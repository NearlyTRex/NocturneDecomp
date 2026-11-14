// Name: core_manpuz.cpp_staticInit_FUN_00503ac0
// Address: 00503ac0
// Address Range: [[00503ac0, 00503b06]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_staticInit_FUN_00503ac0(void)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_staticInit_FUN_00503ac0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CMansionPuzzleCircleClassInfo,"?CMansionPuzzleCircle" + 1,
             core_manpuz_cpp_factoryFuncMansionPuzzleCircle_FUN_00503b10,
             &g_CMansionPuzzleCircleClassVersion,3,&g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c160
            ((CDemonActorType *)0x1d1d498,"CMirrorHack",
             core_manpuz_cpp_factoryFuncMirrorHack_FUN_00506420,(int *)0x61f3ac,1,
             &g_CDemonActorClassInfo);
  return;
}
