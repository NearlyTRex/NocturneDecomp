// Name: engine_pod.cpp_crc32ComputeFromFile_FUN_0054f3e0
// Address: 0054f3e0
// Address Range: [[0054f3e0, 0054f487]]
// Convention: __cdecl
// Signature: uint engine_pod.cpp_crc32ComputeFromFile_FUN_0054f3e0(FILE * file_stream, uint total_bytes)

#include "nocturne.h"

uint __cdecl engine_pod_cpp_crc32ComputeFromFile_FUN_0054f3e0(FILE *file_stream,uint total_bytes)

{
  uchar uVar1;
  uint uVar2;
  uint current_crc;
  char *pcVar3;
  
  current_crc = 0xffffffff;
  if (0xffff < (int)total_bytes) {
    do {
      pcVar3 = g_FileIOBuffer;
      uVar2 = 0;
      crt_stdio_c_fread_FUN_005fd990(g_FileIOBuffer,0x10000,1,file_stream);
      do {
        uVar1 = *pcVar3;
        pcVar3 = (char *)((uchar *)pcVar3 + 1);
        uVar2 = uVar2 + 1;
        current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,uVar1);
      } while (uVar2 < 0x10000);
      total_bytes = total_bytes - 0x10000;
    } while (0xffff < (int)total_bytes);
  }
  pcVar3 = g_FileIOBuffer;
  uVar2 = 0;
  crt_stdio_c_fread_FUN_005fd990(g_FileIOBuffer,total_bytes,1,file_stream);
  if (total_bytes != 0) {
    do {
      uVar1 = *pcVar3;
      pcVar3 = (char *)((uchar *)pcVar3 + 1);
      uVar2 = uVar2 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,uVar1);
    } while (uVar2 < total_bytes);
  }
  return current_crc;
}
