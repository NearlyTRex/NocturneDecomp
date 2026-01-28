// Name: sound_sndwav.cpp_CWavInDevice_reset_FUN_005b0f10
// Address: 005b0f10
// Address Range: [[005b0f10, 005b0f68]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_reset_FUN_005b0f10(CWavInDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavInDevice_reset_FUN_005b0f10(CWavInDevice *this_ptr)

{
  MMRESULT MVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  if (g_WaveInHandle != (HWAVEIN)0x0) {
    MVar1 = (*g_waveInResetFunc)(g_WaveInHandle);
    if (MVar1 != 0) {
      sound_sndmain_cpp_logSoundError_FUN_005adba0("waveInReset failed!");
      iVar3 = 0;
    }
  }
  iVar2 = 0;
  do {
    if (*(LPWAVEHDR *)((int)g_WaveInHeaders + iVar2) != (LPWAVEHDR)0x0) {
      (*g_waveInUnprepareHeaderFunc)
                (g_WaveInHandle,*(LPWAVEHDR *)((int)g_WaveInHeaders + iVar2),0x20);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x50);
  return iVar3;
}
