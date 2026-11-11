// Name: core_fire.cpp_CFireball_onCollision_FUN_00499eb0
// Address: 00499eb0
// Address Range: [[00499eb0, 00499fdb]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireball_onCollision_FUN_00499eb0(CFireball *this_ptr,CVector3f *collision_normal)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireball_onCollision_FUN_00499eb0(CFireball *this_ptr,CVector3f *collision_normal)

{
  int iVar1;
  
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
  if (this_ptr->lighting_active == 0) {
    iVar1 = 0;
    do {
      core_fire_cpp_CFireEffect_createFireball_FUN_004a2830
                (0x01C73654,(CVector3f *)this_ptr,(CVector3f *)0x0,1,0);
      iVar1 = iVar1 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                (0x01C73654,(CVector3f *)this_ptr,(CVector3f *)0x0,0x10000,0x10000,0,0xffff);
    } while (iVar1 < 8);
    core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
    sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
    sound_sndmain_cpp_FUN_00555c90
              ((double)(this_ptr->base).position.x,(double)(this_ptr->base).position.y,
               (double)(this_ptr->base).position.z);
  }
  else {
    if (this_ptr->lighting_active != 2) {
      return 0;
    }
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                (0x01C73654,(CVector3f *)this_ptr,(CVector3f *)0x0,0x10000,0x10000,2,0xffff);
    } while (iVar1 < 8);
    sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
    sound_sndmain_cpp_FUN_00555c90
              ((double)(this_ptr->base).position.x,(double)(this_ptr->base).position.y,
               (double)(this_ptr->base).position.z);
    sound_sndmain_cpp_FUN_00555df0(0.8);
  }
  sound_sndmain_cpp_FUN_00556240();
  sound_sndmain_cpp_popSfxOptions_FUN_00556050();
  return 1;
}
