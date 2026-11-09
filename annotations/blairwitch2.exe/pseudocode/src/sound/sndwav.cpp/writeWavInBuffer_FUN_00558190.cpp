// Name: sound_sndwav.cpp_writeWavInBuffer_FUN_00558190
// Address: 00558190
// Address Range: [[00558190, 0055823c]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_writeWavInBuffer_FUN_00558190(int buffer_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_writeWavInBuffer_FUN_00558190(int buffer_index)

{
  MMRESULT MVar1;
  int iVar2;
  
  iVar2 = buffer_index * 4;
  if ((*(int *)(&DAT_0264b1fc + iVar2) == 0) || (*(int *)(iVar2 + 0x264b15c) == 0)) {
    return 0;
  }
  *(int *)(*(int *)(iVar2 + 0x264b15c) + 4) =
       _DAT_0264b250 *
       ((int)((_DAT_0264b24c + (_DAT_0264b24c >> 0x1f) * -8) -
             (uint)((_DAT_0264b24c >> 0x1f) << 2 < 0)) >> 3) * _DAT_0264b25c;
  MVar1 = waveInPrepareHeader(_DAT_0264b108,*(LPWAVEHDR *)(iVar2 + 0x264b15c),0x20);
  if (MVar1 != 0) {
    sound_sndmain_cpp_FUN_005549c0("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar1 = waveInAddBuffer(_DAT_0264b108,*(LPWAVEHDR *)(iVar2 + 0x264b15c),0x20);
  if (MVar1 == 0) {
    return 1;
  }
  sound_sndmain_cpp_FUN_005549c0("waveOutWrite failed!");
  return 0;
}
