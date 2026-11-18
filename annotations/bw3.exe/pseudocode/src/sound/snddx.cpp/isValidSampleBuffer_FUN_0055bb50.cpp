// Name: sound_snddx.cpp_isValidSampleBuffer_FUN_0055bb50
// Address: 0055bb50
// Address Range: [[0055bb50, 0055bb83]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_isValidSampleBuffer_FUN_0055bb50(int buffer_id)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_isValidSampleBuffer_FUN_0055bb50(int buffer_id)

{
  if ((((0 < buffer_id) && (buffer_id < 0x41)) &&
      (g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6] != (IDirectSoundBuffer *)0x0)) &&
     (0 < (int)g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6 + 2])) {
    return 1;
  }
  return 0;
}
