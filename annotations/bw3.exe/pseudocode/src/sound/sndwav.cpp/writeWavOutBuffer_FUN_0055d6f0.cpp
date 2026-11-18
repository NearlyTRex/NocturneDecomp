// Name: sound_sndwav.cpp_writeWavOutBuffer_FUN_0055d6f0
// Address: 0055d6f0
// Address Range: [[0055d6f0, 0055d868]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_0055d6f0(int buffer_index)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_0055d6f0(int buffer_index)

{
  int iVar1;
  LPVOID pvVar2;
  MMRESULT MVar3;
  int iVar4;
  int iVar5;
  int iVar7;
  LPVOID local_34 [8];
  int local_14;
  int iVar6;
  
  if ((g_WaveOutBuffers[buffer_index] == (LPVOID)0x0) ||
     (g_WaveOutHeaders[buffer_index] == (LPWAVEHDR)0x0)) {
    return 0;
  }
  MVar3 = waveOutUnprepareHeader((HWAVEOUT)g_WaveOutHandle,g_WaveOutHeaders[buffer_index],0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_0055a560("waveOutUnprepareHeader failed!");
    return 0;
  }
  iVar4 = (int)((g_WaveOutBitsPerSample + (g_WaveOutBitsPerSample >> 0x1f) * -8) -
               (uint)((g_WaveOutBitsPerSample >> 0x1f) << 2 < 0)) >> 3;
  iVar7 = 0;
  local_14 = buffer_index * 4;
  if (0 < g_WaveOutChannels * 4) {
    pvVar2 = g_WaveOutBuffers[buffer_index];
    iVar6 = 0;
    do {
      iVar5 = iVar6 + 4;
      iVar1 = (int)pvVar2 + iVar7;
      iVar7 = iVar7 + iVar4;
      *(int *)((int)local_34 + iVar6) = iVar1;
      iVar6 = iVar5;
    } while (iVar5 < g_WaveOutChannels * 4);
  }
  sound_sndmain_cpp_pollAndMixSfx_FUN_00559d90
            (local_34,g_WaveOutBitsPerSample,g_WaveOutChannels,g_WaveOutSampleRate,
             g_WaveOutBufferSize,iVar4 * g_WaveOutChannels);
  *(int *)(*(int *)((int)g_WaveOutHeaders + local_14) + 4) =
       ((int)((g_WaveOutBitsPerSample + (g_WaveOutBitsPerSample >> 0x1f) * -8) -
             (uint)((g_WaveOutBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_WaveOutBufferSize *
       g_WaveOutChannels;
  MVar3 = waveOutPrepareHeader
                    ((HWAVEOUT)g_WaveOutHandle,*(LPWAVEHDR *)((int)g_WaveOutHeaders + local_14),0x20
                    );
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_0055a560("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar3 = waveOutWrite((HWAVEOUT)g_WaveOutHandle,*(LPWAVEHDR *)((int)g_WaveOutHeaders + local_14),
                       0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_0055a560("waveOutWrite failed!");
    return 0;
  }
  return 1;
}
