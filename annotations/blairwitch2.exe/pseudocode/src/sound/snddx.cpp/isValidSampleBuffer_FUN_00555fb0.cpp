// Name: sound_snddx.cpp_isValidSampleBuffer_FUN_00555fb0
// Address: 00555fb0
// Address Range: [[00555fb0, 00555fe3]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_isValidSampleBuffer_FUN_00555fb0(int buffer_id)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_isValidSampleBuffer_FUN_00555fb0(int buffer_id)

{
  if ((((0 < buffer_id) && (buffer_id < 0x41)) && (*(int *)(buffer_id * 0x18 + 0x264a5f4) != 0)) &&
     (0 < *(int *)(buffer_id * 0x18 + 0x264a5fc))) {
    return 1;
  }
  return 0;
}
