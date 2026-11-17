// Name: sound_sndwav.cpp_writeWavInBuffer_FUN_0055dcf0
// Address: 0055dcf0
// Address Range: [[0055dcf0, 0055dd9c]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_writeWavInBuffer_FUN_0055dcf0(int buffer_index)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_writeWavInBuffer_FUN_0055dcf0(int buffer_index)

{
  MMRESULT MVar1;
  
  if ((g_INT_ARRAY_02cf55f8[buffer_index] == 0) ||
     (g_LPWAVEHDR_ARRAY_02cf5558[buffer_index] == (LPWAVEHDR)0x0)) {
    return 0;
  }
  g_LPWAVEHDR_ARRAY_02cf5558[buffer_index]->dwBufferLength =
       g_INT_02cf564c *
       ((int)((g_INT_02cf5648 + (g_INT_02cf5648 >> 0x1f) * -8) -
             (uint)((g_INT_02cf5648 >> 0x1f) << 2 < 0)) >> 3) * g_INT_02cf5658;
  MVar1 = waveInPrepareHeader((HWAVEIN)g_INT_02cf5504,g_LPWAVEHDR_ARRAY_02cf5558[buffer_index],0x20)
  ;
  if (MVar1 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_0055a560("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar1 = waveInAddBuffer((HWAVEIN)g_INT_02cf5504,g_LPWAVEHDR_ARRAY_02cf5558[buffer_index],0x20);
  if (MVar1 == 0) {
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_0055a560("waveOutWrite failed!");
  return 0;
}
