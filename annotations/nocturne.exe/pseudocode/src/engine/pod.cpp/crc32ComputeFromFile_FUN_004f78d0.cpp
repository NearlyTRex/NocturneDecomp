// Name: engine_pod.cpp_crc32ComputeFromFile_FUN_004f78d0
// Address: 004f78d0
// Address Range: [[004f78d0, 004f7977]]
// Convention: unknown
// Signature: uint engine_pod_cpp_crc32ComputeFromFile_FUN_004f78d0(_FILE *param_1,SIZE_T param_2)

#include "nocturne.h"

uint engine_pod_cpp_crc32ComputeFromFile_FUN_004f78d0(_FILE *param_1,SIZE_T param_2)

{
  uchar uVar1;
  uint uVar2;
  uint current_crc;
  uchar *puVar3;
  
  current_crc = 0xffffffff;
  for (; 0xffff < (int)param_2; param_2 = param_2 - 0x10000) {
    puVar3 = &DAT_01e428d0;
    uVar2 = 0;
    _fread(&DAT_01e428d0,0x10000,1,param_1);
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_004f77d0(current_crc,uVar1);
    } while (uVar2 < 0x10000);
  }
  puVar3 = &DAT_01e428d0;
  uVar2 = 0;
  _fread(&DAT_01e428d0,param_2,1,param_1);
  if (param_2 != 0) {
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_004f77d0(current_crc,uVar1);
    } while (uVar2 < param_2);
  }
  return current_crc;
}
