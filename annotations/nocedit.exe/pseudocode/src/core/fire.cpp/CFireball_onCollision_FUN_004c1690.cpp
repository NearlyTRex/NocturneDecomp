// Name: core_fire.cpp_CFireball_onCollision_FUN_004c1690
// Address: 004c1690
// Address Range: [[004c1690, 004c17bb]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireball_onCollision_FUN_004c1690(CFireball *this_ptr,CVector3f *collision_normal)

#include "nocturne.h"

int __cdecl
core_fire_cpp_CFireball_onCollision_FUN_004c1690(CFireball *this_ptr,CVector3f *collision_normal)

{
  int iVar1;
  char *filename;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->unk2);
  if (this_ptr->lighting_active == 0) {
    iVar1 = 0;
    do {
      core_fire_cpp_CFireEffect_FUN_004c7db0(g_CFireEffectPtr);
      iVar1 = iVar1 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar1 < 8);
    core_set_cpp_CDemonSet_initCameraShake_FUN_00570fa0(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0
              ((double)(this_ptr->base).position.x,(double)(this_ptr->base).position.y,
               (double)(this_ptr->base).position.z);
    filename = "rock-x.wav";
  }
  else {
    if (this_ptr->lighting_active != 2) {
      return 0;
    }
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar1 < 8);
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0
              ((double)(this_ptr->base).position.x,(double)(this_ptr->base).position.y,
               (double)(this_ptr->base).position.z);
    sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(0.8);
    filename = "rock-x.wav";
  }
  sound_sndmain_cpp_startSfx_FUN_005a8e90(filename);
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return 1;
}
