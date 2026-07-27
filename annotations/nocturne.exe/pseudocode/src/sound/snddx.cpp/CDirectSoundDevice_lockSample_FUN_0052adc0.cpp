// Name: sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_0052adc0
// Address: 0052adc0
// Address Range: [[0052adc0, 0052ae85]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_0052adc0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

uint sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_0052adc0(uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int *piStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  
  if (((0 < param_2) && (param_2 < 0x19)) && (*(int *)(&DAT_02dc9244 + param_2 * 4) != 0)) {
    iStack_19c = param_5;
    iStack_1a0 = 0x52adfa;
    iStack_1b4 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40();
    iStack_19c = 0;
    iStack_1a0 = param_5 + 0x15c;
    iStack_1a4 = param_5 + 0x164;
    iStack_1a8 = param_5 + 0x158;
    iStack_1ac = param_5 + 0x160;
    iStack_1b0 = param_4 * iStack_1b4;
    iStack_1b4 = iStack_1b4 * param_3;
    piStack_1b8 = *(int **)(&DAT_02dc9244 + param_2 * 4);
    iVar1 = (**(code **)(*piStack_1b8 + 0x2c))();
    if (iVar1 == 0) {
      return *(uint *)(param_5 + 0x160);
    }
    uVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(iVar1);
    _sprintf(&piStack_1b8,"DirectSux: Unable to %s.  (%s)","Lock hw sample buffer",
               uVar2);
    sound_sndmain_cpp_FUN_00529980(&piStack_1b8);
    return 0;
  }
  return 0;
}
