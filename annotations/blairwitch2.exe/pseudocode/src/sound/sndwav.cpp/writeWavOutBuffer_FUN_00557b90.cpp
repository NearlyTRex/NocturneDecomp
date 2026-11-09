// Name: sound_sndwav.cpp_writeWavOutBuffer_FUN_00557b90
// Address: 00557b90
// Address Range: [[00557b90, 00557d08]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_00557b90(int buffer_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_00557b90(int buffer_index)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int iVar4;
  int iVar6;
  int iVar7;
  int local_34 [8];
  int local_14;
  int iVar5;
  
  iVar7 = buffer_index * 4;
  if ((*(int *)(iVar7 + 0x264b0d4) == 0) || (*(LPWAVEHDR *)(iVar7 + 0x264b094) == (LPWAVEHDR)0x0)) {
    return 0;
  }
  MVar2 = waveOutUnprepareHeader(_DAT_0264b070,*(LPWAVEHDR *)(iVar7 + 0x264b094),0x20);
  if (MVar2 != 0) {
    sound_sndmain_cpp_FUN_005549c0("waveOutUnprepareHeader failed!");
    return 0;
  }
  iVar3 = (int)((_DAT_0264b0f4 + (_DAT_0264b0f4 >> 0x1f) * -8) -
               (uint)((_DAT_0264b0f4 >> 0x1f) << 2 < 0)) >> 3;
  iVar6 = 0;
  local_14 = iVar7;
  if (0 < _DAT_0264b0f8 * 4) {
    iVar7 = *(int *)(iVar7 + 0x264b0d4);
    iVar5 = 0;
    do {
      iVar4 = iVar5 + 4;
      iVar1 = iVar7 + iVar6;
      iVar6 = iVar6 + iVar3;
      *(int *)((int)local_34 + iVar5) = iVar1;
      iVar5 = iVar4;
    } while (iVar4 < _DAT_0264b0f8 * 4);
  }
  sound_sndmain_cpp_FUN_005541f0
            (local_34,_DAT_0264b0f4,_DAT_0264b0f8,_DAT_0264b0fc,_DAT_0264b100,iVar3 * _DAT_0264b0f8)
  ;
  *(int *)(*(int *)(local_14 + 0x264b094) + 4) =
       ((int)((_DAT_0264b0f4 + (_DAT_0264b0f4 >> 0x1f) * -8) -
             (uint)((_DAT_0264b0f4 >> 0x1f) << 2 < 0)) >> 3) * _DAT_0264b100 * _DAT_0264b0f8;
  MVar2 = waveOutPrepareHeader(_DAT_0264b070,*(LPWAVEHDR *)(local_14 + 0x264b094),0x20);
  if (MVar2 != 0) {
    sound_sndmain_cpp_FUN_005549c0("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar2 = waveOutWrite(_DAT_0264b070,*(LPWAVEHDR *)(local_14 + 0x264b094),0x20);
  if (MVar2 != 0) {
    sound_sndmain_cpp_FUN_005549c0("waveOutWrite failed!");
    return 0;
  }
  return 1;
}
