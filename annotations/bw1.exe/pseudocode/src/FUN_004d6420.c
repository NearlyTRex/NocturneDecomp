// Name: FUN_004d6420
// Address: 004d6420
// Address Range: [[004d6420, 004d698d]]
// Convention: unknown
// Signature: void FUN_004d6420(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d6420(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  ulonglong uVar7;
  char *pcVar8;
  uint uVar9;
  char local_494 [260];
  byte local_390 [520];
  byte local_188 [256];
  byte local_88 [4];
  byte local_84 [60];
  byte local_48 [44];
  byte local_1c [8];
  int local_14;
  
  FUN_005c25c0("save\\$$SAVE$$.TMP");
  FUN_005c2238();
  iVar2 = FUN_005c04e0(local_188,&DAT_005e2eac);
  if ((iVar2 == 0) || (iVar2 = FUN_005c04e0(local_188,&DAT_005e2eb0), iVar2 == 0)) {
    pcVar6 = local_494;
    pcVar5 = &DAT_01cd05c0;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  else {
    local_494[0] = '\0';
  }
  pcVar5 = local_494;
  pcVar8 = local_494;
  pcVar6 = local_494;
  if (param_2 == (char *)0x0) {
    uVar9 = 1;
    uVar7 = 0x5e2eb5005e2eb9;
    uVar3 = FUN_00531090();
    iVar2 = FUN_004958d0(0x01C3EB54,uVar3,uVar7,pcVar8,uVar9);
    if (iVar2 == 0) {
      return;
    }
    FUN_005c2238();
    FUN_005bfb40();
  }
  else {
    do {
      cVar1 = *param_2;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  FUN_005c2000("save");
  local_14 = 1;
  DAT_007c3040 = 1;
  iVar2 = FUN_005c157c("save\\$$SAVE$$.TMP","wt");
  if (iVar2 == 0) {
    uVar3 = FUN_00531090("Warning!  Your game didn't save.");
    FUN_004943a0(0x01C3EB54,uVar3);
    DAT_007c3040 = iVar2;
    return;
  }
  FUN_005c03c0(iVar2,"// .NOC file version\n");
  FUN_005c03c0();
  FUN_0051ac40(0x01D2C900,iVar2);
  FUN_005c03c0(iVar2,"// Hero count, local hero index, hero list\n");
  FUN_005c03c0(iVar2,"%d, %d\n",_DAT_01d06aa0,_DAT_01d06ab4);
  iVar4 = 0;
  if (0 < _DAT_01d06aa0) {
    do {
      iVar4 = iVar4 + 1;
      FUN_005c03c0();
    } while (iVar4 < _DAT_01d06aa0);
  }
  FUN_004aa9d0(0x01C51D80,iVar2);
  FUN_0054b710(0x01E81C80,iVar2);
  FUN_004b73f0(0x01C57074,iVar2);
  FUN_005c03c0(iVar2,"Light state\n");
  FUN_00555ce0(0x01E82168,&DAT_01cd06c4);
  iVar4 = 1;
  FUN_005c03c0();
  if (0 < _DAT_01cd06c4) {
    do {
      iVar4 = iVar4 + 1;
      FUN_005c03c0();
    } while (iVar4 <= _DAT_01cd06c4);
  }
  FUN_005c03c0(iVar2,"Game stats\n");
  FUN_005c03c0(iVar2,"%f,%f,%d,%d\n",(double)*(float *)(param_1 + 0x270),
               (double)*(float *)(param_1 + 0x268),*(uint *)(param_1 + 0x26c),
               *(uint *)(param_1 + 0x274));
  FUN_00555d20(0x01E82168,iVar2);
  FUN_004bf1c0(0x01CC8004,iVar2);
  FUN_005c0d10(iVar2);
  DAT_007c3040 = 0;
  if (local_14 != 0) {
    FUN_005a08d0(local_48);
    FUN_005a17d0(local_1c);
    uVar3 = FUN_00531090("Warning!  Your game didn't save.");
    iVar2 = FUN_005a0f60();
    if (iVar2 == 0) {
      FUN_004943a0(0x01C3EB54,uVar3);
      FUN_005a1860(local_1c,0);
      FUN_005a0a50(local_48,0);
      return;
    }
    FUN_005bfb40(local_390,"%s\\%s",&DAT_005e2fa1,local_494);
    iVar2 = FUN_005a19e0();
    if (iVar2 == 0) {
      FUN_004943a0(0x01C3EB54,uVar3);
      FUN_005a1860(local_1c,0);
      FUN_005a0a50(local_48,0);
      return;
    }
    FUN_005a18f0();
    FUN_00443490();
    FUN_004434e0(local_88);
    FUN_00443530();
    FUN_00443630(local_88,local_1c);
    FUN_005a0dc0(local_48);
    FUN_005a19b0(local_1c);
    FUN_00442f90(local_84,0);
    FUN_00442bb0(local_88,1);
    FUN_005a1860(local_1c,0);
    FUN_005a0a50(local_48,0);
  }
  FUN_005c25c0("save\\$$SAVE$$.TMP");
  pcVar5 = &DAT_01cd05c0;
  do {
    cVar1 = *pcVar6;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  return;
}
