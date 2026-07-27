// Name: sound_sndwav.cpp_writeWavOutBuffer_FUN_0052c130
// Address: 0052c130
// Address Range: [[0052c130, 0052c28d]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_0052c130(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_0052c130(int param_1)

{
  int iVar1;
  int iVar2;
  MMRESULT MVar3;
  int iVar4;
  int iVar5;
  int iVar7;
  int local_34 [8];
  int local_14;
  int iVar6;
  
  param_1 = param_1 * 4;
  if ((*(int *)(param_1 + 0x2dc93c8) == 0) ||
     (*(LPWAVEHDR *)(param_1 + 0x2dc93a8) == (LPWAVEHDR)0x0)) {
    return 0;
  }
  MVar3 = waveOutUnprepareHeader(_DAT_02dc93a4,*(LPWAVEHDR *)(param_1 + 0x2dc93a8),0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_FUN_00529980("waveOutUnprepareHeader failed!");
    return 0;
  }
  iVar4 = (int)((_DAT_02dc9428 + (_DAT_02dc9428 >> 0x1f) * -8) -
               (uint)((_DAT_02dc9428 >> 0x1f) << 2 < 0)) >> 3;
  iVar7 = 0;
  local_14 = param_1;
  if (0 < _DAT_02dc9430 * 4) {
    iVar2 = *(int *)(param_1 + 0x2dc93c8);
    iVar6 = 0;
    do {
      iVar5 = iVar6 + 4;
      iVar1 = iVar2 + iVar7;
      iVar7 = iVar7 + iVar4;
      *(int *)((int)local_34 + iVar6) = iVar1;
      iVar6 = iVar5;
    } while (iVar5 < _DAT_02dc9430 * 4);
  }
  sound_sndmain_cpp_pollAndMixSfx_FUN_005294f0
            (local_34,_DAT_02dc9428,_DAT_02dc9430,_DAT_02dc942c,_DAT_02dc9434,iVar4 * _DAT_02dc9430)
  ;
  *(uint *)(*(int *)(local_14 + 0x2dc93a8) + 4) = _DAT_02dc9438;
  MVar3 = waveOutPrepareHeader(_DAT_02dc93a4,*(LPWAVEHDR *)(local_14 + 0x2dc93a8),0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_FUN_00529980("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar3 = waveOutWrite(_DAT_02dc93a4,*(LPWAVEHDR *)(local_14 + 0x2dc93a8),0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_FUN_00529980("waveOutWrite failed!");
    return 0;
  }
  return 1;
}
