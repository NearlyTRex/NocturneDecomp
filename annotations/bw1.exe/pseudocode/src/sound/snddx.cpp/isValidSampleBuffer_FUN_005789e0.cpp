// Name: sound_snddx.cpp_isValidSampleBuffer_FUN_005789e0
// Address: 005789e0
// Address Range: [[005789e0, 00578a13]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_isValidSampleBuffer_FUN_005789e0(int buffer_id)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_isValidSampleBuffer_FUN_005789e0(int buffer_id)

{
  if ((((0 < buffer_id) && (buffer_id < 0x41)) && (*(int *)(buffer_id * 0x18 + 0x2c81dc4) != 0)) &&
     (0 < *(int *)(buffer_id * 0x18 + 0x2c81dcc))) {
    return 1;
  }
  return 0;
}
