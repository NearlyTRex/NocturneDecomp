// Name: sound_sndwav.cpp_CWavOutDevice_poll_FUN_005b0c10
// Address: 005b0c10
// MANUAL RECONSTRUCTION
// Address Range: [[005b0c10, 005b0c88]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_poll_FUN_005b0c10(CWavOutDevice *this_ptr,short *output_buffer,int num_samples)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavOutDevice_poll_FUN_005b0c10(CWavOutDevice *this_ptr,short *output_buffer,int num_samples)

{
  int iVar1;
  int buffer_index;

  buffer_index = 0;
  if (0 < g_WaveOutNumBuffers) {
    do {
      if ((g_WaveOutHeaders[buffer_index] == (LPWAVEHDR)0x0) ||
         (g_WaveOutBuffers[buffer_index] == (LPVOID)0x0)) {
        sound_sndmain_cpp_logSoundError_FUN_005adba0("WavOutDevice::poll - NULL pointer??");
        return 0;
      }
      if (((g_WaveOutHeaders[buffer_index]->dwFlags & 1) != 0) &&
         (iVar1 = sound_sndwav_cpp_writeWavOutBuffer_FUN_005b06c0(buffer_index), iVar1 == 0)) {
        sound_sndmain_cpp_logSoundError_FUN_005adba0("WavOutDevice::poll - sendWavOutBuffer failed");
        return 0;
      }
      buffer_index = buffer_index + 1;
    } while (buffer_index < g_WaveOutNumBuffers);
  }
  return 1;
}
