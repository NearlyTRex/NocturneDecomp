// Name: core_filmreel.cpp_staticInit_FUN_004960f0
// Address: 004960f0
// Address Range: [[004960f0, 00496136]]
// Convention: unknown
// Signature: void core_filmreel_cpp_staticInit_FUN_004960f0(void)

#include "nocturne.h"

void core_filmreel_cpp_staticInit_FUN_004960f0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CFilmReelClassInfo,"CFilmReel",
             core_filmreel_cpp_factoryFuncFilmReel_FUN_00496140,&g_CFilmReelClassVersion,2,
             &g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x1c73618,"CFilmProjector",core_filmreel_cpp_FUN_00496430,
             &DAT_005fc4bc,2,&g_CActorDestinationClassInfo);
  return;
}
