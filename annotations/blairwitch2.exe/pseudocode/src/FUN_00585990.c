// Name: FUN_00585990
// Address: 00585990
// Address Range: [[00585990, 00585b59]]
// Convention: unknown
// Signature: undefined4 FUN_00585990(int param_1)

#include "nocturne.h"

uint FUN_00585990(int param_1)

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
  
  if (*(int *)(param_1 + 0xaa0) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x510) == 1) {
    FUN_0049f850(param_1 + 0x520);
  }
  FUN_0046b2b0(DAT_0060b280,param_1 + 0x20);
  FUN_0046b350(DAT_0060b280,param_1 + 0x30,0);
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_1c = *(uint *)(param_1 + 0x920);
  uStack_2c = 0;
  uStack_28 = 0x400ccccd;
  uStack_24 = 0;
  FUN_0046b350(DAT_0060b280,&uStack_20,&uStack_2c);
  FUN_0046b8e0(DAT_0060b280,0xffff);
  if (*(int *)(param_1 + 0x510) == 2) {
    fVar6 = (float10)*(float *)(param_1 + 0xaa4);
    uVar3 = FUN_005b7ff0();
    uStack_14 = (uint)ROUND(fVar6);
    iVar2 = FUN_0044fd20(uVar3);
    FUN_005b7790(iVar2 + 300,"BWATER%d.RAW",uStack_14 & 0xf);
    FUN_0046b8e0(DAT_0060b280,48000);
  }
  else {
    iVar2 = FUN_0044fd20(param_1 + 0x924);
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
    if (*(int *)(param_1 + 0x510) == 0) {
      FUN_0046b8d0(DAT_0060b280,1);
    }
    else {
      FUN_0046b8e0(DAT_0060b280,0x4000);
    }
  }
  FUN_0044fcc0(param_1 + 0x924,0,0x267);
  FUN_0046b8d0(DAT_0060b280,0);
  thunk_FUN_004e9810(DAT_0060b280);
  thunk_FUN_004e9810(DAT_0060b280);
  return 1;
}
