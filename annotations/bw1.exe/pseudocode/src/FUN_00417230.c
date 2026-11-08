// Name: FUN_00417230
// Address: 00417230
// Address Range: [[00417230, 00417598]]
// Convention: unknown
// Signature: void FUN_00417230(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00417230(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  char acStack_64c [256];
  char acStack_54c [256];
  char acStack_44c [256];
  char acStack_34c [256];
  char acStack_24c [256];
  char acStack_14c [256];
  char acStack_4c [12];
  char acStack_40 [12];
  char acStack_34 [12];
  char acStack_28 [12];
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  
  bVar7 = 0;
  FUN_005bfb40(acStack_34,&DAT_005d4002,param_4);
  FUN_005bfb40(acStack_40,&DAT_005d4005,param_5);
  FUN_005bfb40(acStack_4c,&DAT_005d4008,param_6);
  fStack_18 = ABS((float)(param_2 - *(int *)(param_1 + 0xc20)));
  iStack_14 = param_3 - *(int *)(param_1 + 0xc24);
  fStack_1c = ABS((float)iStack_14);
  FUN_005bfb40(acStack_64c,&DAT_005d400b,(double)(fStack_18 * _DAT_005d403a));
  FUN_005bfb40(acStack_44c,&DAT_005d400e,(double)(fStack_1c * _DAT_005d403a));
  pcVar4 = &DAT_005d4011;
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
  pcVar5 = acStack_64c;
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
  pcVar4 = &DAT_005d401d;
  pcVar5 = acStack_14c;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar5 = acStack_44c;
  iVar3 = -1;
  pcVar4 = acStack_14c;
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
  FUN_005bfb40(acStack_54c,&DAT_005d4029,
               (double)(1.0 / (fStack_18 * _DAT_005d403e + fStack_1c * _DAT_005d403e + 1.0)));
  FUN_005bfb40(acStack_28,"AR%d_",*(uint *)(param_1 + 0xc10));
  pcVar5 = acStack_28;
  pcVar4 = acStack_34c;
  do {
    cVar1 = *pcVar5;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar5 = acStack_34;
  iVar3 = -1;
  pcVar4 = acStack_34c;
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
  pcVar5 = acStack_40;
  iVar3 = -1;
  pcVar4 = acStack_34c;
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
  pcVar5 = acStack_4c;
  iVar3 = -1;
  pcVar4 = acStack_34c;
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
  pcVar4 = &DAT_005d4032;
  iVar3 = -1;
  pcVar5 = acStack_34c;
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
  pcVar5 = acStack_54c;
  iVar3 = -1;
  pcVar4 = acStack_34c;
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
  uVar2 = FUN_0057d880(0x02C82A60,param_1,acStack_24c);
  *(uint *)(param_1 + 0xc18) = uVar2;
  uVar2 = FUN_0057d880(0x02C82A60,param_1,acStack_14c);
  *(uint *)(param_1 + 0xc1c) = uVar2;
  uVar2 = FUN_0057d880(0x02C82A60,param_1,acStack_34c);
  *(uint *)(param_1 + 0xc14) = uVar2;
  return;
}
