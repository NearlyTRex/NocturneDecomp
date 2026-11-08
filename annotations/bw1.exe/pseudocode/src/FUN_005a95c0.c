// Name: FUN_005a95c0
// Address: 005a95c0
// Address Range: [[005a95c0, 005a9789]]
// Convention: unknown
// Signature: undefined4 FUN_005a95c0(int param_1)

#include "nocturne.h"

uint FUN_005a95c0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  float10 fVar6;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  if (*(int *)(param_1 + 0x7e8) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x3b4) == 1) {
    FUN_004b8100(param_1 + 0x3c4);
  }
  FUN_004837b0(DAT_00612560,param_1 + 0x20);
  FUN_00483850(DAT_00612560,param_1 + 0x30,0);
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_1c = *(uint *)(param_1 + 0x668);
  uStack_2c = 0;
  uStack_28 = 0x400ccccd;
  uStack_24 = 0;
  FUN_00483850(DAT_00612560,&uStack_20,&uStack_2c);
  FUN_00483de0(DAT_00612560,0xffff);
  if (*(int *)(param_1 + 0x3b4) == 2) {
    fVar6 = (float10)*(float *)(param_1 + 0x7ec);
    uVar3 = FUN_005c03a0();
    uStack_14 = (uint)ROUND(fVar6);
    iVar2 = FUN_00468900(uVar3);
    FUN_005bfb40(iVar2 + 300,"BWATER%d.RAW",uStack_14 & 0xf);
    FUN_00483de0(DAT_00612560,48000);
  }
  else {
    iVar2 = FUN_00468900(param_1 + 0x66c);
    pcVar4 = "@MENUCLD2.RAW" + 1;
    pcVar5 = (char *)(iVar2 + 300);
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    if (*(int *)(param_1 + 0x3b4) == 0) {
      FUN_00483dd0(DAT_00612560,1);
    }
    else {
      FUN_00483de0(DAT_00612560,0x4000);
    }
  }
  FUN_004688a0(param_1 + 0x66c,0,0x267);
  FUN_00483dd0(DAT_00612560,0);
  thunk_FUN_005084b0(DAT_00612560);
  thunk_FUN_005084b0(DAT_00612560);
  return 1;
}
