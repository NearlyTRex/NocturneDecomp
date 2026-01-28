// Name: sound_snddx.cpp_isValidSampleBuffer_FUN_005af150
// Address: 005af150
// Address Range: [[005af150, 005af182]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_isValidSampleBuffer_FUN_005af150(int buffer_id)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_isValidSampleBuffer_FUN_005af150(int buffer_id)

{
  if ((((0 < buffer_id) && (buffer_id < 0x19)) &&
      (g_DirectSoundSampleBuffers[buffer_id] != (IDirectSoundBuffer *)0x0)) &&
     (0 < g_DirectSoundBufferMetadata[buffer_id].field0_0x0)) {
    return 1;
  }
  return 0;
}
