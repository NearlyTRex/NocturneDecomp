// Name: sound_sndwav.cpp_CWavInDevice_poll_FUN_005b12e0
// Address: 005b12e0
// MANUAL RECONSTRUCTION
// Address Range: [[005b12e0, 005b146f]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_poll_FUN_005b12e0(CWavInDevice *this_ptr,short *output_buffer,int num_samples)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavInDevice_poll_FUN_005b12e0(CWavInDevice *this_ptr,short *output_buffer,int num_samples)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int buffer_index;
  int iVar4;
  bool bVar5;
  
  iVar3 = g_WaveInChannels *
          ((int)((g_WaveInBitsPerSample + (g_WaveInBitsPerSample >> 0x1f) * -8) -
                (uint)((g_WaveInBitsPerSample >> 0x1f) << 2 < 0)) >> 3);
  iVar4 = 0;
  bVar5 = g_WaveInBitsPerSample == 0x10;
  while( true ) {
    if (g_WaveInBuffers[g_WaveInCurrentBufferIndex] == (LPVOID)0x0) {
      return -1;
    }
    iVar1 = ((g_WaveInBufferSizeSamples - g_WaveInCurrentSampleOffset) * g_WaveInRequestedSampleRate
            ) / g_WaveInSampleRate;
    if (num_samples < iVar1) {
      iVar1 = num_samples;
    }
    if (0 < iVar1) {
      sound_sndmain_cpp_resampleAndConvertAudio_FUN_005aa7f0
                (g_WaveInBitsPerSample,g_WaveInChannels,g_WaveInSampleRate,(uint)bVar5,
                 (short *)((char *)g_WaveInBuffers[g_WaveInCurrentBufferIndex] +
                           g_WaveInCurrentSampleOffset * iVar3),
                 g_WaveInRequestedBitsPerSample,g_WaveInRequestedChannels,
                 g_WaveInRequestedSampleRate,g_WaveInStereoRequested,output_buffer,iVar1);
      output_buffer = (short *)((char *)output_buffer + iVar3 * iVar1);
      num_samples = num_samples - iVar1;
      g_WaveInCurrentSampleOffset =
           g_WaveInCurrentSampleOffset + (g_WaveInSampleRate * iVar1) / g_WaveInRequestedSampleRate;
      iVar4 = iVar4 + iVar1;
    }
    if (num_samples < 1) {
      return iVar4;
    }
    buffer_index = g_WaveInCurrentBufferIndex + 1;
    if (g_WaveInNumBuffers <= buffer_index) {
      buffer_index = 0;
    }
    if (g_WaveInHeaders[buffer_index] == (LPWAVEHDR)0x0) {
      return -1;
    }
    if ((g_WaveInHeaders[buffer_index]->dwFlags & 1) == 0) {
      return iVar4;
    }
    iVar2 = sound_sndwav_cpp_writeWavInBuffer_FUN_005b0cc0(buffer_index);
    if (iVar2 == 0) break;
    g_WaveInCurrentSampleOffset = 0;
    g_WaveInCurrentBufferIndex = buffer_index;
  }
  sound_sndmain_cpp_logSoundError_FUN_005adba0("WavInDevice::poll - queueWavInBuffer failed");
  return -1;
}
