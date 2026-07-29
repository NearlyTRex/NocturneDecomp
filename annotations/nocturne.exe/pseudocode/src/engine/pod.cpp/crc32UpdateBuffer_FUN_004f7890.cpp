// Name: engine_pod.cpp_crc32UpdateBuffer_FUN_004f7890
// Address: 004f7890
// Address Range: [[004f7890, 004f78c3]]
// Convention: __cdecl
// Signature: uint __cdecl engine_pod_cpp_crc32UpdateBuffer_FUN_004f7890(uchar *data_buffer,uint byte_count,uint initial_crc)

#include "nocturne.h"

uint __cdecl engine_pod_cpp_crc32UpdateBuffer_FUN_004f7890(uchar *data_buffer,uint byte_count,uint initial_crc)

{
  uchar data_byte;
  uint uVar1;
  
  uVar1 = 0;
  if (byte_count != 0) {
    do {
      data_byte = *data_buffer;
      data_buffer = data_buffer + 1;
      uVar1 = uVar1 + 1;
      initial_crc = engine_pod_cpp_crc32UpdateByte_FUN_004f77d0(initial_crc,data_byte);
    } while (uVar1 < byte_count);
  }
  return initial_crc;
}
