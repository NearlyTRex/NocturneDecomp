// Name: sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0
// Address: 005b06c0
// Address Range: [[005b06c0, 005b0838]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_005b06c0(int buffer_index)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_005b06c0(int buffer_index)

{
  int iVar1;
  LPVOID pvVar2;
  MMRESULT MVar3;
  int iVar4;
  int iVar5;
  int iVar7;
  LPVOID apvStack_34 [8];
  int iStack_14;
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
  iVar4 = (int)((g_WaveOutBitsPerSample + (g_WaveOutBitsPerSample >> 0x1f) * -8) -
               (uint)((g_WaveOutBitsPerSample >> 0x1f) << 2 < 0)) >> 3;
  iVar7 = 0;
  iStack_14 = buffer_index * 4;
  if (0 < g_WaveOutChannels * 4) {
    pvVar2 = g_WaveOutBuffers[buffer_index];
    iVar6 = 0;
    do {
      iVar5 = iVar6 + 4;
      iVar1 = (int)pvVar2 + iVar7;
      iVar7 = iVar7 + iVar4;
      *(int *)((int)apvStack_34 + iVar6) = iVar1;
      iVar6 = iVar5;
    } while (iVar5 < g_WaveOutChannels * 4);
  }
  sound_sndmain_cpp_pollAndMixSfx_FUN_005aca90
            (apvStack_34,g_WaveOutBitsPerSample,g_WaveOutChannels,g_WaveOutSampleRate,
             g_WaveOutBufferSize,iVar4 * g_WaveOutChannels);
  *(int *)(*(int *)((int)g_WaveOutHeaders + iStack_14) + 4) =
       ((int)((g_WaveOutBitsPerSample + (g_WaveOutBitsPerSample >> 0x1f) * -8) -
             (uint)((g_WaveOutBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_WaveOutBufferSize *
       g_WaveOutChannels;
  MVar3 = (*g_waveOutPrepareHeaderFunc)
                    (g_WaveOutHandle,*(LPWAVEHDR *)((int)g_WaveOutHeaders + iStack_14),0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar3 = (*g_waveOutWriteFunc)
                    (g_WaveOutHandle,*(LPWAVEHDR *)((int)g_WaveOutHeaders + iStack_14),0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutWrite failed!");
    return 0;
  }
  return 1;
}
