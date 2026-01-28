// Name: sound_sndwav.cpp_CWavInDevice_poll_FUN_005b12e0
// Address: 005b12e0
// Address Range: [[005b12e0, 005b146f]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_poll_FUN_005b12e0(CWavInDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavInDevice_poll_FUN_005b12e0(CWavInDevice *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  short *in_stack_00000008;
  int in_stack_0000000c;
  
  iVar3 = g_WaveInChannels *
          ((int)((g_WaveInBitsPerSample + (g_WaveInBitsPerSample >> 0x1f) * -8) -
                (uint)((g_WaveInBitsPerSample >> 0x1f) << 2 < 0)) >> 3);
  iVar4 = 0;
  bVar5 = g_WaveInBitsPerSample == 0x10;
  while( true ) {
    if (g_WaveInBuffers[g_WaveInCurrentBufferIndex] == (LPVOID)0x0) {
      return -1;
    }
    iVar1 = ((g_WaveInBufferSizeSamples - g_WaveInCurrentSampleOffset) *
            g_WaveInRequestedBitsPerSample) / g_WaveInSampleRate;
    if (in_stack_0000000c < iVar1) {
      iVar1 = in_stack_0000000c;
    }
    if (0 < iVar1) {
      sound_sndmain_cpp_resampleAndConvertAudio_FUN_005aa7f0
                (g_WaveInBitsPerSample,g_WaveInChannels,g_WaveInSampleRate,(uint)bVar5,
                 (short *)(g_WaveInCurrentSampleOffset * iVar3 +
                          (int)g_WaveInBuffers[g_WaveInCurrentBufferIndex]),
                 g_WaveInRequestedChannels,g_WaveInRequestedSampleRate,
                 g_WaveInRequestedBitsPerSample,g_WaveInStereoRequested,in_stack_00000008,iVar1);
      in_stack_00000008 = (short *)((int)in_stack_00000008 + iVar3 * iVar1);
      in_stack_0000000c = in_stack_0000000c - iVar1;
      g_WaveInCurrentSampleOffset =
           g_WaveInCurrentSampleOffset +
           (g_WaveInSampleRate * iVar1) / g_WaveInRequestedBitsPerSample;
      iVar4 = iVar4 + iVar1;
    }
    if (in_stack_0000000c < 1) {
      return iVar4;
    }
    iVar1 = g_WaveInCurrentBufferIndex + 1;
    if (g_WaveInNumBuffers <= iVar1) {
      iVar1 = 0;
    }
    if (g_WaveInHeaders[iVar1] == (LPWAVEHDR)0x0) {
      return -1;
    }
    if ((g_WaveInHeaders[iVar1]->dwFlags & 1) == 0) {
      return iVar4;
    }
    iVar2 = sound_sndwav_cpp_writeWavInBuffer_FUN_005b0cc0(iVar1);
    if (iVar2 == 0) break;
    g_WaveInCurrentSampleOffset = 0;
    g_WaveInCurrentBufferIndex = iVar1;
  }
  sound_sndmain_cpp_logSoundError_FUN_005adba0("WavInDevice::poll - queueWavInBuffer failed");
  return -1;
}
