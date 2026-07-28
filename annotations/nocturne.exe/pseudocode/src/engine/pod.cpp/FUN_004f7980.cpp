// Name: engine_pod.cpp_FUN_004f7980
// Address: 004f7980
// Address Range: [[004f7980, 004f7a75]]
// Convention: unknown
// Signature: uint engine_pod_cpp_FUN_004f7980(char *param_1,int param_2)

#include "nocturne.h"

uint engine_pod_cpp_FUN_004f7980(char *param_1,int param_2)

{
  uchar uVar1;
  int iVar2;
  _FILE *file;
  SIZE_T size;
  uchar *puVar3;
  uint current_crc;
  uint uVar4;
  
  iVar2 = engine_dosio_cpp_getFileSize_FUN_004568c0(&DAT_0058d9a8,param_1);
  file = _fopen(param_1,"rb");
  size = iVar2 - param_2;
  current_crc = 0xffffffff;
  _fseek(file,param_2,0);
  for (; 0xffff < (int)size; size = size - 0x10000) {
    puVar3 = &DAT_01e428d0;
    _fread(&DAT_01e428d0,0x10000,1,file);
    uVar4 = 0;
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_004f77d0(current_crc,uVar1);
    } while (uVar4 < 0x10000);
  }
  puVar3 = &DAT_01e428d0;
  _fread(&DAT_01e428d0,size,1,file);
  uVar4 = 0;
  if (size != 0) {
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_004f77d0(current_crc,uVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < size);
  }
  _fclose(file);
  return current_crc;
}
