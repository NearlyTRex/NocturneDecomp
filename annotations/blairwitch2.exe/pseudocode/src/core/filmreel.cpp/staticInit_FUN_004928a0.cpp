// Name: core_filmreel.cpp_staticInit_FUN_004928a0
// Address: 004928a0
// Address Range: [[004928a0, 004928e6]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_staticInit_FUN_004928a0(void)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_staticInit_FUN_004928a0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CFilmReelClassInfo,"CFilmReel",
             core_filmreel_cpp_factoryFuncFilmReel_FUN_004928f0,&g_CFilmReelClassVersion,2,
             &g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c450
            ((CDemonActorType *)0x1c3de78,"CFilmProjector",
             core_filmreel_cpp_factoryFuncFilmProjector_FUN_00492be0,&DAT_00614c4c,2,
             &g_CActorDestinationClassInfo);
  return;
}
