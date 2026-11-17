// Name: sound_sndwav.cpp_writeWavInBuffer_FUN_00558190
// Address: 00558190
// Address Range: [[00558190, 0055823c]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_writeWavInBuffer_FUN_00558190(int buffer_index)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_writeWavInBuffer_FUN_00558190(int buffer_index)

{
  MMRESULT MVar1;
  
  if ((g_INT_ARRAY_0264b1fc[buffer_index] == 0) ||
     (g_LPWAVEHDR_ARRAY_0264b15c[buffer_index] == (LPWAVEHDR)0x0)) {
    return 0;
  }
  g_LPWAVEHDR_ARRAY_0264b15c[buffer_index]->dwBufferLength =
       g_INT_0264b250 *
       ((int)((g_INT_0264b24c + (g_INT_0264b24c >> 0x1f) * -8) -
             (uint)((g_INT_0264b24c >> 0x1f) << 2 < 0)) >> 3) * g_INT_0264b25c;
  MVar1 = waveInPrepareHeader((HWAVEIN)g_INT_0264b108,g_LPWAVEHDR_ARRAY_0264b15c[buffer_index],0x20)
  ;
  if (MVar1 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005549c0("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar1 = waveInAddBuffer((HWAVEIN)g_INT_0264b108,g_LPWAVEHDR_ARRAY_0264b15c[buffer_index],0x20);
  if (MVar1 == 0) {
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_005549c0("waveOutWrite failed!");
  return 0;
}
