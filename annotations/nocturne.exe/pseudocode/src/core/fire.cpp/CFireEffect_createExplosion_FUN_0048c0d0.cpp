// Name: core_fire.cpp_CFireEffect_createExplosion_FUN_0048c0d0
// Address: 0048c0d0
// Address Range: [[0048c0d0, 0048c153]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createExplosion_FUN_0048c0d0(CFireEffect *this_ptr,CVector3f *position,float scale,float gore_multiplier,float radius)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createExplosion_FUN_0048c0d0(CFireEffect *this_ptr,CVector3f *position,float scale,float gore_multiplier,float radius)

{
  core_fire_cpp_CExplosion_activate_FUN_00486e40
            (g_ExplosionPool + g_ExplosionPoolIndex,position,scale,gore_multiplier);
  g_ExplosionPoolIndex = g_ExplosionPoolIndex + 1;
  if (9 < g_ExplosionPoolIndex) {
    g_ExplosionPoolIndex = 0;
  }
  core_sound_cpp_CSound_playActorSound_FUN_0052ea60
            (g_CSound_PTR_005bed68,(CDemonActor *)this_ptr,"xplode?.wav @ 6.0",position);
  core_fire_cpp_CFireEffect_createCrater_FUN_0048c370(this_ptr,position,radius);
  engine_force_cpp_CForceFeedback_processEvent_FUN_004940d0(g_CForceFeedback_PTR_005b9284);
  return;
}
