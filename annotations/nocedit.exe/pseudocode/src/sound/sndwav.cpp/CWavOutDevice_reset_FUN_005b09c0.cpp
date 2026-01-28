// Name: sound_sndwav.cpp_CWavOutDevice_reset_FUN_005b09c0
// Address: 005b09c0
// Address Range: [[005b09c0, 005b0a29]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_reset_FUN_005b09c0(CWavOutDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavOutDevice_reset_FUN_005b09c0(CWavOutDevice *this_ptr)

{
  MMRESULT MVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  if (g_WaveOutHandle != (HWAVEOUT)0x0) {
    MVar1 = (*g_waveOutResetFunc)(g_WaveOutHandle);
    if (MVar1 != 0) {
      sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutReset failed!");
      iVar3 = 0;
    }
  }
  iVar2 = 0;
  do {
    if (*(LPWAVEHDR *)((int)g_WaveOutHeaders + iVar2) != (LPWAVEHDR)0x0) {
      (*g_waveOutUnprepareHeaderFunc)
                (g_WaveOutHandle,*(LPWAVEHDR *)((int)g_WaveOutHeaders + iVar2),0x20);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x20);
  iVar2 = sound_sndmain_cpp_killSoundThread_FUN_005abcb0();
  if (iVar2 != 0) {
    return iVar3;
  }
  return 0;
}
