// Name: sound_sndwav.cpp_CWavInDevice_start_FUN_005b0e20
// Address: 005b0e20
// MANUAL RECONSTRUCTION
// Address Range: [[005b0e20, 005b0f01]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_start_FUN_005b0e20(CWavInDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavInDevice_start_FUN_005b0e20(CWavInDevice *this_ptr)

{
  int iVar1;
  MMRESULT MVar2;
  int buffer_index;

  buffer_index = 0;
  if (0 < g_WaveInNumBuffers) {
    do {
      memset(g_WaveInHeaders[buffer_index],0,0x20);
      g_WaveInHeaders[buffer_index]->lpData = (LPSTR)g_WaveInBuffers[buffer_index];
      g_WaveInHeaders[buffer_index]->dwUser = buffer_index;
      g_WaveInHeaders[buffer_index]->dwBufferLength =
           (g_WaveInBitsPerSample / 8) * g_WaveInBufferSizeSamples * g_WaveInChannels;
      iVar1 = sound_sndwav_cpp_writeWavInBuffer_FUN_005b0cc0(buffer_index);
      if (iVar1 == 0) {
        (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
        return 0;
      }
      buffer_index = buffer_index + 1;
    } while (buffer_index < g_WaveInNumBuffers);
  }
  g_WaveInCurrentBufferIndex = g_WaveInNumBuffers + -1;
  g_WaveInCurrentSampleOffset = g_WaveInBufferSizeSamples;
  MVar2 = (*g_waveInStartFunc)(g_WaveInHandle);
  if (MVar2 == 0) {
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_005adba0("waveInStart failed!");
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
