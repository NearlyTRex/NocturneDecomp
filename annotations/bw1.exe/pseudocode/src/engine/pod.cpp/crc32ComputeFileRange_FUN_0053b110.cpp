// Name: engine_pod.cpp_crc32ComputeFileRange_FUN_0053b110
// Address: 0053b110
// Address Range: [[0053b110, 0053b196]]
// Convention: __cdecl
// Signature: uint __cdecl engine_pod_cpp_crc32ComputeFileRange_FUN_0053b110(char *filename,int start_offset)

#include "nocturne.h"

uint __cdecl engine_pod_cpp_crc32ComputeFileRange_FUN_0053b110(char *filename,int start_offset)

{
  int iVar1;
  _FILE *file;
  int iVar2;
  int iVar3;
  uint current_crc;
  
  iVar1 = engine_dosio_cpp_getFileSize_FUN_00478fb0(&g_CHAR_005ed65e,filename);
  file = _fopen(filename,"rb");
  _fseek(file,start_offset,0);
  iVar3 = 0;
  current_crc = 0xffffffff;
  if (0 < iVar1 - start_offset) {
    do {
      iVar2 = _fgetc(file);
      iVar3 = iVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0053b000(current_crc,(uchar)iVar2);
    } while (iVar3 < iVar1 - start_offset);
  }
  _fclose(file);
  return current_crc;
}
