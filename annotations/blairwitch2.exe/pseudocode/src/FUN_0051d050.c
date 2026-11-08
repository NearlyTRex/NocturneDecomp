// Name: FUN_0051d050
// Address: 0051d050
// Address Range: [[0051d050, 0051d572]]
// Convention: unknown
// Signature: void FUN_0051d050(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d050(int *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  bool bVar13;
  int local_64 [16];
  uint local_24;
  int *local_20;
  int local_1c;
  int local_18;
  uint *local_14;
  
  if (DAT_0070ca7c != 0) {
    if (param_2 < 4) {
      iVar3 = FUN_0051c760(&DAT_00622014 + *param_1 * 0xc,&DAT_00622014 + param_1[1] * 0xc);
      if (iVar3 == 0) {
        return;
      }
    }
    else {
      iVar3 = param_2 + -2;
      iVar9 = 0;
      iVar11 = 0;
      piVar7 = param_1;
      if (0 < iVar3) {
        do {
          iVar2 = FUN_0051c760(&DAT_00622014 + *piVar7 * 0xc,&DAT_00622014 + piVar7[1] * 0xc);
          if (iVar2 == 0) {
            iVar11 = iVar11 + 1;
          }
          iVar9 = iVar9 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar9 < iVar3);
      }
      if (iVar11 == iVar3) {
        return;
      }
    }
  }
  if ((_DAT_01c37788 == 0) || (DAT_0070ca74 != 0)) {
    _DAT_01e61b50 = 0;
    _DAT_01e61648 = 0;
    local_1c = 0;
    _DAT_01e61b58 = _DAT_01e61b58 + 1;
    _DAT_01e61b4c = 0x4b0;
    if (0 < param_2) {
      local_20 = param_1;
      do {
        iVar3 = local_1c + 1;
        if (param_2 <= iVar3) {
          iVar3 = 0;
        }
        iVar8 = *local_20 * 0x30;
        iVar11 = param_1[iVar3] * 0x30;
        iVar2 = *(int *)(&DAT_00622028 + iVar8) >> 0x10;
        iVar9 = *(int *)(&DAT_00622028 + iVar11) >> 0x10;
        if (iVar2 != iVar9) {
          iVar6 = iVar2;
          puVar4 = &DAT_00622014 + *local_20 * 0xc;
          puVar12 = &DAT_00622014 + param_1[iVar3] * 0xc;
          if (*(int *)(&DAT_00622028 + iVar11) < *(int *)(&DAT_00622028 + iVar8)) {
            iVar6 = iVar9;
            puVar4 = &DAT_00622014 + param_1[iVar3] * 0xc;
            iVar9 = iVar2;
            puVar12 = &DAT_00622014 + *local_20 * 0xc;
          }
          iVar11 = _DAT_01e61648 * 0x50;
          *(int *)(&DAT_01e6164c + iVar11) = iVar6;
          iVar3 = _DAT_01e61b4c;
          *(int *)(iVar11 + 0x1e61650) = iVar9;
          if (iVar6 < iVar3) {
            _DAT_01e61b4c = iVar6;
          }
          if (_DAT_01e61b50 < iVar9) {
            _DAT_01e61b50 = iVar9;
          }
          if ((uint)(puVar12[5] - puVar4[5]) < 0x10000) {
            iVar3 = 0;
          }
          else {
            iVar3 = (int)(0xffffffff / (ulonglong)(uint)(puVar12[5] - puVar4[5]));
          }
          uVar10 = (uint)(ushort)((ushort)puVar4[5] ^ 0xffff);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[4] - puVar4[4]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e61658) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          *(uint *)(iVar11 + 0x1e61654) =
               puVar4[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[6] - puVar4[6]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e61668) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          *(uint *)(iVar11 + 0x1e61664) =
               puVar4[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[7] - puVar4[7]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e61670) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          *(uint *)(iVar11 + 0x1e6166c) =
               puVar4[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[8] - puVar4[8]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e61660) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          *(uint *)(iVar11 + 0x1e6165c) =
               puVar4[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[0xb] - puVar4[0xb]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e61680) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          local_24 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e6167c) = puVar4[0xb] + local_24;
          if (_DAT_01c38b58 == 1) {
            if (_DAT_01c38b50 == 0) {
              iVar9 = puVar12[3];
              iVar2 = puVar4[3];
            }
            else {
              iVar2 = 0x7fffffff - puVar4[2];
              iVar9 = 0x7fffffff - puVar12[2];
            }
            lVar1 = (longlong)iVar3 * (longlong)(iVar9 - iVar2);
            uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1e61678) = uVar5;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
            *(uint *)(iVar11 + 0x1e61674) =
                 iVar2 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            _DAT_01e61648 = _DAT_01e61648 + 1;
          }
          else {
            lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[2] - puVar4[2]);
            uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1e61678) = uVar5;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
            *(uint *)(iVar11 + 0x1e61674) =
                 puVar4[2] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            _DAT_01e61648 = _DAT_01e61648 + 1;
          }
        }
        local_20 = local_20 + 1;
        local_1c = local_1c + 1;
      } while (local_1c < param_2);
    }
    puVar4 = (uint *)FUN_0051c580(_DAT_01e61b4c);
    if ((puVar4 != (uint *)0x0) &&
       (local_14 = (uint *)FUN_0051c580(_DAT_01e61b4c), local_14 != (uint *)0x0)) {
      local_18 = _DAT_01e61b4c;
      iVar3 = _DAT_01e61b4c - 0x000004B0;
      bVar13 = SBORROW4(_DAT_01e61b4c,0x000004B0);
      while (bVar13 != iVar3 < 0) {
        if ((int)puVar4[1] <= local_18) {
          *puVar4 = 0xffffffff;
          puVar4 = (uint *)FUN_0051c580(local_18);
          if (puVar4 == (uint *)0x0) {
            return;
          }
        }
        if ((int)local_14[1] <= local_18) {
          *local_14 = 0xffffffff;
          local_14 = (uint *)FUN_0051c580(local_18);
          if (local_14 == (uint *)0x0) {
            return;
          }
        }
        FUN_0055d6d7();
        puVar4[2] = puVar4[2] + puVar4[3];
        puVar4[6] = puVar4[6] + puVar4[7];
        puVar4[8] = puVar4[8] + puVar4[9];
        puVar4[4] = puVar4[4] + puVar4[5];
        puVar4[10] = puVar4[10] + puVar4[0xb];
        puVar4[0xc] = puVar4[0xc] + puVar4[0xd];
        local_14[2] = local_14[2] + local_14[3];
        local_14[6] = local_14[6] + local_14[7];
        local_14[8] = local_14[8] + local_14[9];
        local_14[4] = local_14[4] + local_14[5];
        local_14[10] = local_14[10] + local_14[0xb];
        local_18 = local_18 + 1;
        local_14[0xc] = local_14[0xc] + local_14[0xd];
        iVar3 = local_18 - 0x000004B0;
        bVar13 = SBORROW4(local_18,0x000004B0);
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < param_2) {
      do {
        iVar9 = *param_1;
        iVar11 = iVar3 + 1;
        param_1 = param_1 + 1;
        local_64[iVar3] = (int)(&DAT_00622014 + iVar9 * 0xc);
        iVar3 = iVar11;
      } while (iVar11 < param_2);
    }
    _DAT_01e61b58 = _DAT_01e61b58 + param_2 + -2;
    FUN_0055f920(local_64,param_2);
  }
  return;
}
