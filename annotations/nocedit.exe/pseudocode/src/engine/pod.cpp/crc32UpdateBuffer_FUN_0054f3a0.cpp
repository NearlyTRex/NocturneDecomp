// Name: engine_pod.cpp_crc32UpdateBuffer_FUN_0054f3a0
// Address: 0054f3a0
// Address Range: [[0054f3a0, 0054f3d3]]
// Convention: __cdecl
// Signature: uint __cdecl engine_pod_cpp_crc32UpdateBuffer_FUN_0054f3a0(uchar *data_buffer,uint byte_count,uint initial_crc)

#include "nocturne.h"

uint __cdecl engine_pod_cpp_crc32UpdateBuffer_FUN_0054f3a0(uchar *data_buffer,uint byte_count,uint initial_crc)

{
  uchar data_byte;
  uint uVar1;
  
  uVar1 = 0;
  if (byte_count != 0) {
    do {
      data_byte = *data_buffer;
      data_buffer = data_buffer + 1;
      uVar1 = uVar1 + 1;
      initial_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(initial_crc,data_byte);
    } while (uVar1 < byte_count);
  }
  return initial_crc;
}
