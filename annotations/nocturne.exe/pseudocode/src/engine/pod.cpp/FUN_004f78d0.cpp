// Name: engine_pod.cpp_FUN_004f78d0
// Address: 004f78d0
// Address Range: [[004f78d0, 004f7977]]
// Convention: unknown
// Signature: undefined4 engine_pod_cpp_FUN_004f78d0(undefined4 param_1,uint param_2)

#include "nocturne.h"

uint engine_pod_cpp_FUN_004f78d0(uint param_1,uint param_2)

{
  byte uVar1;
  uint uVar2;
  uint uVar3;
  byte *puVar4;
  
  uVar3 = 0xffffffff;
  for (; 0xffff < (int)param_2; param_2 = param_2 - 0x10000) {
    puVar4 = &DAT_01e428d0;
    uVar2 = 0;
    _fread(&DAT_01e428d0,0x10000,1,param_1);
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      uVar2 = uVar2 + 1;
      uVar3 = engine_pod_cpp_FUN_004f77d0(uVar3,uVar1);
    } while (uVar2 < 0x10000);
  }
  puVar4 = &DAT_01e428d0;
  uVar2 = 0;
  _fread(&DAT_01e428d0,param_2,1,param_1);
  if (param_2 != 0) {
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      uVar2 = uVar2 + 1;
      uVar3 = engine_pod_cpp_FUN_004f77d0(uVar3,uVar1);
    } while (uVar2 < param_2);
  }
  return uVar3;
}
