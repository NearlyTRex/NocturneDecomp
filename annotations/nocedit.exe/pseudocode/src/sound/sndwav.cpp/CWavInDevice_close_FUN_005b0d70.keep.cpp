// Name: sound_sndwav.cpp_CWavInDevice_close_FUN_005b0d70
// Address: 005b0d70
// MANUAL RECONSTRUCTION
// Address Range: [[005b0d70, 005b0e10]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_close_FUN_005b0d70(CWavInDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavInDevice_close_FUN_005b0d70(CWavInDevice *this_ptr)

{
  int iVar1;
  MMRESULT MVar2;
  uint uVar4;

  iVar1 = (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  uVar4 = (uint)(iVar1 != 0);
  iVar1 = 0;
  do {
    if (g_WaveInBufferHandles[iVar1] != (HGLOBAL)0x0) {
      (*g_GlobalFreeFunc)(g_WaveInBufferHandles[iVar1]);
      g_WaveInBufferHandles[iVar1] = (HGLOBAL)0x0;
    }
    g_WaveInBuffers[iVar1] = (LPVOID)0x0;
    if (g_WaveInHeaderHandles[iVar1] != (HGLOBAL)0x0) {
      (*g_GlobalFreeFunc)(g_WaveInHeaderHandles[iVar1]);
      g_WaveInHeaderHandles[iVar1] = (HGLOBAL)0x0;
    }
    g_WaveInHeaders[iVar1] = (LPWAVEHDR)0x0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x14);
  if (g_WaveInHandle == (HWAVEIN)0x0) {
    return uVar4;
  }
  MVar2 = (*g_waveInCloseFunc)(g_WaveInHandle);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("waveInClose failed.");
    uVar4 = 0;
  }
  g_WaveInHandle = (HWAVEIN)0x0;
  return uVar4;
}
