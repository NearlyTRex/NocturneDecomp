// Name: core_fire.cpp_CFireball_onCollision_FUN_004aee60
// Address: 004aee60
// Address Range: [[004aee60, 004aef8b]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireball_onCollision_FUN_004aee60(CFireball *this_ptr,CVector3f *collision_normal)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireball_onCollision_FUN_004aee60(CFireball *this_ptr,CVector3f *collision_normal)

{
  int iVar1;
  char *filename;
  
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handle);
  if (this_ptr->lighting_active == 0) {
    iVar1 = 0;
    do {
      core_fire_cpp_CFireEffect_createFireball_FUN_004b5e00
                (0x01C57074,(CVector3f *)this_ptr,(CVector3f *)0x0,1,0);
      iVar1 = iVar1 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,(CVector3f *)this_ptr,(CVector3f *)0x0,0x10000,0x10000,0,0xffff);
    } while (iVar1 < 8);
    core_set_cpp_CDemonSet_initCameraShake_FUN_00555ab0(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
    sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
    sound_sndmain_cpp_FUN_00572780
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
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,(CVector3f *)this_ptr,(CVector3f *)0x0,0x10000,0x10000,2,0xffff);
    } while (iVar1 < 8);
    sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
    sound_sndmain_cpp_FUN_00572780
              ((double)(this_ptr->base).position.x,(double)(this_ptr->base).position.y,
               (double)(this_ptr->base).position.z);
    sound_sndmain_cpp_FUN_005728e0(0.8);
    filename = "rock-x.wav";
  }
  sound_sndmain_cpp_startSfx_FUN_00572d20(filename);
  sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
  return 1;
}
