// Name: sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0
// Address: 005b06c0
// Address Range: [[005b06c0, 005b0838]]
// Convention: __cdecl
// Signature: int sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0(int buffer_index)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_005b06c0(int buffer_index)

{
  int iVar1;
  LPVOID pvVar2;
  MMRESULT MVar3;
  int iVar4;
  int iVar5;
  int iVar7;
  BADSPACEBASE *in_ESP;
  int unaff_retaddr;
  int in_stack_00000010;
  int iVar6;
  
  if ((g_WaveOutBuffers[buffer_index] == (LPVOID)0x0) ||
     (g_WaveOutHeaders[buffer_index] == (LPWAVEHDR)0x0)) {
    return 0;
  }
  MVar3 = (*waveOutUnprepareHeader)(g_WaveOutHandle,g_WaveOutHeaders[buffer_index],0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutUnprepareHeader failed!");
    return 0;
  }
  iVar4 = (int)((g_WaveOutBitsPerSample + (g_WaveOutBitsPerSample >> 0x1f) * -8) -
               (uint)((g_WaveOutBitsPerSample >> 0x1f) << 2 < 0)) >> 3;
  iVar7 = 0;
  if (0 < g_WaveOutChannels * 4) {
    pvVar2 = g_WaveOutBuffers[buffer_index];
    iVar6 = 0;
    do {
      iVar5 = iVar6 + 4;
      iVar1 = (int)pvVar2 + iVar7;
      iVar7 = iVar7 + iVar4;
      *(int *)(&stack0xffffffdc + iVar6) = iVar1;
      iVar6 = iVar5;
    } while (iVar5 < g_WaveOutChannels * 4);
  }
  sound_sndmain_cpp_pollAndMixSfx_FUN_005aca90
            ((LPVOID *)&stack0xffffffdc,g_WaveOutBitsPerSample,g_WaveOutChannels,g_WaveOutSampleRate
             ,g_WaveOutBufferSize,iVar4 * g_WaveOutChannels);
  *(int *)(*(int *)((int)g_WaveOutHeaders + unaff_retaddr) + 4) =
       ((int)((g_WaveOutBitsPerSample + (g_WaveOutBitsPerSample >> 0x1f) * -8) -
             (uint)((g_WaveOutBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_WaveOutBufferSize *
       g_WaveOutChannels;
  MVar3 = (*waveOutPrepareHeader)
                    (g_WaveOutHandle,*(LPWAVEHDR *)((int)g_WaveOutHeaders + unaff_retaddr),0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar3 = (*waveOutWrite)(g_WaveOutHandle,*(LPWAVEHDR *)((int)g_WaveOutHeaders + in_stack_00000010),
                          0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutWrite failed!");
    return 0;
  }
  return 1;
}
