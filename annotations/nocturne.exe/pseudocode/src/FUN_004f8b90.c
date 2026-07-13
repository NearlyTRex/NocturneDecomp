// Name: FUN_004f8b90
// Address: 004f8b90
// Address Range: [[004f8b90, 004f8d48]]
// Convention: unknown
// Signature: int FUN_004f8b90(int *param_1,char *param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

int FUN_004f8b90(int *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  byte uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  char acStack_50 [12];
  byte auStack_44 [12];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar11 = 0;
  uVar5 = 0xffffffff;
  pcVar9 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  iStack_24 = ~uVar5 - 1;
  iStack_14 = 0;
  iVar3 = 0;
  if (0 < iStack_24) {
    do {
      iVar6 = iVar3 + 1;
      uVar2 = FUN_00565e20(*param_2);
      iVar4 = iStack_24;
      param_2 = param_2 + 1;
      auStack_44[iVar3] = uVar2;
      iVar3 = iVar6;
    } while (iVar6 < iVar4);
  }
  auStack_44[iStack_24] = 0;
  iStack_38 = 0;
  if (0 < *param_1) {
    iStack_30 = param_5 + -1;
    iStack_34 = 0;
    do {
      iStack_2c = iStack_34;
      iStack_28 = param_5;
      iStack_20 = 0;
      iStack_1c = iStack_14 * param_5 + param_3;
      for (iStack_18 = 0; iVar3 = *(int *)((int)param_1 + iStack_2c + 4),
          iStack_18 < *(int *)(iVar3 + 0x208); iStack_18 = iStack_18 + 1) {
        pcVar9 = *(char **)(*(int *)(iVar3 + 0x20c) + iStack_20);
        uVar5 = 0xffffffff;
        pcVar7 = pcVar9;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + (uint)bVar11 * -2 + 1;
        } while (cVar1 != '\0');
        pcVar7 = pcVar9 + ((~uVar5 - 1) - iStack_24);
        pcVar10 = acStack_50;
        do {
          cVar1 = *pcVar7;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
        iVar3 = FUN_005649c0(acStack_50,auStack_44);
        if (iVar3 == 0) {
          iVar3 = 0;
          piVar8 = param_1;
          if (0 < iStack_38) {
            do {
              iVar4 = FUN_004f8150(piVar8[1],pcVar9);
              if (-1 < iVar4) break;
              iVar3 = iVar3 + 1;
              piVar8 = piVar8 + 1;
            } while (iVar3 < iStack_38);
          }
          iVar4 = iStack_1c;
          if (iVar3 == iStack_38) {
            FUN_00565f70(iStack_1c,pcVar9,iStack_30);
            iStack_1c = iStack_28 + iVar4;
            iStack_14 = iStack_14 + 1;
            if (param_4 <= iStack_14) {
              return iStack_14;
            }
          }
        }
        iStack_20 = iStack_20 + 0x14;
      }
      iStack_34 = iStack_34 + 4;
      iStack_38 = iStack_38 + 1;
    } while (iStack_38 < *param_1);
  }
  return iStack_14;
}
