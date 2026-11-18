// Name: core_fire.cpp_CFireEffect_createExplosion_FUN_0049e360
// Address: 0049e360
// Address Range: [[0049e360, 0049e3d4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createExplosion_FUN_0049e360(CFireEffect *this_ptr,CVector3f *position,float scale,float gore_multiplier,float radius)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createExplosion_FUN_0049e360(CFireEffect *this_ptr,CVector3f *position,float scale,float gore_multiplier,float radius)

{
  core_fire_cpp_CExplosion_activate_FUN_00498d30
            (g_CExplosion_ARRAY_01c975e4 + g_INT_01c975e0,position,scale,gore_multiplier);
  g_INT_01c975e0 = g_INT_01c975e0 + 1;
  if (9 < g_INT_01c975e0) {
    g_INT_01c975e0 = 0;
  }
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (g_CSound_PTR_0061c068,(CDemonActor *)this_ptr,"xplode?.wav @ 6.0",position);
  core_fire_cpp_CFireEffect_createCrater_FUN_0049e630(this_ptr,position,radius);
  return;
}
