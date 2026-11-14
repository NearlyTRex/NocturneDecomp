// Name: core_manpuz.cpp_updateGemHumChannel_FUN_005057c0
// Address: 005057c0
// Address Range: [[005057c0, 005058de]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_updateGemHumChannel_FUN_005057c0(float *hum_value,float target,float max_step,uint *sfx_handle,char *wav_filename,CVector3f *world_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_manpuz_cpp_updateGemHumChannel_FUN_005057c0(float *hum_value,float target,float max_step,uint *sfx_handle,char *wav_filename,CVector3f *world_position)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (target - *hum_value < -max_step) {
    fVar1 = *hum_value - max_step;
  }
  else {
    if (target - *hum_value <= max_step) {
      iVar5 = 1;
      *hum_value = target;
      goto LAB_00505807;
    }
    fVar1 = *hum_value + max_step;
  }
  *hum_value = fVar1;
LAB_00505807:
  fVar1 = *hum_value;
  fVar2 = (float)_DAT_005e74d5;
  if (fVar1 * fVar2 <= 0.0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*sfx_handle);
    return iVar5;
  }
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(*sfx_handle);
  if (iVar3 != 0) {
    sound_sndmain_cpp_setSfxPosition_FUN_00573760
              (*sfx_handle,(double)world_position->x,(double)world_position->y,
               (double)world_position->z);
    sound_sndmain_cpp_setSfxVolume_FUN_00573950(*sfx_handle,(float)hum_value);
    return iVar5;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
  sound_sndmain_cpp_setNextSfxVolume_FUN_005728e0(fVar1 * fVar2);
  sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00572780
            ((double)world_position->x,(double)world_position->y,(double)world_position->z);
  uVar4 = sound_sndmain_cpp_startSfx_FUN_00572d20(wav_filename);
  *sfx_handle = uVar4;
  sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
  return iVar5;
}
