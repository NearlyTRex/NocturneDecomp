// Name: core_fire.cpp_CFireEffect_createExplosion_FUN_004c8c10
// Address: 004c8c10
// Address Range: [[004c8c10, 004c8c84]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createExplosion_FUN_004c8c10(CFireEffect *this_ptr,CVector3f *position,float scale,int damage_amount)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createExplosion_FUN_004c8c10(CFireEffect *this_ptr,CVector3f *position,float scale,int damage_amount)

{
  core_fire_cpp_CExplosion_activate_FUN_004c3970
            (g_ExplosionPool + g_ExplosionPoolIndex,position,scale,damage_amount);
  g_ExplosionPoolIndex = g_ExplosionPoolIndex + 1;
  if (9 < g_ExplosionPoolIndex) {
    g_ExplosionPoolIndex = 0;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"xplode?.wav @ 6.0",position);
  core_fire_cpp_CFireEffect_createCrater_FUN_004c8ea0(this_ptr);
  return;
}
