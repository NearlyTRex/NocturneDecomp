// Name: FUN_0056aa38
// Address: 0056aa38
// Address Range: [[0056aa38, 0056ad38]]
// Convention: unknown
// Signature: void FUN_0056aa38(int *param_1,undefined4 *param_2,uint param_3,int param_4,undefined4 *param_5)

#include "nocturne.h"

void FUN_0056aa38(int *param_1,uint *param_2,uint param_3,int param_4,uint *param_5)

{
  uint uVar1;
  byte *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  char cVar11;
  
  bVar10 = 0;
  iVar4 = param_1[1];
  if (iVar4 < 1) {
    uVar1 = *param_1 + iVar4;
  }
  else {
    uVar1 = (*param_1 - iVar4) + 1;
  }
  if ((*(byte *)(param_1 + 2) & 4) != 0) {
    if ((int)param_3 < (int)uVar1) {
      uVar1 = param_3;
    }
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
  }
  uVar7 = param_1[1];
  if ((int)uVar7 < 1) {
    uVar7 = 1;
    *(byte *)param_5 = 0x30;
  }
  else {
    if ((int)param_3 < (int)uVar7) {
      uVar7 = param_3;
    }
    puVar8 = param_2;
    puVar9 = param_5;
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(byte *)puVar9 = *(byte *)puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar9 = (uint *)((int)puVar9 + 1);
    }
    param_2 = (uint *)((int)param_2 + uVar7);
    param_3 = param_3 - uVar7;
    if ((int)uVar7 < param_1[1]) {
      iVar4 = param_1[1] - uVar7;
      FUN_00563cc0((byte *)((int)param_5 + uVar7),0x30,iVar4);
      uVar7 = uVar7 + iVar4;
    }
  }
  param_1[6] = uVar7;
  if (((*(byte *)(param_1 + 2) & 8) == 0) &&
     ((0 < (int)uVar1 || ((*(byte *)(param_1 + 2) & 0x10) != 0)))) {
    puVar2 = (byte *)(uVar7 + (int)param_5);
    uVar7 = uVar7 + 1;
    *puVar2 = 0x2e;
  }
  if (param_1[1] < 0) {
    iVar4 = -param_1[1];
    FUN_00563cc0((byte *)((int)param_5 + uVar7),0x30,iVar4,uVar1,iVar4);
    uVar7 = uVar7 + iVar4;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < (int)param_3) {
      param_3 = uVar1;
    }
    if (param_3 != 0) {
      puVar8 = (uint *)((int)param_5 + uVar7);
      for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *param_2;
        param_2 = param_2 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      for (uVar5 = param_3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(byte *)puVar8 = *(byte *)param_2;
        param_2 = (uint *)((int)param_2 + (uint)bVar10 * -2 + 1);
        puVar8 = (uint *)((int)puVar8 + (uint)bVar10 * -2 + 1);
      }
      uVar7 = uVar7 + param_3;
    }
    param_1[7] = uVar7;
    param_1[8] = uVar1 - param_3;
  }
  if (param_1[3] != 0) {
    puVar2 = (byte *)(uVar7 + (int)param_5);
    uVar7 = uVar7 + 1;
    *puVar2 = (char)param_1[3];
  }
  iVar4 = uVar7 + 1;
  if (param_4 < 0) {
    param_4 = -param_4;
    *(byte *)(uVar7 + (int)param_5) = 0x2d;
  }
  else {
    *(byte *)(uVar7 + (int)param_5) = 0x2b;
  }
  iVar6 = param_1[4];
  switch(iVar6) {
  case 0:
    if (param_4 < 1000) {
      iVar6 = 3;
      goto switchD_0056abfb_default;
    }
    goto LAB_0056ac32;
  case 1:
    if (9 < param_4) {
      iVar6 = 2;
    }
  case 2:
    break;
  case 3:
    goto switchD_0056abfb_caseD_3;
  default:
    goto switchD_0056abfb_default;
  }
  if (99 < param_4) {
    iVar6 = 3;
  }
switchD_0056abfb_caseD_3:
  if (999 < param_4) {
LAB_0056ac32:
    iVar6 = 4;
  }
switchD_0056abfb_default:
  param_1[4] = iVar6;
  if (3 < iVar6) {
    cVar11 = '\0';
    if (999 < param_4) {
      cVar11 = (char)(param_4 / 1000);
      param_4 = param_4 % 1000;
    }
    pcVar3 = (char *)(iVar4 + (int)param_5);
    iVar4 = uVar7 + 2;
    *pcVar3 = cVar11 + '0';
  }
  if (2 < iVar6) {
    cVar11 = '\0';
    if (99 < param_4) {
      cVar11 = (char)(param_4 / 100);
      param_4 = param_4 % 100;
    }
    pcVar3 = (char *)(iVar4 + (int)param_5);
    iVar4 = iVar4 + 1;
    *pcVar3 = cVar11 + '0';
  }
  if (1 < iVar6) {
    cVar11 = '\0';
    if (9 < param_4) {
      cVar11 = (char)(param_4 / 10);
      param_4 = param_4 % 10;
    }
    pcVar3 = (char *)(iVar4 + (int)param_5);
    iVar4 = iVar4 + 1;
    *pcVar3 = cVar11 + '0';
  }
  *(char *)(iVar4 + (int)param_5) = (char)param_4 + '0';
  param_1[9] = (iVar4 + 1) - param_1[7];
  *(byte *)(iVar4 + 1 + (int)param_5) = 0;
  return;
}
