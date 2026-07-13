// Name: FUN_00550370
// Address: 00550370
// Address Range: [[00550370, 005504bf] [005504c1, 00550539]]
// Convention: unknown
// Signature: undefined4 FUN_00550370(int param_1)

#include "nocturne.h"

uint FUN_00550370(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  float10 fVar6;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if (*(int *)(param_1 + 0x7d8) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x3ac) == 1) {
    FUN_0048d5d0(param_1 + 0x3bc);
  }
  FUN_00460a00(DAT_005ae704,param_1 + 0x20);
  FUN_00460aa0(DAT_005ae704,param_1 + 0x30,0);
  local_20 = 0;
  local_18 = 0;
  local_1c = *(uint *)(param_1 + 0x658);
  local_2c = 0;
  local_28 = 0x400ccccd;
  local_24 = 0;
  FUN_00460aa0(DAT_005ae704,&local_20,&local_2c);
  FUN_00461010(DAT_005ae704,0xffff);
  if (*(int *)(param_1 + 0x3ac) == 2) {
    fVar6 = (float10)*(float *)(param_1 + 0x7dc);
    uVar3 = FUN_00563a30();
    local_14 = (uint)ROUND(fVar6);
    iVar2 = FUN_00454530(uVar3);
    FUN_00563c90(iVar2 + 300,"BWATER%d.RAW",local_14 & 0xf);
    FUN_00461010(DAT_005ae704,48000);
  }
  else {
    iVar2 = FUN_00454530(param_1 + 0x65c);
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
    if (*(int *)(param_1 + 0x3ac) == 0) {
      FUN_00461000(DAT_005ae704,1);
    }
    else {
      FUN_00461010(DAT_005ae704,0x4000);
    }
  }
  FUN_004544d0(param_1 + 0x65c,0,0x267);
  FUN_00461000(DAT_005ae704,0);
  thunk_FUN_004cdbc0(DAT_005ae704);
  thunk_FUN_004cdbc0(DAT_005ae704);
  return 1;
}
