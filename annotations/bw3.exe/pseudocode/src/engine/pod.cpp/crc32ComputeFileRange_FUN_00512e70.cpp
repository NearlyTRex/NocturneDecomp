// Name: engine_pod.cpp_crc32ComputeFileRange_FUN_00512e70
// Address: 00512e70
// Address Range: [[00512e70, 00512ef6]]
// Convention: __cdecl
// Signature: uint __cdecl engine_pod_cpp_crc32ComputeFileRange_FUN_00512e70(char *filename,int start_offset)

#include "nocturne.h"

uint __cdecl engine_pod_cpp_crc32ComputeFileRange_FUN_00512e70(char *filename,int start_offset)

{
  int iVar1;
  _FILE *file;
  int iVar2;
  int iVar3;
  uint current_crc;
  
  iVar1 = engine_dosio_cpp_getFileSize_FUN_004657f0((char *)0x5cc4c6,filename);
  file = _fopen(filename,(char *)0x5cc4c7);
  _fseek(file,start_offset,0);
  iVar3 = 0;
  current_crc = 0xffffffff;
  if (0 < iVar1 - start_offset) {
    do {
      iVar2 = _fgetc(file);
      iVar3 = iVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_00512d60(current_crc,(uchar)iVar2);
    } while (iVar3 < iVar1 - start_offset);
  }
  _fclose(file);
  return current_crc;
}
