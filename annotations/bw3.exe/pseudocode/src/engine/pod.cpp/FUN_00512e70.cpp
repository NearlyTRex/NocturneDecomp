// Name: engine_pod.cpp_FUN_00512e70
// Address: 00512e70
// Address Range: [[00512e70, 00512ef6]]
// Convention: unknown
// Signature: uint engine_pod_cpp_FUN_00512e70(char *param_1,int param_2)

#include "nocturne.h"

uint engine_pod_cpp_FUN_00512e70(char *param_1,int param_2)

{
  uchar data_byte;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint current_crc;
  uint uVar4;
  
  iVar1 = engine_dosio_cpp_getFileSize_FUN_004657f0((char *)0x5cc4c6,param_1);
  iVar1 = iVar1 - param_2;
  uVar2 = _fopen(param_1,0x5cc4c7);
  uVar4 = uVar2;
  _fseek(uVar2,param_2,0,iVar1,uVar2);
  iVar3 = 0;
  current_crc = 0xffffffff;
  if (0 < iVar1) {
    do {
      data_byte = _fgetc(uVar2);
      iVar3 = iVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_00512d60(current_crc,data_byte);
    } while (iVar3 < iVar1);
  }
  _fclose(uVar4);
  return current_crc;
}
