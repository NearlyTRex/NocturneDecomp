// Name: core_fire.cpp_CFireball_onCollision_FUN_00484b60
// Address: 00484b60
// Address Range: [[00484b60, 00484c8b]]
// Convention: unknown
// Signature: undefined4 core_fire_cpp_CFireball_onCollision_FUN_00484b60(float *param_1)

#include "nocturne.h"

uint core_fire_cpp_CFireball_onCollision_FUN_00484b60(float *param_1)

{
  int iVar1;
  
  sound_sndmain_cpp_killSfx_FUN_00527230();
  if (param_1[0x11] == 0.0) {
    iVar1 = 0;
    do {
      core_fire_cpp_CFireEffect_createFireball_FUN_0048b270();
      iVar1 = iVar1 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,param_1,0,0x10000,0x10000,0,0xffff);
    } while (iVar1 < 8);
    core_set_cpp_FUN_0050e660();
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00525f50
              ((double)*param_1,(double)param_1[1],(double)param_1[2]);
  }
  else {
    if (param_1[0x11] != 2.8026e-45) {
      return 0;
    }
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,param_1,0,0x10000,0x10000,2,0xffff);
    } while (iVar1 < 8);
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00525f50
              ((double)*param_1,(double)param_1[1],(double)param_1[2]);
    sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0();
  }
  sound_sndmain_cpp_startSfx_FUN_005265a0();
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  return 1;
}
