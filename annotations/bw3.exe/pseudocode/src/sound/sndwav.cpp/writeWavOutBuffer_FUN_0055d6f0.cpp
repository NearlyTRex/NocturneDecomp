// Name: sound_sndwav.cpp_writeWavOutBuffer_FUN_0055d6f0
// Address: 0055d6f0
// Address Range: [[0055d6f0, 0055d868]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_0055d6f0(int buffer_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_0055d6f0(int buffer_index)

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
  if ((*(int *)(iVar7 + 0x2cf54d0) == 0) || (*(LPWAVEHDR *)(iVar7 + 0x2cf5490) == (LPWAVEHDR)0x0)) {
    return 0;
  }
  MVar2 = waveOutUnprepareHeader(_DAT_02cf546c,*(LPWAVEHDR *)(iVar7 + 0x2cf5490),0x20);
  if (MVar2 != 0) {
    sound_sndmain_cpp_FUN_0055a560("waveOutUnprepareHeader failed!");
    return 0;
  }
  iVar3 = (int)((_DAT_02cf54f0 + (_DAT_02cf54f0 >> 0x1f) * -8) -
               (uint)((_DAT_02cf54f0 >> 0x1f) << 2 < 0)) >> 3;
  iVar6 = 0;
  local_14 = iVar7;
  if (0 < _DAT_02cf54f4 * 4) {
    iVar7 = *(int *)(iVar7 + 0x2cf54d0);
    iVar5 = 0;
    do {
      iVar4 = iVar5 + 4;
      iVar1 = iVar7 + iVar6;
      iVar6 = iVar6 + iVar3;
      *(int *)((int)local_34 + iVar5) = iVar1;
      iVar5 = iVar4;
    } while (iVar4 < _DAT_02cf54f4 * 4);
  }
  sound_sndmain_cpp_pollAndMixSfx_FUN_00559d90
            (local_34,_DAT_02cf54f0,_DAT_02cf54f4,_DAT_02cf54f8,_DAT_02cf54fc,iVar3 * _DAT_02cf54f4)
  ;
  *(int *)(*(int *)(local_14 + 0x2cf5490) + 4) =
       ((int)((_DAT_02cf54f0 + (_DAT_02cf54f0 >> 0x1f) * -8) -
             (uint)((_DAT_02cf54f0 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02cf54fc * _DAT_02cf54f4;
  MVar2 = waveOutPrepareHeader(_DAT_02cf546c,*(LPWAVEHDR *)(local_14 + 0x2cf5490),0x20);
  if (MVar2 != 0) {
    sound_sndmain_cpp_FUN_0055a560("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar2 = waveOutWrite(_DAT_02cf546c,*(LPWAVEHDR *)(local_14 + 0x2cf5490),0x20);
  if (MVar2 != 0) {
    sound_sndmain_cpp_FUN_0055a560("waveOutWrite failed!");
    return 0;
  }
  return 1;
}
