// Name: engine_pod.cpp_crc32ComputeFromFile_FUN_0054f3e0
// Address: 0054f3e0
// Address Range: [[0054f3e0, 0054f487]]
// Convention: __cdecl
// Signature: uint __cdecl engine_pod_cpp_crc32ComputeFromFile_FUN_0054f3e0(_FILE *file_stream,uint total_bytes)

#include "nocturne.h"

uint __cdecl engine_pod_cpp_crc32ComputeFromFile_FUN_0054f3e0(_FILE *file_stream,uint total_bytes)

{
  uchar data_byte;
  uint uVar2;
  char *pcVar1;
  uint current_crc;
  char *pcVar3;
  uint uVar3;
  uchar uVar1;
  
  current_crc = 0xffffffff;
  for (; 0xffff < (int)total_bytes; total_bytes = total_bytes - 0x10000) {
    pcVar3 = g_FileIOBuffer;
    uVar2 = 0;
    _fread(g_FileIOBuffer,0x10000,1,file_stream);
    do {
      uVar1 = *pcVar3;
      pcVar3 = (char *)((uchar *)pcVar3 + 1);
      uVar2 = uVar2 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,uVar1);
    } while (uVar2 < 0x10000);
  }
  pcVar1 = g_FileIOBuffer;
  uVar3 = 0;
  _fread(g_FileIOBuffer,total_bytes,1,file_stream);
  if (total_bytes != 0) {
    do {
      data_byte = *pcVar1;
      pcVar1 = (char *)((uchar *)pcVar1 + 1);
      uVar3 = uVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,data_byte);
    } while (uVar3 < total_bytes);
  }
  return current_crc;
}
