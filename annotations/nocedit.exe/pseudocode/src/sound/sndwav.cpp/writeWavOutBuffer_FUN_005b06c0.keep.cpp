// Name: sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0
// Address: 005b06c0
// MANUAL RECONSTRUCTION
// Address Range: [[005b06c0, 005b0838]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_005b06c0(int buffer_index)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_005b06c0(int buffer_index)

{
  MMRESULT MVar3;
  int iVar4;
  int iVar7;
  LPVOID apvStack_34 [8];
  int iVar6;

  if ((g_WaveOutBuffers[buffer_index] == (LPVOID)0x0) ||
     (g_WaveOutHeaders[buffer_index] == (LPWAVEHDR)0x0)) {
    return 0;
  }
  MVar3 = (*g_waveOutUnprepareHeaderFunc)(g_WaveOutHandle,g_WaveOutHeaders[buffer_index],0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutUnprepareHeader failed!");
    return 0;
  }
  iVar4 = g_WaveOutBitsPerSample / 8;
  iVar7 = 0;
  if (0 < g_WaveOutChannels) {
    iVar6 = 0;
    do {
      apvStack_34[iVar6] = (LPVOID)((char *)g_WaveOutBuffers[buffer_index] + iVar7);
      iVar7 = iVar7 + iVar4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < g_WaveOutChannels);
  }
  sound_sndmain_cpp_pollAndMixSfx_FUN_005aca90
            (apvStack_34,g_WaveOutBitsPerSample,g_WaveOutChannels,g_WaveOutSampleRate,
             g_WaveOutBufferSize,iVar4 * g_WaveOutChannels);
  g_WaveOutHeaders[buffer_index]->dwBufferLength =
       iVar4 * g_WaveOutBufferSize * g_WaveOutChannels;
  MVar3 = (*g_waveOutPrepareHeaderFunc)(g_WaveOutHandle,g_WaveOutHeaders[buffer_index],0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar3 = (*g_waveOutWriteFunc)(g_WaveOutHandle,g_WaveOutHeaders[buffer_index],0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutWrite failed!");
    return 0;
  }
  return 1;
}
