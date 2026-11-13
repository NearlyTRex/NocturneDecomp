// Name: sound_sndwav.cpp_writeWavOutBuffer_FUN_0057a5c0
// Address: 0057a5c0
// Address Range: [[0057a5c0, 0057a738]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_0057a5c0(int buffer_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_0057a5c0(int buffer_index)

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
  if ((*(int *)(iVar7 + 0x2c828a4) == 0) || (*(LPWAVEHDR *)(iVar7 + 0x2c82864) == (LPWAVEHDR)0x0)) {
    return 0;
  }
  MVar2 = waveOutUnprepareHeader(_DAT_02c82840,*(LPWAVEHDR *)(iVar7 + 0x2c82864),0x20);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005773f0("waveOutUnprepareHeader failed!");
    return 0;
  }
  iVar3 = (int)((_DAT_02c828c4 + (_DAT_02c828c4 >> 0x1f) * -8) -
               (uint)((_DAT_02c828c4 >> 0x1f) << 2 < 0)) >> 3;
  iVar6 = 0;
  local_14 = iVar7;
  if (0 < _DAT_02c828c8 * 4) {
    iVar7 = *(int *)(iVar7 + 0x2c828a4);
    iVar5 = 0;
    do {
      iVar4 = iVar5 + 4;
      iVar1 = iVar7 + iVar6;
      iVar6 = iVar6 + iVar3;
      *(int *)((int)local_34 + iVar5) = iVar1;
      iVar5 = iVar4;
    } while (iVar4 < _DAT_02c828c8 * 4);
  }
  sound_sndmain_cpp_pollAndMixSfx_FUN_00576c20
            (local_34,_DAT_02c828c4,_DAT_02c828c8,_DAT_02c828cc,_DAT_02c828d0,iVar3 * _DAT_02c828c8)
  ;
  *(int *)(*(int *)(local_14 + 0x2c82864) + 4) =
       ((int)((_DAT_02c828c4 + (_DAT_02c828c4 >> 0x1f) * -8) -
             (uint)((_DAT_02c828c4 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02c828d0 * _DAT_02c828c8;
  MVar2 = waveOutPrepareHeader(_DAT_02c82840,*(LPWAVEHDR *)(local_14 + 0x2c82864),0x20);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005773f0("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar2 = waveOutWrite(_DAT_02c82840,*(LPWAVEHDR *)(local_14 + 0x2c82864),0x20);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005773f0("waveOutWrite failed!");
    return 0;
  }
  return 1;
}
