// Name: FUN_00576e10
// Address: 00576e10
// Address Range: [[00576e10, 00576fd9]]
// Convention: unknown
// Signature: undefined4 FUN_00576e10(int param_1)

#include "nocturne.h"

uint FUN_00576e10(int param_1)

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
    FUN_004a6090(param_1 + 0x3c4);
  }
  FUN_0046ce90(DAT_005f2afc,param_1 + 0x20);
  FUN_0046cf30(DAT_005f2afc,param_1 + 0x30,0);
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_1c = *(uint *)(param_1 + 0x668);
  uStack_2c = 0;
  uStack_28 = 0x400ccccd;
  uStack_24 = 0;
  FUN_0046cf30(DAT_005f2afc,&uStack_20,&uStack_2c);
  FUN_0046d4c0(DAT_005f2afc,0xffff);
  if (*(int *)(param_1 + 0x3b4) == 2) {
    fVar6 = (float10)*(float *)(param_1 + 0x7ec);
    uVar3 = FUN_005a3120();
    uStack_14 = (uint)ROUND(fVar6);
    iVar2 = FUN_004625a0(uVar3);
    FUN_005a28c0(iVar2 + 300,"BWATER%d.RAW",uStack_14 & 0xf);
    FUN_0046d4c0(DAT_005f2afc,48000);
  }
  else {
    iVar2 = FUN_004625a0(param_1 + 0x66c);
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
      FUN_0046d4b0(DAT_005f2afc,1);
    }
    else {
      FUN_0046d4c0(DAT_005f2afc,0x4000);
    }
  }
  FUN_00462540(param_1 + 0x66c,0,0x267);
  FUN_0046d4b0(DAT_005f2afc,0);
  thunk_FUN_004e5ef0(DAT_005f2afc);
  thunk_FUN_004e5ef0(DAT_005f2afc);
  return 1;
}
