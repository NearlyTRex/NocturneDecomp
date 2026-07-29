// Name: core_actor.cpp_crc32ProcessBuffer_FUN_0040e0a0
// Address: 0040e0a0
// Address Range: [[0040e0a0, 0040e0d3]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_crc32ProcessBuffer_FUN_0040e0a0(uint *crc_state,byte *buffer,int buffer_length)

#include "nocturne.h"

void __cdecl core_actor_cpp_crc32ProcessBuffer_FUN_0040e0a0(uint *crc_state,byte *buffer,int buffer_length)

{
  byte input_byte;
  
  for (; 0 < buffer_length; buffer_length = buffer_length + -1) {
    input_byte = *buffer;
    buffer = buffer + 1;
    core_actor_cpp_crc32ProcessByte_FUN_0040dfc0(crc_state,input_byte);
  }
  return;
}
