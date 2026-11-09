// Name: engine_pod.cpp_FUN_00519dc0
// Address: 00519dc0
// Address Range: [[00519dc0, 00519e46]]
// Convention: unknown
// Signature: uint engine_pod_cpp_FUN_00519dc0(char *param_1,int param_2)

#include "nocturne.h"

uint engine_pod_cpp_FUN_00519dc0(char *param_1,int param_2)

{
  uchar data_byte;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint current_crc;
  uint uVar4;
  
  iVar1 = engine_dosio_cpp_getFileSize_FUN_00460aa0((char *)0x5e2403,param_1);
  iVar1 = iVar1 - param_2;
  uVar2 = _fopen(param_1,0x5e2404);
  uVar4 = uVar2;
  _fseek(uVar2,param_2,0,iVar1,uVar2);
  iVar3 = 0;
  current_crc = 0xffffffff;
  if (0 < iVar1) {
    do {
      data_byte = _fgetc(uVar2);
      iVar3 = iVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_00519cb0(current_crc,data_byte);
    } while (iVar3 < iVar1);
  }
  _fclose(uVar4);
  return current_crc;
}
