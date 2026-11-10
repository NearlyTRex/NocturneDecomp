// Name: core_manpuz.cpp_updateGemHumChannel_FUN_005057c0
// Address: 005057c0
// Address Range: [[005057c0, 005058de]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_manpuz_cpp_updateGemHumChannel_FUN_005057c0(float *param_1,float param_2,float param_3,uint *param_4,char *param_5,float *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_manpuz_cpp_updateGemHumChannel_FUN_005057c0(float *param_1,float param_2,float param_3,uint *param_4,char *param_5,float *param_6)

{
  float volume;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 - *param_1 < -param_3) {
    param_3 = *param_1 - param_3;
  }
  else {
    if (param_2 - *param_1 <= param_3) {
      uVar3 = 1;
      *param_1 = param_2;
      goto LAB_00505807;
    }
    param_3 = *param_1 + param_3;
  }
  *param_1 = param_3;
LAB_00505807:
  volume = *param_1 * (float)_DAT_005e74d5;
  if (volume <= 0.0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*param_4);
    return uVar3;
  }
  iVar1 = sound_sndmain_cpp_FUN_005735a0(*param_4);
  if (iVar1 != 0) {
    sound_sndmain_cpp_FUN_00573760(*param_4,(double)*param_6,(double)param_6[1],(double)param_6[2]);
    sound_sndmain_cpp_FUN_00573950(*param_4,volume);
    return uVar3;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
  sound_sndmain_cpp_FUN_005728e0(volume);
  sound_sndmain_cpp_FUN_00572780((double)*param_6,(double)param_6[1],(double)param_6[2]);
  uVar2 = sound_sndmain_cpp_startSfx_FUN_00572d20(param_5);
  *param_4 = uVar2;
  sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
  return uVar3;
}
