// Name: core_fire.cpp_CFireEffect_FUN_004c8c10
// Address: 004c8c10
// Address Range: [[004c8c10, 004c8c84]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_FUN_004c8c10(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c8c10(CFireEffect *this_ptr)

{
  CVector3f *in_stack_00000008;
  
  core_fire_cpp_CExplosion_FUN_004c3970(g_ExplosionPool + (int)g_LaserBeamActiveListHead);
  g_LaserBeamActiveListHead = (CLaserBeam *)(g_LaserBeamActiveListHead->unk + 1);
  if (9 < (int)g_LaserBeamActiveListHead) {
    g_LaserBeamActiveListHead = (CLaserBeam *)0x0;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"xplode?.wav @ 6.0",in_stack_00000008);
  core_fire_cpp_CFireEffect_FUN_004c8ea0(this_ptr);
  return;
}
