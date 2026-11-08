// Name: FUN_004bda10
// Address: 004bda10
// Address Range: [[004bda10, 004bdfa4]]
// Convention: unknown
// Signature: void FUN_004bda10(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bda10(int param_1,char *param_2)

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
  char local_494 [520];
  byte local_28c [260];
  byte local_188 [256];
  byte local_88 [4];
  byte local_84 [60];
  byte local_48 [44];
  byte local_1c [8];
  int local_14;
  
  FUN_005a54b0("save\\$$SAVE$$.TMP");
  FUN_005a5128();
  iVar2 = FUN_005a3260(local_188,&DAT_005c3558);
  if ((iVar2 == 0) || (iVar2 = FUN_005a3260(local_188,&DAT_005c355c), iVar2 == 0)) {
    pcVar6 = local_494;
    pcVar5 = &DAT_01d225c8;
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
    uVar7 = 0x5c3561005c3565;
    uVar3 = FUN_00508960();
    iVar2 = FUN_0047e470(0x01C5B0E4,uVar3,uVar7,pcVar8,uVar9);
    if (iVar2 == 0) {
      return;
    }
    FUN_005a5128();
    FUN_005a28c0();
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
  FUN_005a4e10(&DAT_005c357b);
  local_14 = 1;
  DAT_007df9c0 = 1;
  iVar2 = FUN_005a43ec("save\\$$SAVE$$.TMP",&DAT_005c3580);
  if (iVar2 == 0) {
    uVar3 = FUN_00508960("Warning!  Your game didn't save.");
    FUN_0047cf40(0x01C5B0E4,uVar3);
    DAT_007df9c0 = iVar2;
    return;
  }
  FUN_005a3140(iVar2,"// .SAV file version\n");
  FUN_005a3140();
  FUN_004f6410(0x01D81080,iVar2);
  FUN_005a3140(iVar2,"// Hero count, local hero index, hero list\n");
  FUN_005a3140(iVar2,"%d, %d\n",_DAT_01d5ba00,_DAT_01d5ba14);
  iVar4 = 0;
  if (0 < _DAT_01d5ba00) {
    do {
      iVar4 = iVar4 + 1;
      FUN_005a3140();
    } while (iVar4 < _DAT_01d5ba00);
  }
  FUN_00495850(0x01C6E360,iVar2);
  FUN_00530e00(0x01ED73E0,iVar2);
  FUN_004a40b0(0x01C73654,iVar2);
  FUN_005a3140(iVar2,"Light state\n");
  FUN_0053b6a0(0x01ED78C8,&DAT_01d226cc);
  iVar4 = 1;
  FUN_005a3140();
  if (0 < _DAT_01d226cc) {
    do {
      iVar4 = iVar4 + 1;
      FUN_005a3140();
    } while (iVar4 <= _DAT_01d226cc);
  }
  FUN_005a3140(iVar2,"Game stats\n");
  FUN_005a3140(iVar2,"%f,%f,%f,%d,%d\n",(double)*(float *)(param_1 + 0x278),
               (double)*(float *)(param_1 + 0x270),(double)*(float *)(param_1 + 0x294),
               *(uint *)(param_1 + 0x274),*(uint *)(param_1 + 0x27c));
  FUN_005a3140();
  FUN_0053b6e0(0x01ED78C8,iVar2);
  FUN_004acf00(0x01D1A05C,iVar2);
  FUN_005a3a90(iVar2);
  DAT_007df9c0 = 0;
  if (local_14 != 0) {
    FUN_005738c0(local_48);
    FUN_005747c0(local_1c);
    uVar3 = FUN_00508960("Warning!  Your game didn't save.");
    iVar2 = FUN_00573f50();
    if (iVar2 == 0) {
      FUN_0047cf40(0x01C5B0E4,uVar3);
      FUN_00574850(local_1c,0);
      FUN_00573a40(local_48,0);
      return;
    }
    FUN_005a28c0(local_28c,"%s\\%s",&DAT_005c3654,local_494);
    iVar2 = FUN_005749d0();
    if (iVar2 == 0) {
      FUN_0047cf40(0x01C5B0E4,uVar3);
      FUN_00574850(local_1c,0);
      FUN_00573a40(local_48,0);
      return;
    }
    FUN_005748e0();
    FUN_004410f0();
    FUN_00441140(local_88);
    FUN_00441190();
    FUN_00441290(local_88,local_1c);
    FUN_00573db0(local_48);
    FUN_005749a0(local_1c);
    FUN_00440bf0(local_84,0);
    FUN_00440810(local_88,1);
    FUN_00574850(local_1c,0);
    FUN_00573a40(local_48,0);
  }
  FUN_005a54b0("save\\$$SAVE$$.TMP");
  pcVar5 = &DAT_01d225c8;
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
