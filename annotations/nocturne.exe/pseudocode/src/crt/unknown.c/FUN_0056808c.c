// Name: crt_unknown.c_FUN_0056808c
// Address: 0056808c
// Address Range: [[0056808c, 005684f4]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_0056808c(int param_1,int *param_2,int param_3,int param_4)

#include "nocturne.h"

int FUN_0056808c(int param_1,int *param_2,int param_3,int param_4)

{
  byte bVar1;
  uint *puVar2;
  undefined6 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong local_3c;
  uint local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar10 = 0;
  iVar8 = 0;
  local_3c = 0;
  local_18 = 0;
  local_1c = 0;
  while( true ) {
    local_24 = FUN_00567540(param_1);
    iVar6 = local_24;
    if (((&DAT_005c168c)[(byte)((char)local_24 + 1)] & 2) == 0) break;
    local_1c = local_1c + 1;
    local_24 = iVar6;
  }
  if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
    iVar5 = *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = iVar5 + -1;
    local_24 = iVar6;
    if (iVar5 == 0) {
LAB_00568396:
      FUN_0056754c(local_24,param_1);
    }
    else {
      local_20 = 0x2b;
      if ((param_4 != 0) && ((local_24 == 0x2b || (local_24 == 0x2d)))) {
        local_1c = local_1c + 1;
        local_20 = local_24;
        local_24 = FUN_00568528(param_1);
        if (local_24 == -1) goto LAB_005683a8;
      }
      if (param_3 == 0) {
        if (local_24 == 0x30) {
          local_24 = FUN_00568528(param_1);
          iVar8 = 1;
          if (local_24 == -1) goto LAB_005683a8;
          if ((local_24 == 0x78) || (local_24 == 0x58)) {
            iVar8 = local_1c + 2;
            local_24 = FUN_00568528(param_1);
            local_1c = iVar8;
            iVar8 = 0;
            if (local_24 == -1) goto LAB_005683a8;
            param_3 = 0x10;
          }
          else {
            param_3 = 8;
          }
        }
        else {
          param_3 = 10;
        }
      }
      else if ((param_3 == 0x10) && (local_24 == 0x30)) {
        local_24 = FUN_00568528(param_1);
        iVar8 = 1;
        if (local_24 == -1) goto LAB_005683a8;
        if ((local_24 == 0x78) || (local_24 == 0x58)) {
          iVar8 = local_1c + 2;
          local_24 = FUN_00568528(param_1);
          local_1c = iVar8;
          iVar8 = 0;
          if (local_24 == -1) goto LAB_005683a8;
        }
      }
      if ((*(byte *)(param_1 + 0x10) & 0x40) == 0) {
        do {
          iVar6 = local_24;
          iVar5 = FUN_005684f8(local_24);
          if (param_3 <= iVar5) {
            if ((iVar6 != 0x3a) || ((*(byte *)(param_1 + 0x10) & 0x80) == 0)) goto LAB_00568396;
            goto LAB_00568363;
          }
          local_18 = local_18 * param_3 + iVar5;
          local_24 = FUN_00568528(param_1);
          iVar8 = iVar8 + 1;
        } while (local_24 != -1);
      }
      else {
        local_28 = 0;
        local_2c = param_3;
        do {
          uVar4 = FUN_005684f8(local_24);
          if (param_3 <= (int)uVar4) {
            if ((local_24 != 0x3a) || ((*(byte *)(param_1 + 0x10) & 0x80) == 0)) goto LAB_00568396;
            goto LAB_005682ae;
          }
          local_30 = 0;
          local_34 = uVar4;
          uVar11 = multiply64(local_3c,CONCAT44(local_28,local_2c));
          local_3c._4_4_ = (int)(uVar11 >> 0x20);
          local_3c._0_4_ = (uint)uVar11;
          local_3c = CONCAT44(local_3c._4_4_ + local_30 + (uint)CARRY4((uint)local_3c,local_34),
                              (uint)local_3c + local_34);
          local_24 = FUN_00568528(param_1);
          iVar8 = iVar8 + 1;
        } while (local_24 != -1);
      }
    }
  }
LAB_005683a8:
  if ((*(byte *)(param_1 + 0x10) & 0x40) == 0) {
    if (local_20 == 0x2d) {
      local_18 = -local_18;
    }
    if (0 < iVar8) {
      bVar10 = *(byte *)(param_1 + 0x10);
      iVar8 = iVar8 + local_1c;
      if ((bVar10 & 1) != 0) {
        if ((bVar10 & 4) == 0) {
          if ((bVar10 & 8) == 0) {
            puVar2 = (uint *)*param_2;
            *param_2 = (int)(puVar2 + 1);
            piVar7 = (int *)*puVar2;
          }
          else {
            puVar2 = (uint *)*param_2;
            *param_2 = (int)(puVar2 + 1);
            piVar7 = (int *)*puVar2;
          }
        }
        else {
          puVar3 = (undefined6 *)*param_2;
          *param_2 = (int)(puVar3 + 1);
          piVar7 = (int *)*puVar3;
        }
        if ((*(byte *)(param_1 + 0x10) & 0x10) != 0) {
          *(short *)piVar7 = (short)local_18;
          return iVar8;
        }
        *piVar7 = local_18;
      }
    }
  }
  else {
    if (local_20 == 0x2d) {
      local_3c._0_4_ = ~(uint)local_3c + 1;
    }
    if (0 < iVar8) {
      bVar1 = *(byte *)(param_1 + 0x10);
      iVar8 = iVar8 + local_1c;
      if ((bVar1 & 1) != 0) {
        if ((bVar1 & 4) == 0) {
          if ((bVar1 & 8) != 0) {
            puVar2 = (uint *)*param_2;
            *param_2 = (int)(puVar2 + 1);
            puVar9 = (uint *)*puVar2;
            *puVar9 = (uint)local_3c;
            puVar9[(uint)bVar10 * -2 + 1] = *(uint *)((int)&local_3c + (uint)bVar10 * -8 + 4);
            return iVar8;
          }
          puVar2 = (uint *)*param_2;
          *param_2 = (int)(puVar2 + 1);
          puVar9 = (uint *)*puVar2;
        }
        else {
          puVar2 = (uint *)*param_2;
          *param_2 = (int)(puVar2 + 2);
          puVar9 = (uint *)*puVar2;
        }
        *puVar9 = (uint)local_3c;
        puVar9[(uint)bVar10 * -2 + 1] = *(uint *)((int)&local_3c + (uint)bVar10 * -8 + 4);
        return iVar8;
      }
    }
  }
  return iVar8;
LAB_00568363:
  local_24 = FUN_00568528(param_1);
  iVar8 = iVar8 + 1;
  if (local_24 == -1) goto LAB_005683a8;
  iVar6 = FUN_005684f8(local_24);
  if (param_3 <= iVar6) goto LAB_00568396;
  local_18 = local_18 * param_3 + iVar6;
  goto LAB_00568363;
LAB_005682ae:
  local_24 = FUN_00568528(param_1);
  iVar8 = iVar8 + 1;
  if (local_24 == -1) goto LAB_005683a8;
  uVar4 = FUN_005684f8(local_24);
  if (param_3 <= (int)uVar4) goto LAB_00568396;
  local_30 = 0;
  local_34 = uVar4;
  uVar11 = multiply64(local_3c,CONCAT44(local_28,local_2c));
  local_3c._4_4_ = (int)(uVar11 >> 0x20);
  local_3c._0_4_ = (uint)uVar11;
  local_3c = CONCAT44(local_3c._4_4_ + local_30 + (uint)CARRY4((uint)local_3c,local_34),
                      (uint)local_3c + local_34);
  goto LAB_005682ae;
}
