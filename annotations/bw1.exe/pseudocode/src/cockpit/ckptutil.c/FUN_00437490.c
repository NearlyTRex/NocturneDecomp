// Name: FUN_00437490
// Address: 00437490
// Address Range: [[00437490, 004375f4]]
// Convention: unknown
// Signature: void FUN_00437490(char *param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00437490(char *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint *puVar5;
  char *pcVar6;
  byte bVar7;
  char acStack_d8 [80];
  byte auStack_88 [80];
  byte auStack_38 [44];
  
  bVar7 = 0;
  FUN_005a08d0(auStack_38);
  pcVar6 = acStack_d8;
  pcVar4 = acStack_d8;
  do {
    cVar1 = *param_1;
    *pcVar6 = cVar1;
    pcVar3 = acStack_d8;
    if (cVar1 == '\0') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
    pcVar3 = acStack_d8;
  } while (cVar1 != '\0');
  do {
    pcVar6 = pcVar3;
    if (*pcVar3 == '.') goto LAB_004374ef;
    if (*pcVar3 == '\0') break;
    pcVar6 = pcVar3 + 1;
    if (*pcVar6 == '.') goto LAB_004374ef;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_004374ef:
  if (pcVar6 == (char *)0x0) {
    do {
      pcVar6 = pcVar4;
      if (*pcVar4 == '\0') goto LAB_00437513;
      if (*pcVar4 == '\0') break;
      pcVar6 = pcVar4 + 1;
      if (*pcVar6 == '\0') goto LAB_00437513;
      pcVar4 = pcVar4 + 2;
    } while (*pcVar6 != '\0');
    pcVar6 = (char *)0x0;
  }
LAB_00437513:
  pcVar4 = (char *)0x5d60be;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  iVar2 = FUN_005a0fd0(auStack_38,0x5d60c3,acStack_d8,1);
  if (iVar2 == 0) {
    puVar5 = (uint *)0x1c4ecf8;
    for (iVar2 = 0xc0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      param_2 = param_2 + (uint)bVar7 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)param_2 = *(byte *)puVar5;
      puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
      param_2 = (uint *)((int)param_2 + (uint)bVar7 * -2 + 1);
    }
  }
  else {
    iVar2 = FUN_005a0c10(auStack_38,param_2,0x300);
    if (iVar2 != 0x300) {
      FUN_005bfb40(auStack_88,"Error reading %s.",acStack_d8);
      _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
      _DAT_01d1d404 = 0x119;
      FUN_005030e0(auStack_88);
    }
    FUN_005a0dc0(auStack_38);
  }
  FUN_005a0a50(auStack_38,0);
  return;
}
