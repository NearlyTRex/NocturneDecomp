// Name: FUN_0056808c
// Address: 0056808c
// Address Range: [[0056808c, 005684f4]]
// Convention: unknown
// Signature: int FUN_0056808c(int param_1,int *param_2,int param_3,int param_4)

#include "nocturne.h"

int FUN_0056808c(int param_1,int *param_2,int param_3,int param_4)

{
  byte bVar1;
  uint *puVar2;
  undefined6 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  longlong lVar10;
  uint local_3c;
  uint local_38 [4];
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar9 = 0;
  iVar7 = 0;
  local_3c = 0;
  local_38[0] = 0;
  local_18 = 0;
  local_1c = 0;
  while( true ) {
    local_24 = FUN_00567540(param_1);
    iVar4 = local_24;
    if (((&DAT_005c168c)[(byte)((char)local_24 + 1)] & 2) == 0) break;
    local_1c = local_1c + 1;
    local_24 = iVar4;
  }
  if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
    iVar5 = *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = iVar5 + -1;
    local_24 = iVar4;
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
          iVar7 = 1;
          if (local_24 == -1) goto LAB_005683a8;
          if ((local_24 == 0x78) || (local_24 == 0x58)) {
            iVar7 = local_1c + 2;
            local_24 = FUN_00568528(param_1);
            local_1c = iVar7;
            iVar7 = 0;
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
        iVar7 = 1;
        if (local_24 == -1) goto LAB_005683a8;
        if ((local_24 == 0x78) || (local_24 == 0x58)) {
          iVar7 = local_1c + 2;
          local_24 = FUN_00568528(param_1);
          local_1c = iVar7;
          iVar7 = 0;
          if (local_24 == -1) goto LAB_005683a8;
        }
      }
      if ((*(byte *)(param_1 + 0x10) & 0x40) == 0) {
        do {
          iVar4 = local_24;
          iVar5 = FUN_005684f8(local_24);
          if (param_3 <= iVar5) {
            if ((iVar4 != 0x3a) || ((*(byte *)(param_1 + 0x10) & 0x80) == 0)) goto LAB_00568396;
            goto LAB_00568363;
          }
          local_18 = local_18 * param_3 + iVar5;
          local_24 = FUN_00568528(param_1);
          iVar7 = iVar7 + 1;
        } while (local_24 != -1);
      }
      else {
        local_28 = 0;
        local_38[3] = param_3;
        do {
          iVar4 = FUN_005684f8(local_24);
          lVar10 = CONCAT44(local_38[0],local_3c);
          if (param_3 <= iVar4) {
            if ((local_24 != 0x3a) || ((*(byte *)(param_1 + 0x10) & 0x80) == 0)) goto LAB_00568396;
            goto LAB_005682ae;
          }
          local_38[2] = 0;
          local_38[1] = iVar4;
          lVar10 = FUN_0056f14c();
          lVar10 = lVar10 + CONCAT44(local_38[2],local_38[1]);
          local_3c = (uint)lVar10;
          local_38[0] = (uint)((ulonglong)lVar10 >> 0x20);
          local_24 = FUN_00568528(param_1);
          iVar7 = iVar7 + 1;
        } while (local_24 != -1);
      }
    }
  }
LAB_005683a8:
  if ((*(byte *)(param_1 + 0x10) & 0x40) == 0) {
    if (local_20 == 0x2d) {
      local_18 = -local_18;
    }
    if (0 < iVar7) {
      bVar9 = *(byte *)(param_1 + 0x10);
      iVar7 = iVar7 + local_1c;
      if ((bVar9 & 1) != 0) {
        if ((bVar9 & 4) == 0) {
          if ((bVar9 & 8) == 0) {
            puVar2 = (uint *)*param_2;
            *param_2 = (int)(puVar2 + 1);
            piVar6 = (int *)*puVar2;
          }
          else {
            puVar2 = (uint *)*param_2;
            *param_2 = (int)(puVar2 + 1);
            piVar6 = (int *)*puVar2;
          }
        }
        else {
          puVar3 = (undefined6 *)*param_2;
          *param_2 = (int)(puVar3 + 1);
          piVar6 = (int *)*puVar3;
        }
        if ((*(byte *)(param_1 + 0x10) & 0x10) != 0) {
          *(short *)piVar6 = (short)local_18;
          return iVar7;
        }
        *piVar6 = local_18;
      }
    }
  }
  else {
    if (local_20 == 0x2d) {
      local_38[0] = ~local_38[0];
      local_3c = ~local_3c + 1;
      if (local_3c == 0) {
        local_38[0] = local_38[0] + 1;
      }
    }
    if (0 < iVar7) {
      bVar1 = *(byte *)(param_1 + 0x10);
      iVar7 = iVar7 + local_1c;
      if ((bVar1 & 1) != 0) {
        if ((bVar1 & 4) == 0) {
          if ((bVar1 & 8) != 0) {
            puVar2 = (uint *)*param_2;
            *param_2 = (int)(puVar2 + 1);
            puVar8 = (uint *)*puVar2;
            *puVar8 = local_3c;
            puVar8[(uint)bVar9 * -2 + 1] = local_38[(uint)bVar9 * -2];
            return iVar7;
          }
          puVar2 = (uint *)*param_2;
          *param_2 = (int)(puVar2 + 1);
          puVar8 = (uint *)*puVar2;
        }
        else {
          puVar2 = (uint *)*param_2;
          *param_2 = (int)(puVar2 + 2);
          puVar8 = (uint *)*puVar2;
        }
        *puVar8 = local_3c;
        puVar8[(uint)bVar9 * -2 + 1] = local_38[(uint)bVar9 * -2];
        return iVar7;
      }
    }
  }
  return iVar7;
LAB_00568363:
  local_24 = FUN_00568528(param_1);
  iVar7 = iVar7 + 1;
  if (local_24 == -1) goto LAB_005683a8;
  iVar4 = FUN_005684f8(local_24);
  if (param_3 <= iVar4) goto LAB_00568396;
  local_18 = local_18 * param_3 + iVar4;
  goto LAB_00568363;
LAB_005682ae:
  local_38[0] = (uint)((ulonglong)lVar10 >> 0x20);
  local_3c = (uint)lVar10;
  local_24 = FUN_00568528(param_1);
  iVar7 = iVar7 + 1;
  if (local_24 == -1) goto LAB_005683a8;
  iVar4 = FUN_005684f8(local_24);
  if (param_3 <= iVar4) goto LAB_00568396;
  local_38[2] = 0;
  local_38[1] = iVar4;
  lVar10 = FUN_0056f14c();
  lVar10 = lVar10 + CONCAT44(local_38[2],local_38[1]);
  goto LAB_005682ae;
}
