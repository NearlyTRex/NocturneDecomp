// Name: FUN_1000e8f0
// Address: 1000e8f0
// Address Range: [[1000e8f0, 1000eb95]]
// Convention: unknown
// Signature: void FUN_1000e8f0(int *param_1,int *param_2)

#include "nocturne.h"

void FUN_1000e8f0(int *param_1,int *param_2)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  ushort local_1a;
  byte local_18 [2];
  ushort uStack_16;
  short local_14 [4];
  int local_c;
  int local_8;
  int local_4;
  
  local_18[0] = 0;
  local_18[1] = 0;
  uStack_16 = 0;
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  uVar2 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar4 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar5 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  local_1a = uVar4 + uVar5;
  if (((0x7ffe < uVar4) || (0x7ffe < uVar5)) || (0xbffd < local_1a)) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = (-(uint)(uVar2 == 0) & 0x80000000) - 0x8000;
    return;
  }
  if (local_1a < 0x3fc0) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  if (((uVar4 == 0) && (local_1a = local_1a + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
     ((param_1[1] == 0 && (*param_1 == 0)))) {
    *(ushort *)((int)param_1 + 10) = 0;
    return;
  }
  if (((uVar5 == 0) && (local_1a = local_1a + 1, (param_2[2] & 0x7fffffffU) == 0)) &&
     ((param_2[1] == 0 && (*param_2 == 0)))) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  local_8 = 0;
  local_c = 0;
  do {
    iVar6 = 8;
    iVar8 = local_c * 2;
    local_4 = 5 - local_c;
    if (0 < 5 - local_c) {
      pbVar1 = local_18 + local_8;
      do {
        iVar3 = ___addl(*(uint *)pbVar1,
                        (uint)*(ushort *)(iVar6 + (int)param_2) *
                        (uint)*(ushort *)(iVar8 + (int)param_1),pbVar1);
        if (iVar3 != 0) {
          *(short *)((int)local_14 + local_8) = *(short *)((int)local_14 + local_8) + 1;
        }
        iVar8 = iVar8 + 2;
        iVar6 = iVar6 + -2;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
    }
    local_8 = local_8 + 2;
    local_c = local_c + 1;
  } while (local_c < 5);
  local_1a = local_1a + 0xc002;
  if (0 < (short)local_1a) {
    do {
      if ((local_14[3] & 0x8000U) != 0) break;
      ___shl_12(local_18);
      local_1a = local_1a - 1;
    } while (0 < (short)local_1a);
    if (0 < (short)local_1a) goto LAB_1000eac3;
  }
  local_1a = local_1a - 1;
  if ((short)local_1a < 0) {
    iVar8 = CONCAT22(uStack_16,CONCAT11(local_18[1],local_18[0]));
    sVar7 = -local_1a;
    local_1a = 0;
    do {
      if ((local_18[0] & 1) != 0) {
        iVar8 = iVar8 + 1;
      }
      ___shr_12(local_18);
      sVar7 = sVar7 + -1;
    } while (sVar7 != 0);
  }
  else {
    iVar8 = CONCAT22(uStack_16,CONCAT11(local_18[1],local_18[0]));
  }
  if (iVar8 != 0) {
    local_18[0] = local_18[0] | 1;
  }
LAB_1000eac3:
  iVar6 = CONCAT22(local_14[2],local_14[1]);
  iVar8 = CONCAT22(local_14[0],uStack_16);
  if (0x8000 < CONCAT11(local_18[1],local_18[0])) {
    if (CONCAT22(local_14[0],uStack_16) == -1) {
      iVar8 = 0;
      if (CONCAT22(local_14[2],local_14[1]) == -1) {
        if (local_14[3] == 0xffff) {
          local_14[3] = 0x8000;
          local_1a = local_1a + 1;
          iVar6 = 0;
          iVar8 = 0;
        }
        else {
          local_14[3] = local_14[3] + 1;
          iVar6 = 0;
          iVar8 = 0;
        }
      }
      else {
        iVar6 = CONCAT22(local_14[2],local_14[1]) + 1;
      }
    }
    else {
      iVar8 = CONCAT22(local_14[0],uStack_16) + 1;
      iVar6 = CONCAT22(local_14[2],local_14[1]);
    }
  }
  local_14[0] = (short)((uint)iVar8 >> 0x10);
  uStack_16 = (ushort)iVar8;
  local_14[2] = (short)((uint)iVar6 >> 0x10);
  local_14[1] = (short)iVar6;
  if (local_1a < 0x7fff) {
    *(ushort *)param_1 = uStack_16;
    *(uint *)((int)param_1 + 2) = CONCAT22(local_14[1],local_14[0]);
    *(uint *)((int)param_1 + 6) = CONCAT22(local_14[3],local_14[2]);
    *(ushort *)((int)param_1 + 10) = local_1a | uVar2;
    return;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = (-(uint)(uVar2 == 0) & 0x80000000) - 0x8000;
  return;
}
