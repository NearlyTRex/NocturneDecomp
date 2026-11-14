// Name: core_manpuz.cpp_updateGemHumChannel_FUN_004e6b20
// Address: 004e6b20
// Address Range: [[004e6b20, 004e6c3e]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_updateGemHumChannel_FUN_004e6b20(float *hum_value,float target,float max_step,uint *sfx_handle,char *wav_filename,CVector3f *world_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_manpuz_cpp_updateGemHumChannel_FUN_004e6b20(float *hum_value,float target,float max_step,uint *sfx_handle,char *wav_filename,CVector3f *world_position)

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
      goto LAB_004e6b67;
    }
    fVar1 = *hum_value + max_step;
  }
  *hum_value = fVar1;
LAB_004e6b67:
  fVar1 = *hum_value;
  fVar2 = (float)_DAT_005dc585;
  if (fVar1 * fVar2 <= 0.0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(*sfx_handle);
    return iVar5;
  }
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(*sfx_handle);
  if (iVar3 != 0) {
    sound_sndmain_cpp_setSfxPosition_FUN_00550d30
              (*sfx_handle,(double)world_position->x,(double)world_position->y,
               (double)world_position->z);
    sound_sndmain_cpp_setSfxVolume_FUN_00550f20(*sfx_handle,(float)hum_value);
    return iVar5;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
  sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(fVar1 * fVar2);
  sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00550110
            ((double)world_position->x,(double)world_position->y,(double)world_position->z);
  uVar4 = sound_sndmain_cpp_startSfx_FUN_005506b0(wav_filename);
  *sfx_handle = uVar4;
  sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
  return iVar5;
}
