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
      goto LAB_004e6b67;
    }
    fVar1 = *hum_value + max_step;
  }
  *hum_value = fVar1;
LAB_004e6b67:
  fVar1 = *hum_value * (float)_DAT_005dc585;
  if (fVar1 <= 0.0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(*sfx_handle);
    return iVar4;
  }
  iVar2 = sound_sndmain_cpp_FUN_00550b70(*sfx_handle);
  if (iVar2 != 0) {
    sound_sndmain_cpp_FUN_00550d30
              (*sfx_handle,(double)world_position->x,(double)world_position->y,
               (double)world_position->z);
    sound_sndmain_cpp_FUN_00550f20(*sfx_handle,fVar1);
    return iVar4;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
  sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(fVar1);
  sound_sndmain_cpp_FUN_00550110
            ((double)world_position->x,(double)world_position->y,(double)world_position->z);
  uVar3 = sound_sndmain_cpp_FUN_005506b0();
  *sfx_handle = uVar3;
  sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
  return iVar4;
}
