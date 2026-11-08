// Name: FUN_00412ee0
// Address: 00412ee0
// Address Range: [[00412ee0, 004131ac]]
// Convention: unknown
// Signature: void FUN_00412ee0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void FUN_00412ee0(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  float fVar8;
  char acStack_54c [256];
  char acStack_44c [256];
  char acStack_34c [256];
  char acStack_24c [256];
  char acStack_14c [256];
  char acStack_4c [12];
  char acStack_40 [12];
  char acStack_34 [12];
  char acStack_28 [16];
  int iStack_18;
  
  bVar7 = 0;
  FUN_005a28c0(acStack_28,&DAT_005b67ca,param_4);
  FUN_005a28c0(acStack_4c,&DAT_005b67cd,param_5);
  FUN_005a28c0(acStack_40,&DAT_005b67d0,param_6);
  FUN_005a28c0(acStack_34,"AR%d_",*(uint *)(param_1 + 0xc04));
  pcVar4 = acStack_34;
  pcVar5 = acStack_24c;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = acStack_28;
  iVar3 = -1;
  pcVar5 = acStack_24c;
  do {
    pcVar6 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar4 = acStack_4c;
  iVar3 = -1;
  pcVar5 = acStack_24c;
  do {
    pcVar6 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar4 = acStack_40;
  iVar3 = -1;
  pcVar5 = acStack_24c;
  do {
    pcVar6 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar5 = &DAT_005b67d9;
  iVar3 = -1;
  pcVar4 = acStack_24c;
  do {
    pcVar6 = pcVar4;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar4 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  iStack_18 = param_3 - *(int *)(param_1 + 0xc18);
  fVar8 = ABS((float)iStack_18);
  FUN_005a28c0(acStack_34c,&DAT_005b67de,ABS((double)(param_2 - *(int *)(param_1 + 0xc14))),fVar8);
  FUN_005a28c0(acStack_44c,&DAT_005b67e1,(double)fVar8);
  pcVar5 = &DAT_005b67e4;
  pcVar4 = acStack_14c;
  do {
    cVar1 = *pcVar5;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar4 = acStack_34c;
  iVar3 = -1;
  pcVar5 = acStack_14c;
  do {
    pcVar6 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar5 = &DAT_005b67f0;
  pcVar4 = acStack_54c;
  do {
    cVar1 = *pcVar5;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar4 = acStack_44c;
  iVar3 = -1;
  pcVar5 = acStack_54c;
  do {
    pcVar6 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  uVar2 = FUN_005609b0(0x02CF5680,param_1,acStack_14c);
  *(uint *)(param_1 + 0xc0c) = uVar2;
  uVar2 = FUN_005609b0(0x02CF5680,param_1,acStack_54c);
  *(uint *)(param_1 + 0xc10) = uVar2;
  uVar2 = FUN_00556240();
  *(uint *)(param_1 + 0xc08) = uVar2;
  return;
}
