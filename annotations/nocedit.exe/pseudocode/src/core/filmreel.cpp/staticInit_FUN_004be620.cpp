// Name: core_filmreel.cpp_staticInit_FUN_004be620
// Address: 004be620
// Address Range: [[004be620, 004be666]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_staticInit_FUN_004be620(void)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_staticInit_FUN_004be620(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CFilmReelClassInfo,"CFilmReel",
             core_filmreel_cpp_factoryFuncFilmReel_FUN_004be670,&g_CFilmReelClassVersion,2,
             &g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CFilmProjectorClassInfo,"CFilmProjector",
             core_filmreel_cpp_factoryFuncFilmProjector_FUN_004bea00,&g_CFilmProjectorClassVersion,2
             ,&g_CActorDestinationClassInfo);
  return;
}
