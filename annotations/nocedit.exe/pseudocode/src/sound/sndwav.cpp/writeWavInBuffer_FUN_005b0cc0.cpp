// Name: sound_sndwav.cpp_writeWavInBuffer_FUN_005b0cc0
// Address: 005b0cc0
// Address Range: [[005b0cc0, 005b0d6c]]
// Convention: __cdecl
// Signature: int sound_sndwav.cpp_writeWavInBuffer_FUN_005b0cc0(int buffer_index)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_writeWavInBuffer_FUN_005b0cc0(int buffer_index)

{
  MMRESULT MVar1;
  
  if ((g_WaveInBuffers[buffer_index] == (LPVOID)0x0) ||
     (g_WaveInHeaders[buffer_index] == (LPWAVEHDR)0x0)) {
    return 0;
  }
  g_WaveInHeaders[buffer_index]->dwBufferLength =
       g_WaveInChannels *
       ((int)((g_WaveInBitsPerSample + (g_WaveInBitsPerSample >> 0x1f) * -8) -
             (uint)((g_WaveInBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_WaveInBufferSizeSamples;
  MVar1 = (*waveInPrepareHeader)(g_WaveInHandle,g_WaveInHeaders[buffer_index],0x20);
  if (MVar1 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar1 = (*waveInAddBuffer)(g_WaveInHandle,g_WaveInHeaders[buffer_index],0x20);
  if (MVar1 == 0) {
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutWrite failed!");
  return 0;
}
