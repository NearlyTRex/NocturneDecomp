// Name: sound_snddx.cpp_isValidSampleBuffer_FUN_0055bb50
// Address: 0055bb50
// Address Range: [[0055bb50, 0055bb83]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_isValidSampleBuffer_FUN_0055bb50(int buffer_id)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_isValidSampleBuffer_FUN_0055bb50(int buffer_id)

{
  if ((((0 < buffer_id) && (buffer_id < 0x41)) && (*(int *)(buffer_id * 0x18 + 0x2cf49f4) != 0)) &&
     (0 < *(int *)(buffer_id * 0x18 + 0x2cf49fc))) {
    return 1;
  }
  return 0;
}
