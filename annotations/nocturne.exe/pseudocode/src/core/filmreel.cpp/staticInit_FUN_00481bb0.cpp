// Name: core_filmreel.cpp_staticInit_FUN_00481bb0
// Address: 00481bb0
// Address Range: [[00481bb0, 00481bf6]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_staticInit_FUN_00481bb0(void)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_staticInit_FUN_00481bb0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CFilmReelClassInfo,"CFilmReel",
             core_filmreel_cpp_factoryFuncFilmReel_FUN_00481c00,&g_CFilmReelClassVersion,2,
             &g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CFilmProjectorClassInfo,"CFilmProjector",
             core_filmreel_cpp_factoryFuncFilmProjector_FUN_00481ee0,&g_CFilmProjectorClassVersion,2
             ,&g_CActorDestinationClassInfo);
  return;
}
