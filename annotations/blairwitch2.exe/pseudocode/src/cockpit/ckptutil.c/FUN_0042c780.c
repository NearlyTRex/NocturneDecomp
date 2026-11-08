// Name: FUN_0042c780
// Address: 0042c780
// Address Range: [[0042c780, 0042c8e0]]
// Convention: unknown
// Signature: void FUN_0042c780(char *param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042c780(char *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint *puVar5;
  char *pcVar6;
  byte bVar7;
  char acStack_d4 [80];
  byte auStack_84 [80];
  byte auStack_34 [40];
  
  bVar7 = 0;
  FUN_0057cd50(auStack_34);
  pcVar6 = acStack_d4;
  pcVar4 = acStack_d4;
  do {
    cVar1 = *param_1;
    *pcVar6 = cVar1;
    pcVar3 = acStack_d4;
    if (cVar1 == '\0') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
    pcVar3 = acStack_d4;
  } while (cVar1 != '\0');
  do {
    pcVar6 = pcVar3;
    if (*pcVar3 == '.') goto LAB_0042c7df;
    if (*pcVar3 == '\0') break;
    pcVar6 = pcVar3 + 1;
    if (*pcVar6 == '.') goto LAB_0042c7df;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_0042c7df:
  if (pcVar6 == (char *)0x0) {
    do {
      pcVar6 = pcVar4;
      if (*pcVar4 == '\0') goto LAB_0042c803;
      if (*pcVar4 == '\0') break;
      pcVar6 = pcVar4 + 1;
      if (*pcVar6 == '\0') goto LAB_0042c803;
      pcVar4 = pcVar4 + 2;
    } while (*pcVar6 != '\0');
    pcVar6 = (char *)0x0;
  }
LAB_0042c803:
  pcVar4 = (char *)0x5cd400;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  iVar2 = FUN_0057d390(auStack_34,0x5cd405,acStack_d4);
  if (iVar2 == 0) {
    puVar5 = (uint *)0x1c35b38;
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
    iVar2 = FUN_0057cfe0(auStack_34,param_2,0x300);
    if (iVar2 != 0x300) {
      FUN_005b7790(auStack_84,"Error reading %s.",acStack_d4);
      _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
      _DAT_01d046a4 = 0x147;
      FUN_004e4500(auStack_84);
    }
    FUN_0057d180(auStack_34);
  }
  FUN_0057cec0(auStack_34,0);
  return;
}
