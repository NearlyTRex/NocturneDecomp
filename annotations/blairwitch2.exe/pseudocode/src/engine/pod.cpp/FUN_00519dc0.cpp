// Name: engine_pod.cpp_FUN_00519dc0
// Address: 00519dc0
// Address Range: [[00519dc0, 00519e46]]
// Convention: unknown
// Signature: uint engine_pod_cpp_FUN_00519dc0(char *param_1,int param_2)

#include "nocturne.h"

uint engine_pod_cpp_FUN_00519dc0(char *param_1,int param_2)

{
  int iVar1;
  _FILE *file;
  int iVar2;
  int iVar3;
  uint current_crc;
  
  iVar1 = engine_dosio_cpp_getFileSize_FUN_00460aa0((char *)0x5e2403,param_1);
  file = _fopen(param_1,(char *)0x5e2404);
  _fseek(file,param_2,0);
  iVar3 = 0;
  current_crc = 0xffffffff;
  if (0 < iVar1 - param_2) {
    do {
      iVar2 = _fgetc(file);
      iVar3 = iVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_00519cb0(current_crc,(uchar)iVar2);
    } while (iVar3 < iVar1 - param_2);
  }
  _fclose(file);
  return current_crc;
}
