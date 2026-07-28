// Name: core_manpuz.cpp_updateGemHumChannel_FUN_004caef0
// Address: 004caef0
// Address Range: [[004caef0, 004cb00e]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_updateGemHumChannel_FUN_004caef0(float *hum_value,float target,float max_step,uint *sfx_handle,char *wav_filename,CVector3f *world_position)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_updateGemHumChannel_FUN_004caef0(float *hum_value,float target,float max_step,uint *sfx_handle,char *wav_filename,CVector3f *world_position)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (target - *hum_value < -max_step) {
    fVar1 = *hum_value - max_step;
  }
  else {
    if (target - *hum_value <= max_step) {
      iVar4 = 1;
      *hum_value = target;
      goto LAB_004caf37;
    }
    fVar1 = *hum_value + max_step;
  }
  *hum_value = fVar1;
LAB_004caf37:
  fVar1 = *hum_value * (float)0.0039215686274509803;
  if (fVar1 <= 0.0) {
    sound_sndmain_cpp_killSfx_FUN_00527230(*sfx_handle);
    return iVar4;
  }
  iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*sfx_handle);
  if (iVar2 != 0) {
    sound_sndmain_cpp_setSfxPosition_FUN_00526e10
              (*sfx_handle,(double)world_position->x,(double)world_position->y,
               (double)world_position->z);
    sound_sndmain_cpp_setSfxVolume_FUN_005270d0(*sfx_handle,fVar1);
    return iVar4;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
  sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(fVar1);
  sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00525f50
            ((double)world_position->x,(double)world_position->y,(double)world_position->z);
  uVar3 = sound_sndmain_cpp_startSfx_FUN_005265a0(wav_filename);
  *sfx_handle = uVar3;
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  return iVar4;
}
