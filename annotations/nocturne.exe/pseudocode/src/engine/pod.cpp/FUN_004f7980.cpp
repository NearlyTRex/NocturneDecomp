// Name: engine_pod.cpp_FUN_004f7980
// Address: 004f7980
// Address Range: [[004f7980, 004f7a75]]
// Convention: unknown
// Signature: undefined4 engine_pod_cpp_FUN_004f7980(undefined4 param_1,int param_2)

#include "nocturne.h"

uint engine_pod_cpp_FUN_004f7980(uint param_1,int param_2)

{
  byte uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = engine_dosio_cpp_getFileSize_FUN_004568c0(&DAT_0058d9a8,param_1);
  uVar3 = _fopen(param_1,"rb");
  uVar4 = iVar2 - param_2;
  uVar6 = 0xffffffff;
  uVar8 = uVar3;
  _fseek(uVar3,param_2,0,uVar3);
  for (; 0xffff < (int)uVar4; uVar4 = uVar4 - 0x10000) {
    puVar5 = &DAT_01e428d0;
    _fread(&DAT_01e428d0,0x10000,1,uVar3);
    uVar7 = 0;
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 + 1;
      uVar6 = engine_pod_cpp_FUN_004f77d0(uVar6,uVar1);
    } while (uVar7 < 0x10000);
  }
  puVar5 = &DAT_01e428d0;
  _fread(&DAT_01e428d0,uVar4,1,uVar3);
  uVar7 = 0;
  if (uVar4 != 0) {
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      uVar6 = engine_pod_cpp_FUN_004f77d0(uVar6,uVar1);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  _fclose(uVar8);
  return uVar6;
}
