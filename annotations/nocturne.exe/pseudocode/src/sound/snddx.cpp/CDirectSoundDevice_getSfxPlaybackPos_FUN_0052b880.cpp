// Name: sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880
// Address: 0052b880
// Address Range: [[0052b880, 0052b999]]
// Convention: unknown
// Signature: double sound_snddx_cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double sound_snddx_cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *apcStack_1bc [103];
  uint uStack_20;
  char local_18 [8];
  
  iVar2 = *(int *)(param_2 + 0x6c);
  if ((((iVar2 < 1) || (0x1e < iVar2)) || (*(int *)(iVar2 * 4 + 0x2dc92a8) == 0)) ||
     (*(int *)(iVar2 * 4 + 0x2dc9324) == 0)) {
    apcStack_1bc[0] = "DirectSoundDevice::getSfxPlaybackPos - invalid handle";
    _DAT_01cc4800 = "..\\sound\\snddx.cpp";
    _DAT_01cc4804 = 0x3a7;
    FUN_004c8440();
  }
  apcStack_1bc[0] = local_18;
  piVar1 = *(int **)(iVar2 * 4 + 0x2dc92a8);
  iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1);
  if (iVar2 != 0) {
    uVar4 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(iVar2);
    _sprintf(apcStack_1bc,"DirectSux: Unable to %s.  (%s)","Get playback cursor of hardware sfx secondary buffer",
               uVar4);
    FUN_00529980(apcStack_1bc);
    return -1.0;
  }
  uVar3 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
                    (*(uint *)(param_2 + 0x74));
  return (double)(uStack_20 / uVar3);
}
