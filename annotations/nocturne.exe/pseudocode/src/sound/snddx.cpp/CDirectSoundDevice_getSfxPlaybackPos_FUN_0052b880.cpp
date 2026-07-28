// Name: sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880
// Address: 0052b880
// Address Range: [[0052b880, 0052b999]]
// Convention: unknown
// Signature: double sound_snddx_cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880(undefined4 param_1,int param_2)

#include "nocturne.h"

double sound_snddx_cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880(uint param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  char *apcStack_1bc [103];
  uint uStack_20;
  char local_18 [8];
  
  iVar1 = *(int *)(param_2 + 0x6c);
  if ((((iVar1 < 1) || (0x1e < iVar1)) || (*(int *)(iVar1 * 4 + 0x2dc92a8) == 0)) ||
     (*(int *)(iVar1 * 4 + 0x2dc9324) == 0)) {
    apcStack_1bc[0] = "DirectSoundDevice::getSfxPlaybackPos - invalid handle";
    PTR_01cc4800 = "..\\sound\\snddx.cpp";
    INT_01cc4804 = 0x3a7;
    core_main_c_FUN_004c8440();
  }
  apcStack_1bc[0] = local_18;
  piVar2 = *(int **)(iVar1 * 4 + 0x2dc92a8);
  uVar3 = (**(code **)(*piVar2 + 0x10))(piVar2);
  if (uVar3 != 0) {
    pcVar4 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar3);
    _sprintf(apcStack_1bc,"DirectSux: Unable to %s.  (%s)","Get playback cursor of hardware sfx secondary buffer",
               pcVar4);
    sound_sndmain_cpp_FUN_00529980(apcStack_1bc);
    return -1.0;
  }
  uVar3 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
                    (*(CSfxSample **)(param_2 + 0x74));
  return (double)(uStack_20 / uVar3);
}
