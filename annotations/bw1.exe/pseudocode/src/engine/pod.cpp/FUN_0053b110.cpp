// Name: engine_pod.cpp_FUN_0053b110
// Address: 0053b110
// Address Range: [[0053b110, 0053b196]]
// Convention: unknown
// Signature: uint engine_pod_cpp_FUN_0053b110(char *param_1,int param_2)

#include "nocturne.h"

uint engine_pod_cpp_FUN_0053b110(char *param_1,int param_2)

{
  int iVar1;
  _FILE *file;
  int iVar2;
  int iVar3;
  uint current_crc;
  
  iVar1 = engine_dosio_cpp_getFileSize_FUN_00478fb0((char *)0x5ed65e,param_1);
  file = _fopen(param_1,(char *)0x5ed65f);
  _fseek(file,param_2,0);
  iVar3 = 0;
  current_crc = 0xffffffff;
  if (0 < iVar1 - param_2) {
    do {
      iVar2 = _fgetc(file);
      iVar3 = iVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0053b000(current_crc,(uchar)iVar2);
    } while (iVar3 < iVar1 - param_2);
  }
  _fclose(file);
  return current_crc;
}
