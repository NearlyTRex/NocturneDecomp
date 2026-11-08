// Name: FUN_0053e120
// Address: 0053e120
// Address Range: [[0053e120, 0053e640]]
// Convention: unknown
// Signature: void FUN_0053e120(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053e120(int *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  int local_1c;
  int local_18;
  uint *local_14;
  
  if ((DAT_0061b4c0 != 0) && (iVar9 = 0, piVar5 = param_1, 0 < param_2)) {
    do {
      if ((*(byte *)((int)piVar5 + 0x13) & 0x80) != 0) {
        piVar5[3] = (int)(0x7fffffff / (longlong)piVar5[2]);
        piVar5[4] = (int)(((longlong)*piVar5 * (longlong)_DAT_01c4eff8) / (longlong)piVar5[2]) +
                    _DAT_01c4f000;
        piVar5[5] = (int)(((longlong)piVar5[1] * (longlong)_DAT_01c4effc) / (longlong)piVar5[2]) +
                    _DAT_01c4f004;
      }
      iVar9 = iVar9 + 1;
      piVar5 = piVar5 + 0xc;
    } while (iVar9 < param_2);
  }
  if (DAT_00713a7c != 0) {
    piVar11 = param_1 + 0xc;
    piVar5 = param_1 + 0x18;
    if (param_2 < 4) {
      iVar9 = FUN_0053dd60(param_1,piVar11,piVar5);
      if (iVar9 == 0) {
        return;
      }
    }
    else {
      iVar9 = param_2 + -2;
      iVar6 = 0;
      iVar8 = 0;
      if (0 < iVar9) {
        do {
          iVar2 = FUN_0053dd60(param_1,piVar11,piVar5);
          if (iVar2 == 0) {
            iVar8 = iVar8 + 1;
          }
          piVar11 = piVar11 + 0xc;
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 0xc;
        } while (iVar6 < iVar9);
      }
      if (iVar8 == iVar9) {
        return;
      }
    }
  }
  if ((_DAT_01c50948 != 0) && (DAT_00713a74 == 0)) {
    _DAT_01e7dac8 = _DAT_01e7dac8 + param_2 + -2;
    FUN_00582340(param_1,param_2,_DAT_01c51d14);
    return;
  }
  _DAT_01e7dac8 = _DAT_01e7dac8 + 1;
  switch(_DAT_01c51d18) {
  case 1:
    FUN_0053dbc0(param_1,param_2);
    break;
  case 2:
    FUN_0053dc30(param_1,param_2);
    break;
  case 3:
    FUN_0053dcb0(param_1,param_2);
    break;
  case 5:
    FUN_0053dc30(param_1,param_2);
    break;
  case 6:
    FUN_0053dd20(param_1,param_2);
  }
  _DAT_01e7dac0 = 0;
  _DAT_01e7d5b8 = 0;
  local_1c = 0;
  _DAT_01e7dabc = 0x4b0;
  if (0 < param_2) {
    do {
      iVar9 = local_1c + 1;
      if (param_2 <= iVar9) {
        iVar9 = 0;
      }
      piVar5 = param_1 + iVar9 * 0xc;
      piVar11 = param_1 + local_1c * 0xc;
      iVar6 = piVar11[5] >> 0x10;
      iVar9 = piVar5[5] >> 0x10;
      if (iVar6 != iVar9) {
        iVar8 = iVar6;
        piVar7 = piVar11;
        if (piVar5[5] < piVar11[5]) {
          iVar8 = iVar9;
          piVar7 = piVar5;
          iVar9 = iVar6;
          piVar5 = piVar11;
        }
        iVar2 = _DAT_01e7d5b8 * 0x50;
        *(int *)(&DAT_01e7d5bc + iVar2) = iVar8;
        iVar6 = _DAT_01e7dabc;
        *(int *)(iVar2 + 0x1e7d5c0) = iVar9;
        if (iVar8 < iVar6) {
          _DAT_01e7dabc = iVar8;
        }
        if (_DAT_01e7dac0 < iVar9) {
          _DAT_01e7dac0 = iVar9;
        }
        if ((uint)(piVar5[5] - piVar7[5]) < 0x10000) {
          iVar9 = 0;
        }
        else {
          iVar9 = (int)(0xffffffff / (ulonglong)(uint)(piVar5[5] - piVar7[5]));
        }
        uVar10 = (uint)(ushort)((ushort)piVar7[5] ^ 0xffff);
        lVar1 = (longlong)iVar9 * (longlong)(piVar5[4] - piVar7[4]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e7d5c8) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e7d5c4) =
             piVar7[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(piVar5[6] - piVar7[6]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e7d5d8) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e7d5d4) =
             piVar7[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(piVar5[7] - piVar7[7]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e7d5e0) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e7d5dc) =
             piVar7[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(piVar5[8] - piVar7[8]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e7d5d0) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e7d5cc) =
             piVar7[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(piVar5[0xb] - piVar7[0xb]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e7d5f0) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e7d5ec) =
             piVar7[0xb] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(piVar5[2] - piVar7[2]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e7d5e8) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e7d5e4) =
             piVar7[2] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        _DAT_01e7d5b8 = _DAT_01e7d5b8 + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < param_2);
  }
  puVar3 = (uint *)FUN_0053db80(_DAT_01e7dabc,0);
  if ((puVar3 != (uint *)0x0) &&
     (local_14 = (uint *)FUN_0053db80(_DAT_01e7dabc,puVar3), local_14 != (uint *)0x0)) {
    local_18 = _DAT_01e7dabc;
    iVar9 = _DAT_01e7dabc - 0x000004B0;
    bVar12 = SBORROW4(_DAT_01e7dabc,0x000004B0);
    while (bVar12 != iVar9 < 0) {
      if ((int)puVar3[1] <= local_18) {
        *puVar3 = 0xffffffff;
        puVar3 = (uint *)FUN_0053db80(local_18,local_14);
        if (puVar3 == (uint *)0x0) {
          return;
        }
      }
      if ((int)local_14[1] <= local_18) {
        *local_14 = 0xffffffff;
        local_14 = (uint *)FUN_0053db80(local_18,puVar3);
        if (local_14 == (uint *)0x0) {
          return;
        }
      }
      FUN_00580127();
      puVar3[2] = puVar3[2] + puVar3[3];
      puVar3[6] = puVar3[6] + puVar3[7];
      puVar3[8] = puVar3[8] + puVar3[9];
      puVar3[4] = puVar3[4] + puVar3[5];
      puVar3[10] = puVar3[10] + puVar3[0xb];
      puVar3[0xc] = puVar3[0xc] + puVar3[0xd];
      local_14[2] = local_14[2] + local_14[3];
      local_14[6] = local_14[6] + local_14[7];
      local_14[8] = local_14[8] + local_14[9];
      local_18 = local_18 + 1;
      local_14[4] = local_14[4] + local_14[5];
      iVar6 = 0x000004B0;
      local_14[10] = local_14[10] + local_14[0xb];
      local_14[0xc] = local_14[0xc] + local_14[0xd];
      iVar9 = local_18 - iVar6;
      bVar12 = SBORROW4(local_18,iVar6);
    }
  }
  return;
}
