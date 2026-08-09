// Name: core_filmreel.cpp_staticInit_FUN_00481bb0
// Address: 00481bb0
// Address Range: [[00481bb0, 00481bf6]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_staticInit_FUN_00481bb0(void)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_staticInit_FUN_00481bb0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CFilmReelActorType_01c08c8c,"CFilmReel",
             core_filmreel_cpp_factoryFuncFilmReel_FUN_00481c00,&INT_005b8018,2,
             &g_CDemonActorActorType_00763e48);
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CFilmProjectorActorType_01c08cc8,"CFilmProjector",
             core_filmreel_cpp_factoryFunc_FUN_00481ee0,&INT_005b801c,2,
             &g_CActorDestinationActorType_014b8a1c);
  return;
}
