// Name: core_filmreel.cpp_staticInit_FUN_004ab250
// Address: 004ab250
// Address Range: [[004ab250, 004ab296]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_staticInit_FUN_004ab250(void)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_staticInit_FUN_004ab250(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CFilmReelClassInfo,"CFilmReel",
             core_filmreel_cpp_factoryFuncFilmReel_FUN_004ab2a0,&g_CFilmReelClassVersion,2,
             &g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c160
            ((CDemonActorType *)0x1c57038,"CFilmProjector",core_filmreel_cpp_FUN_004ab590,
             &DAT_0061bf2c,2,&g_CActorDestinationClassInfo);
  return;
}
