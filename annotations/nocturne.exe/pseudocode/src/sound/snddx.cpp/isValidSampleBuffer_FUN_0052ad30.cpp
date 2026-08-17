// Name: sound_snddx.cpp_isValidSampleBuffer_FUN_0052ad30
// Address: 0052ad30
// Address Range: [[0052ad30, 0052ad4f]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_isValidSampleBuffer_FUN_0052ad30(int buffer_id)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_isValidSampleBuffer_FUN_0052ad30(int buffer_id)

{
  if (((0 < buffer_id) && (buffer_id < 0x19)) && (*(int *)(&DAT_02dc9244 + buffer_id * 4) != 0)) {
    return 1;
  }
  return 0;
}
