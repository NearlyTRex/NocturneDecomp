// Name: core_fire.cpp_CFireball_onCollision_FUN_00484b60
// Address: 00484b60
// Address Range: [[00484b60, 00484c8b]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireball_onCollision_FUN_00484b60(CFireball *this_ptr,CVector3f *collision_normal)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireball_onCollision_FUN_00484b60(CFireball *this_ptr,CVector3f *collision_normal)

{
  int iVar1;
  char *filename;
  
  sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handle);
  if (this_ptr->lighting_active == 0) {
    iVar1 = 0;
    do {
      core_fire_cpp_CFireEffect_createFireball_FUN_0048b270
                (g_CFireEffect_PTR_005b80f0,(CVector3f *)this_ptr,(CVector3f *)0x0,1,0);
      iVar1 = iVar1 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (g_CFireEffect_PTR_005b80f0,(CVector3f *)this_ptr,(CVector3f *)0x0,0x10000,0x10000,0
                 ,0xffff);
    } while (iVar1 < 8);
    core_set_cpp_FUN_0050e660();
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00525f50
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
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (g_CFireEffect_PTR_005b80f0,(CVector3f *)this_ptr,(CVector3f *)0x0,0x10000,0x10000,2
                 ,0xffff);
    } while (iVar1 < 8);
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00525f50
              ((double)(this_ptr->base).position.x,(double)(this_ptr->base).position.y,
               (double)(this_ptr->base).position.z);
    sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(0.8);
    filename = "rock-x.wav";
  }
  sound_sndmain_cpp_startSfx_FUN_005265a0(filename);
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  return 1;
}
