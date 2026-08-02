// Name: crt_unknown.c_FUN_0056aa38
// Address: 0056aa38
// Address Range: [[0056aa38, 0056ad38]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056aa38(int *param_1,undefined4 *param_2,uint param_3,int param_4,undefined4 *param_5)

#include "nocturne.h"

void FUN_0056aa38(int *param_1,uint *param_2,uint param_3,int param_4,uint *param_5)

{
  byte *puVar1;
  char *pcVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  uint local_18;
  uint local_14;
  
  bVar10 = 0;
  iVar7 = param_1[1];
  if (iVar7 < 1) {
    local_18 = *param_1 + iVar7;
  }
  else {
    local_18 = (*param_1 - iVar7) + 1;
  }
  if ((*(byte *)(param_1 + 2) & 4) != 0) {
    if ((int)param_3 < (int)local_18) {
      local_18 = param_3;
    }
    local_18 = local_18 - 1;
    if ((int)local_18 < 0) {
      local_18 = 0;
    }
  }
  local_14 = param_1[1];
  if ((int)local_14 < 1) {
    local_14 = 1;
    *(byte *)param_5 = 0x30;
  }
  else {
    if ((int)param_3 < (int)local_14) {
      local_14 = param_3;
    }
    puVar8 = param_2;
    puVar9 = param_5;
    for (uVar6 = local_14 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_14 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(byte *)puVar9 = *(byte *)puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar9 = (uint *)((int)puVar9 + 1);
    }
    param_2 = (uint *)((int)param_2 + local_14);
    param_3 = param_3 - local_14;
    if ((int)local_14 < param_1[1]) {
      uVar3 = param_1[1] - local_14;
      memset((byte *)((int)param_5 + local_14),0x30,uVar3);
      local_14 = local_14 + uVar3;
    }
  }
  param_1[6] = local_14;
  uVar6 = local_14;
  if (((*(byte *)(param_1 + 2) & 8) == 0) &&
     ((0 < (int)local_18 || ((*(byte *)(param_1 + 2) & 0x10) != 0)))) {
    uVar6 = local_14 + 1;
    *(byte *)(local_14 + (int)param_5) = 0x2e;
  }
  if (param_1[1] < 0) {
    uVar3 = -param_1[1];
    memset((byte *)((int)param_5 + uVar6),0x30,uVar3);
    uVar6 = uVar6 + uVar3;
  }
  if (0 < (int)local_18) {
    if ((int)local_18 < (int)param_3) {
      param_3 = local_18;
    }
    if (param_3 != 0) {
      puVar8 = (uint *)((int)param_5 + uVar6);
      for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *param_2;
        param_2 = param_2 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      for (uVar4 = param_3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(byte *)puVar8 = *(byte *)param_2;
        param_2 = (uint *)((int)param_2 + (uint)bVar10 * -2 + 1);
        puVar8 = (uint *)((int)puVar8 + (uint)bVar10 * -2 + 1);
      }
      uVar6 = uVar6 + param_3;
    }
    param_1[7] = uVar6;
    param_1[8] = local_18 - param_3;
  }
  if (param_1[3] != 0) {
    puVar1 = (byte *)(uVar6 + (int)param_5);
    uVar6 = uVar6 + 1;
    *puVar1 = (char)param_1[3];
  }
  iVar7 = uVar6 + 1;
  if (param_4 < 0) {
    param_4 = -param_4;
    *(byte *)(uVar6 + (int)param_5) = 0x2d;
  }
  else {
    *(byte *)(uVar6 + (int)param_5) = 0x2b;
  }
  iVar5 = param_1[4];
  switch(iVar5) {
  case 0:
    if (param_4 < 1000) {
      iVar5 = 3;
      goto switchD_0056abfb_default;
    }
    goto LAB_0056ac32;
  case 1:
    if (9 < param_4) {
      iVar5 = 2;
    }
  case 2:
    break;
  case 3:
    goto switchD_0056abfb_caseD_3;
  default:
    goto switchD_0056abfb_default;
  }
  if (99 < param_4) {
    iVar5 = 3;
  }
switchD_0056abfb_caseD_3:
  if (999 < param_4) {
LAB_0056ac32:
    iVar5 = 4;
  }
switchD_0056abfb_default:
  param_1[4] = iVar5;
  if (3 < iVar5) {
    local_14._0_1_ = '\0';
    if (999 < param_4) {
      local_14._0_1_ = (char)(param_4 / 1000);
      param_4 = param_4 % 1000;
    }
    pcVar2 = (char *)(iVar7 + (int)param_5);
    iVar7 = uVar6 + 2;
    *pcVar2 = (char)local_14 + '0';
  }
  if (2 < iVar5) {
    local_14._0_1_ = '\0';
    if (99 < param_4) {
      local_14._0_1_ = (char)(param_4 / 100);
      param_4 = param_4 % 100;
    }
    pcVar2 = (char *)(iVar7 + (int)param_5);
    iVar7 = iVar7 + 1;
    *pcVar2 = (char)local_14 + '0';
  }
  if (1 < iVar5) {
    local_14._0_1_ = '\0';
    if (9 < param_4) {
      local_14._0_1_ = (char)(param_4 / 10);
      param_4 = param_4 % 10;
    }
    pcVar2 = (char *)(iVar7 + (int)param_5);
    iVar7 = iVar7 + 1;
    *pcVar2 = (char)local_14 + '0';
  }
  *(char *)(iVar7 + (int)param_5) = (char)param_4 + '0';
  param_1[9] = (iVar7 + 1) - param_1[7];
  *(byte *)(iVar7 + 1 + (int)param_5) = 0;
  return;
}
