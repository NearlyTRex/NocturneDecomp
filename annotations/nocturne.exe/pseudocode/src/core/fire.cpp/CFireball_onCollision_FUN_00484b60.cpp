// Name: core_fire.cpp_CFireball_onCollision_FUN_00484b60
// Address: 00484b60
// Address Range: [[00484b60, 00484c8b]]
// Convention: unknown
// Signature: undefined4 core_fire_cpp_CFireball_onCollision_FUN_00484b60(CVector3f *param_1)

#include "nocturne.h"

uint core_fire_cpp_CFireball_onCollision_FUN_00484b60(CVector3f *param_1)

{
  int iVar1;
  char *filename;
  
  sound_sndmain_cpp_killSfx_FUN_00527230((uint)param_1[7].y);
  if (param_1[5].z == 0.0) {
    iVar1 = 0;
    do {
      core_fire_cpp_CFireEffect_createFireball_FUN_0048b270
                (0x01C08D04,param_1,(CVector3f *)0x0,1,0);
      iVar1 = iVar1 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,param_1,(CVector3f *)0x0,0x10000,0x10000,0,0xffff);
    } while (iVar1 < 8);
    core_set_cpp_FUN_0050e660();
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00525f50
              ((double)param_1->x,(double)param_1->y,(double)param_1->z);
    filename = "rock-x.wav";
  }
  else {
    if (param_1[5].z != 2.8026e-45) {
      return 0;
    }
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,param_1,(CVector3f *)0x0,0x10000,0x10000,2,0xffff);
    } while (iVar1 < 8);
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00525f50
              ((double)param_1->x,(double)param_1->y,(double)param_1->z);
    sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(0.8);
    filename = "rock-x.wav";
  }
  sound_sndmain_cpp_startSfx_FUN_005265a0(filename);
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  return 1;
}
