// Name: sound_sndwav.cpp_writeWavInBuffer_FUN_0055dcf0
// Address: 0055dcf0
// Address Range: [[0055dcf0, 0055dd9c]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_writeWavInBuffer_FUN_0055dcf0(int buffer_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_writeWavInBuffer_FUN_0055dcf0(int buffer_index)

{
  MMRESULT MVar1;
  int iVar2;
  
  iVar2 = buffer_index * 4;
  if ((*(int *)(&DAT_02cf55f8 + iVar2) == 0) || (*(int *)(iVar2 + 0x2cf5558) == 0)) {
    return 0;
  }
  *(int *)(*(int *)(iVar2 + 0x2cf5558) + 4) =
       _DAT_02cf564c *
       ((int)((_DAT_02cf5648 + (_DAT_02cf5648 >> 0x1f) * -8) -
             (uint)((_DAT_02cf5648 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02cf5658;
  MVar1 = waveInPrepareHeader(_DAT_02cf5504,*(LPWAVEHDR *)(iVar2 + 0x2cf5558),0x20);
  if (MVar1 != 0) {
    sound_sndmain_cpp_FUN_0055a560("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar1 = waveInAddBuffer(_DAT_02cf5504,*(LPWAVEHDR *)(iVar2 + 0x2cf5558),0x20);
  if (MVar1 == 0) {
    return 1;
  }
  sound_sndmain_cpp_FUN_0055a560("waveOutWrite failed!");
  return 0;
}
