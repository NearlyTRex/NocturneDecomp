// Name: sound_sndwav.cpp_CWavOutDevice_start_FUN_005b08f0
// Address: 005b08f0
// MANUAL RECONSTRUCTION
// Address Range: [[005b08f0, 005b09b6]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_005b08f0(CWavOutDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_005b08f0(CWavOutDevice *this_ptr)

{
  int iVar1;
  int iVar4;
  int iVar3;

  iVar3 = 0;
  if (0 < g_WaveOutNumBuffers) {
    do {
      memset(g_WaveOutHeaders[iVar3],0,0x20);
      g_WaveOutHeaders[iVar3]->lpData = (LPSTR)g_WaveOutBuffers[iVar3];
      g_WaveOutHeaders[iVar3]->dwUser = iVar3;
      g_WaveOutHeaders[iVar3]->dwBufferLength =
           g_WaveOutChannels * (g_WaveOutBitsPerSample / 8) * g_WaveOutBufferSize;
      iVar1 = sound_sndwav_cpp_writeWavOutBuffer_FUN_005b06c0(iVar3);
      if (iVar1 == 0) goto LAB_005b09a0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < g_WaveOutNumBuffers);
  }
  iVar4 = sound_sndmain_cpp_startSoundThread_FUN_005abc00
                    (((double)g_WaveOutBufferSize / (double)g_WaveOutSampleRate) * 0.33333333333333298);
  if (iVar4 != 0) {
    return 1;
  }
LAB_005b09a0:
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
