// Name: engine_pod.cpp_crc32ComputeFromFile_FUN_004f78d0
// Address: 004f78d0
// Address Range: [[004f78d0, 004f7977]]
// Convention: __cdecl
// Signature: uint __cdecl engine_pod_cpp_crc32ComputeFromFile_FUN_004f78d0(_FILE *file_stream,uint total_bytes)

#include "nocturne.h"

uint __cdecl engine_pod_cpp_crc32ComputeFromFile_FUN_004f78d0(_FILE *file_stream,uint total_bytes)

{
  uchar uVar1;
  uint uVar2;
  uint current_crc;
  uchar *puVar3;
  
  current_crc = 0xffffffff;
  for (; 0xffff < (int)total_bytes; total_bytes = total_bytes - 0x10000) {
    puVar3 = &DAT_01e428d0;
    uVar2 = 0;
    _fread(&DAT_01e428d0,0x10000,1,file_stream);
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_004f77d0(current_crc,uVar1);
    } while (uVar2 < 0x10000);
  }
  puVar3 = &DAT_01e428d0;
  uVar2 = 0;
  _fread(&DAT_01e428d0,total_bytes,1,file_stream);
  if (total_bytes != 0) {
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_004f77d0(current_crc,uVar1);
    } while (uVar2 < total_bytes);
  }
  return current_crc;
}
