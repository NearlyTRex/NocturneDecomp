// Name: FUN_00544930
// Address: 00544930
// Address Range: [[00544930, 00544ad4]]
// Convention: unknown
// Signature: int FUN_00544930(int param_1)

#include "nocturne.h"

int FUN_00544930(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar3 = FUN_005415d0(param_1);
  iVar2 = *(int *)(iVar3 + 0x1d1f8);
  iVar6 = 0;
  iVar4 = iVar2;
  if (0 < iVar2) {
    iVar9 = param_1 + 0x1c0c;
    iVar10 = param_1;
    do {
      iVar4 = FUN_0041b600(iVar9);
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + 0x18;
      *(uint *)(iVar10 + 0x256c) = 0;
      iVar10 = iVar10 + 4;
    } while (iVar6 < iVar2);
  }
  local_24 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    local_28 = 0;
    do {
      pbVar5 = (byte *)(local_28 + *(int *)(param_1 + 0x40));
      pbVar11 = pbVar5 + 0x10;
      pbVar7 = pbVar5;
      for (iVar4 = 0; iVar4 < (int)(uint)*pbVar5; iVar4 = iVar4 + 1) {
        pbVar1 = pbVar7 + 1;
        pbVar7 = pbVar7 + 1;
        FUN_0041a590((uint)*pbVar1 * 0x18 + param_1 + 0x1c0c,pbVar11);
        pbVar11 = pbVar11 + 0xc;
        *(uint *)(param_1 + 0x256c + (uint)*pbVar7 * 4) = 1;
      }
      local_28 = local_28 + 0x34;
      iVar4 = local_24 + 1;
      local_24 = iVar4;
    } while (iVar4 < *(int *)(param_1 + 0x2c));
  }
  iVar10 = 0;
  iVar6 = iVar3;
  iVar9 = param_1;
  local_2c = iVar3;
  if (0 < iVar2) {
    do {
      iVar4 = iVar6;
      if (*(int *)(iVar9 + 0x256c) == 1) {
        iVar4 = local_2c;
        if (-1 < *(int *)(local_2c + 0x1d21c)) {
          iVar4 = 0;
          iVar6 = iVar3;
          iVar8 = param_1;
          if (0 < iVar2) {
            do {
              if ((iVar10 == *(int *)(iVar6 + 0x1d21c)) && (*(int *)(iVar8 + 0x256c) != 0)) break;
              iVar4 = iVar4 + 1;
              iVar6 = iVar6 + 0x24;
              iVar8 = iVar8 + 4;
            } while (iVar4 < iVar2);
          }
          if (iVar4 < iVar2) {
            iVar6 = 0;
            iVar4 = iVar10;
            do {
              iVar4 = *(int *)(iVar4 * 0x24 + iVar3 + 0x1d21c);
              if ((iVar4 < 0) || (*(int *)(param_1 + 0x256c + iVar4 * 4) == 2)) break;
              iVar6 = iVar6 + 1;
            } while (iVar6 < 2);
            if (iVar6 < 2) goto LAB_00544a02;
          }
        }
        *(uint *)(iVar9 + 0x256c) = 2;
      }
LAB_00544a02:
      iVar10 = iVar10 + 1;
      iVar6 = iVar4;
      iVar9 = iVar9 + 4;
      local_2c = local_2c + 0x24;
    } while (iVar10 < iVar2);
  }
  return iVar4;
}
