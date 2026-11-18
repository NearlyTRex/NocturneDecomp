// Name: core_fire.cpp_CFireEffect_createExplosion_FUN_004a36e0
// Address: 004a36e0
// Address Range: [[004a36e0, 004a378a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createExplosion_FUN_004a36e0(CFireEffect *this_ptr,CVector3f *position,float scale,float gore_multiplier,float radius,int explosion_type)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createExplosion_FUN_004a36e0(CFireEffect *this_ptr,CVector3f *position,float scale,float gore_multiplier,float radius,int explosion_type)

{
  char *sound_name;
  
  core_fire_cpp_CExplosion_activate_FUN_0049c730
            (g_CExplosion_ARRAY_01cf6090 + g_INT_01cf608c,position,scale,gore_multiplier,
             explosion_type);
  g_INT_01cf608c = g_INT_01cf608c + 1;
  if (9 < g_INT_01cf608c) {
    g_INT_01cf608c = 0;
  }
  if (explosion_type == 0) {
    sound_name = "xplode?.wav @ 6.0";
  }
  else if (explosion_type == 1) {
    sound_name = "wp_bindevil.wav";
  }
  else {
    if (explosion_type != 3) goto LAB_004a373c;
    sound_name = "wp_disease.wav";
  }
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (g_CSound_PTR_006045f8,(CDemonActor *)this_ptr,sound_name,position);
LAB_004a373c:
  if (explosion_type != 0) {
    return;
  }
  core_fire_cpp_CFireEffect_createCrater_FUN_004a3aa0(this_ptr,position,radius);
  return;
}
