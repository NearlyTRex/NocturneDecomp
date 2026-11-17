// Name: sound_sndwav.cpp_CWavInDevice_reset_FUN_0055df40
// Address: 0055df40
// Address Range: [[0055df40, 0055df98]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_reset_FUN_0055df40(CWavInDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavInDevice_reset_FUN_0055df40(CWavInDevice *this_ptr)

{
  MMRESULT MVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  if (g_WaveInHandle != 0) {
    MVar1 = waveInReset((HWAVEIN)g_WaveInHandle);
    if (MVar1 != 0) {
      sound_sndmain_cpp_logSoundError_FUN_0055a560("waveInReset failed!");
      iVar3 = 0;
    }
  }
  iVar2 = 0;
  do {
    if (*(LPWAVEHDR *)((int)g_WaveInHeaders + iVar2) != (LPWAVEHDR)0x0) {
      waveInUnprepareHeader
                ((HWAVEIN)g_WaveInHandle,*(LPWAVEHDR *)((int)g_WaveInHeaders + iVar2),0x20);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x50);
  return iVar3;
}
