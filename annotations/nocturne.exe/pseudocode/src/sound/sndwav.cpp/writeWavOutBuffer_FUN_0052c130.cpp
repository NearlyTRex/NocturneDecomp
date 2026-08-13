// Name: sound_sndwav.cpp_writeWavOutBuffer_FUN_0052c130
// Address: 0052c130
// Address Range: [[0052c130, 0052c28d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_0052c130(int buffer_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_0052c130(int buffer_index)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int iVar4;
  int iVar6;
  int iVar7;
  LPVOID local_34 [8];
  int local_14;
  int iVar5;
  
  iVar7 = buffer_index * 4;
  if ((*(int *)(iVar7 + 0x2dc93c8) == 0) || (*(LPWAVEHDR *)(iVar7 + 0x2dc93a8) == (LPWAVEHDR)0x0)) {
    return 0;
  }
  MVar2 = waveOutUnprepareHeader(_DAT_02dc93a4,*(LPWAVEHDR *)(iVar7 + 0x2dc93a8),0x20);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_00529980("waveOutUnprepareHeader failed!");
    return 0;
  }
  iVar3 = (int)((_DAT_02dc9428 + (_DAT_02dc9428 >> 0x1f) * -8) -
               (uint)((_DAT_02dc9428 >> 0x1f) << 2 < 0)) >> 3;
  iVar6 = 0;
  local_14 = iVar7;
  if (0 < _DAT_02dc9430 * 4) {
    iVar7 = *(int *)(iVar7 + 0x2dc93c8);
    iVar5 = 0;
    do {
      iVar4 = iVar5 + 4;
      iVar1 = iVar7 + iVar6;
      iVar6 = iVar6 + iVar3;
      *(int *)((int)local_34 + iVar5) = iVar1;
      iVar5 = iVar4;
    } while (iVar4 < _DAT_02dc9430 * 4);
  }
  sound_sndmain_cpp_pollAndMixSfx_FUN_005294f0
            (local_34,_DAT_02dc9428,_DAT_02dc9430,_DAT_02dc942c,_DAT_02dc9434,iVar3 * _DAT_02dc9430)
  ;
  *(uint *)(*(int *)(local_14 + 0x2dc93a8) + 4) = _DAT_02dc9438;
  MVar2 = waveOutPrepareHeader(_DAT_02dc93a4,*(LPWAVEHDR *)(local_14 + 0x2dc93a8),0x20);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_00529980("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar2 = waveOutWrite(_DAT_02dc93a4,*(LPWAVEHDR *)(local_14 + 0x2dc93a8),0x20);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_00529980("waveOutWrite failed!");
    return 0;
  }
  return 1;
}
