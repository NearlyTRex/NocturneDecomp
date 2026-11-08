// Name: FUN_00552350
// Address: 00552350
// Address Range: [[00552350, 005526c5]]
// Convention: unknown
// Signature: char * FUN_00552350(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00552350(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  float10 fVar7;
  byte local_118 [256];
  char *local_18;
  char *local_14;
  
  iVar5 = 0;
  do {
    _DAT_02cebc20 = _DAT_02cebc20 + 1;
    if (0x3f < _DAT_02cebc20) {
      _DAT_02cebc20 = 0;
    }
    iVar3 = _DAT_02cebc20 * 0x1b0;
    if ((((*(int *)(iVar3 + 0x2cebd74) == 0) && (*(int *)(&DAT_02cebd78 + iVar3) == 0)) &&
        (*(int *)(iVar3 + 0x2cebd80) == 0)) && (*(int *)(iVar3 + 0x2cebdd0) == 0)) {
      local_14 = (char *)(iVar3 + 0x2cebc24);
      goto LAB_00552392;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x40);
  local_14 = (char *)0x0;
LAB_00552392:
  pcVar2 = local_14;
  if (local_14 == (char *)0x0) {
    return (char *)0x0;
  }
  FUN_00465e50(param_2,0,0,0,local_118);
  iVar5 = FUN_005a3260(local_118,&DAT_005d29d6);
  if ((iVar5 == 0) || (iVar5 = FUN_005a3260(local_118,&DAT_005d29da), iVar5 == 0)) {
    iVar5 = FUN_004657f0("sound",param_2);
    if (iVar5 < 1) goto LAB_005526aa;
    iVar3 = FUN_005a3cb2(0x8630);
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = FUN_00502750(iVar3);
    }
    *(int *)(pcVar2 + 0x174) = iVar5;
    if (iVar5 == 0) {
      _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
      _DAT_01d71de4 = 0x463;
      FUN_004e4330("Out of memory.");
    }
    FUN_005027b0(*(uint *)(pcVar2 + 0x174),param_2);
    pcVar6 = pcVar2;
    do {
      cVar1 = *param_2;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    pcVar2[0x100] = '\x01';
    pcVar2[0x101] = '\0';
    pcVar2[0x102] = '\0';
    pcVar2[0x103] = '\0';
    iVar5 = *(int *)(pcVar2 + 0x174);
    pcVar2[0x104] = '\x10';
    pcVar2[0x105] = '\0';
    pcVar2[0x106] = '\0';
    pcVar2[0x107] = '\0';
    *(uint *)(pcVar2 + 0x108) = *(uint *)(iVar5 + 0x104);
    uVar4 = *(uint *)(*(int *)(pcVar2 + 0x174) + 0x100);
    pcVar2[0x110] = -1;
    pcVar2[0x111] = -1;
    pcVar2[0x112] = -1;
    pcVar2[0x113] = -1;
    *(uint *)(pcVar2 + 0x10c) = uVar4;
    FUN_00551620(pcVar2);
    pcVar2[0x150] = '\0';
    pcVar2[0x151] = '\0';
    pcVar2[0x152] = '\0';
    pcVar2[0x153] = '\0';
    iVar5 = *(int *)(pcVar2 + 0x10c);
    pcVar2[0x154] = '\0';
    pcVar2[0x155] = '\0';
    pcVar2[0x156] = '\0';
    pcVar2[0x157] = '\0';
    fVar7 = (float10)iVar5 * (float10)0x40000000;
    pcVar2[0x158] = '\0';
    pcVar2[0x159] = '\0';
    pcVar2[0x15a] = '\0';
    pcVar2[0x15b] = '\0';
    pcVar2[0x15c] = '\0';
    pcVar2[0x15d] = '\0';
    pcVar2[0x15e] = '\0';
    pcVar2[0x15f] = '\0';
    FUN_005a3120();
    *(int *)(pcVar2 + 0x164) = (int)ROUND(fVar7);
    uVar4 = *(uint *)(pcVar2 + 0x164);
    pcVar2[0x16c] = '\0';
    pcVar2[0x16d] = '\0';
    pcVar2[0x16e] = '\0';
    pcVar2[0x16f] = '\0';
    pcVar2[0x170] = '\0';
    pcVar2[0x171] = '\0';
    pcVar2[0x172] = '\0';
    pcVar2[0x173] = '\0';
    *(uint *)(pcVar2 + 0x160) = param_1;
    uVar4 = FUN_00555900(pcVar2,uVar4);
    *(uint *)(pcVar2 + 0x168) = uVar4;
    iVar5 = FUN_005533b0(pcVar2);
  }
  else {
    local_18 = pcVar2 + 0x17c;
    iVar5 = FUN_00573fc0(local_18,"sound",param_2,1);
    pcVar6 = pcVar2;
    if (iVar5 == 0) goto LAB_005526aa;
    do {
      cVar1 = *param_2;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    uVar4 = FUN_00573d40(local_18);
    *(uint *)(pcVar2 + 0x178) = uVar4;
    iVar5 = FUN_00551000(local_18,pcVar2 + 0x178,pcVar2);
    if (iVar5 == 0) goto LAB_005526aa;
    FUN_00551620(pcVar2);
    pcVar2[0x150] = '\0';
    pcVar2[0x151] = '\0';
    pcVar2[0x152] = '\0';
    pcVar2[0x153] = '\0';
    iVar5 = *(int *)(pcVar2 + 0x10c);
    pcVar2[0x154] = '\0';
    pcVar2[0x155] = '\0';
    pcVar2[0x156] = '\0';
    pcVar2[0x157] = '\0';
    fVar7 = (float10)iVar5 * (float10)0x40000000;
    pcVar2[0x158] = '\0';
    pcVar2[0x159] = '\0';
    pcVar2[0x15a] = '\0';
    pcVar2[0x15b] = '\0';
    pcVar2[0x15c] = '\0';
    pcVar2[0x15d] = '\0';
    pcVar2[0x15e] = '\0';
    pcVar2[0x15f] = '\0';
    FUN_005a3120();
    *(int *)(pcVar2 + 0x164) = (int)ROUND(fVar7);
    uVar4 = *(uint *)(pcVar2 + 0x164);
    pcVar2[0x16c] = '\0';
    pcVar2[0x16d] = '\0';
    pcVar2[0x16e] = '\0';
    pcVar2[0x16f] = '\0';
    pcVar2[0x170] = '\0';
    pcVar2[0x171] = '\0';
    pcVar2[0x172] = '\0';
    pcVar2[0x173] = '\0';
    *(uint *)(pcVar2 + 0x160) = param_1;
    uVar4 = FUN_00555900(pcVar2,uVar4);
    *(uint *)(pcVar2 + 0x168) = uVar4;
    iVar5 = FUN_005533b0(pcVar2);
  }
  if (iVar5 != 0) {
    FUN_005537c0(pcVar2,0,0);
    return pcVar2;
  }
LAB_005526aa:
  FUN_00553520(pcVar2);
  return (char *)0x0;
}
