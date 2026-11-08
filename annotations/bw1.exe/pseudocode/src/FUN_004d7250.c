// Name: FUN_004d7250
// Address: 004d7250
// Address Range: [[004d7250, 004d7726]]
// Convention: unknown
// Signature: void FUN_004d7250(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d7250(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  byte local_6f8 [960];
  byte local_338 [516];
  char local_134 [260];
  uint local_30 [5];
  uint local_1c;
  uint local_18;
  int local_14;
  
  iVar2 = FUN_00479180(&DAT_005e3115,"blairhero.pod",&DAT_005e3104);
  if (iVar2 != 0) {
    FUN_005c0d10(iVar2);
  }
  *(uint *)(param_1 + 0x26c) = 0;
  *(uint *)(param_1 + 0x274) = 0;
  *(uint *)(param_1 + 0x268) = 0;
  *(uint *)(param_1 + 0x270) = 0;
  *(uint *)(param_1 + 0x250) = 0;
  local_18 = _DAT_01c3eb50;
  _DAT_01c3eb50 = _DAT_0152d244;
  iVar2 = FUN_005c157c("pod.ini",&DAT_005e3116);
  if (iVar2 != 0) {
    FUN_005c0d10(iVar2);
  }
  FUN_004f4b00(local_338,"system\\nocturne.ini",&DAT_005e3121);
  local_1c = 0;
  FUN_004f4d10(local_338,"Act1Code",&local_1c);
  local_30[0] = FUN_00531090("The Rustin Parr Investigation");
  iVar3 = -1;
  local_14 = -1;
  if (param_2 == 1 || iVar2 != 0) {
    iVar2 = FUN_00494fd0(0x01C3EB54,"Select mission to play","world",
                         "*.msn",local_134,0);
    if (iVar2 == 0) goto LAB_004d757b;
    DAT_01cd09e8 = 0;
    _DAT_01cd0ae8 = 0;
    _DAT_01cd0aec = 0;
  }
  else {
    while (iVar3 < 0) {
      FUN_0049a620(local_6f8);
      uVar5 = FUN_00531090("The Rustin Parr Investigation");
      FUN_004994d0(local_6f8,uVar5);
      uVar5 = FUN_00531090("Choose a story to play",0xffffffff,0);
      iVar2 = FUN_0049a8b0(local_6f8,uVar5);
      local_14 = iVar2;
      if (iVar2 < 0) {
        _DAT_01c3eb50 = local_18;
        FUN_0049a710(local_6f8,0);
        goto LAB_004d7589;
      }
      FUN_0049c370(local_6f8);
      if (iVar2 == 0) {
        uVar5 = FUN_00531090("Normal Puzzles, Normal Combat");
        FUN_004994d0(local_6f8,uVar5);
        uVar5 = FUN_00531090("Normal Puzzles, Hard Combat");
        FUN_004994d0(local_6f8,uVar5);
        uVar5 = FUN_00531090("Hard Puzzles, Normal Combat");
        FUN_004994d0(local_6f8,uVar5);
        uVar5 = FUN_00531090("Hard Puzzles, Hard Combat");
        FUN_004994d0(local_6f8,uVar5);
        uVar5 = FUN_00531090("'The Rustin Parr Investigation'",0xffffffff,0);
        iVar3 = FUN_0049a8b0(local_6f8,uVar5);
      }
      FUN_0049a710(local_6f8,0);
    }
    pcVar6 = local_134;
    pcVar4 = PTR_DAT_0061da58;
    do {
      cVar1 = *pcVar4;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0xe8) = 0;
      *(uint *)(param_1 + 0xe4) = 0;
    }
    if (iVar3 == 1) {
      *(uint *)(param_1 + 0xe4) = 0;
      *(uint *)(param_1 + 0xe8) = 1;
    }
    if (iVar3 == 2) {
      *(uint *)(param_1 + 0xe8) = 0;
      *(uint *)(param_1 + 0xe4) = 1;
    }
    if (iVar3 == 3) {
      *(uint *)(param_1 + 0xe8) = 1;
      *(uint *)(param_1 + 0xe4) = 1;
    }
    iVar2 = FUN_00479180("world",local_134,"rt");
    if (iVar2 == 0) goto LAB_004d757b;
    FUN_005c0d10(iVar2);
    pcVar4 = &DAT_01cd09e8;
    _DAT_01cd0ae8 = *(uint *)(&DAT_0061db5c + local_14 * 4);
    pcVar6 = (char *)local_30[local_14];
    do {
      cVar1 = *pcVar6;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    _DAT_01cd0aec = 0x41000000;
  }
  FUN_004bdaa0(0x01CC8004);
  FUN_004a9a00(0x01C51D80);
  uVar5 = 1;
  iVar2 = FUN_005c04e0(&DAT_01cd05c0,local_134);
  if (iVar2 != 0) {
    pcVar6 = local_134;
    pcVar4 = &DAT_01cd05c0;
    do {
      cVar1 = *pcVar6;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    uVar5 = 0;
  }
  FUN_004fe840(0x01D1BD1C,10,0,local_14);
  FUN_0051a3f0(0x01D2C900,local_134,uVar5);
  iVar2 = FUN_0051c0a0(0x01D2C900,0);
  if (iVar2 != 0) {
    FUN_0051bdc0(0x01D2C900);
    FUN_0051bad0(0x01D2C900);
    if (*(int *)(param_1 + 0x9f8) != 0) {
      *(uint *)(param_1 + 0x9f8) = 0;
      FUN_004d6990(param_1,param_1 + 0x9fc,1);
    }
  }
LAB_004d757b:
  _DAT_01c3eb50 = local_18;
LAB_004d7589:
  FUN_004f4b30(local_338,0);
  return;
}
