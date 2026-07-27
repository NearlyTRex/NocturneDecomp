// Name: engine_prim.c_FUN_004f9dd0
// Address: 004f9dd0
// Address Range: [[004f9dd0, 004fa2dc]]
// Convention: unknown
// Signature: void engine_prim_c_FUN_004f9dd0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_prim_c_FUN_004f9dd0(int *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  int local_1c;
  uint *local_14;
  
  if ((DAT_005b7644 != 0) && (iVar8 = 0, piVar5 = param_1, 0 < param_2)) {
    do {
      if ((*(byte *)((int)piVar5 + 0x13) & 0x80) != 0) {
        piVar5[3] = (int)(0x7fffffff / (longlong)piVar5[2]);
        piVar5[4] = (int)(((longlong)*piVar5 * (longlong)_DAT_01c00c48) / (longlong)piVar5[2]) +
                    _DAT_01c00c50;
        piVar5[5] = (int)(((longlong)piVar5[1] * (longlong)_DAT_01c00c4c) / (longlong)piVar5[2]) +
                    _DAT_01c00c54;
      }
      iVar8 = iVar8 + 1;
      piVar5 = piVar5 + 0xc;
    } while (iVar8 < param_2);
  }
  if (DAT_006b0280 != 0) {
    piVar11 = param_1 + 0xc;
    piVar5 = param_1 + 0x18;
    if (param_2 < 4) {
      iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10(param_1,piVar11,piVar5);
      if (iVar8 == 0) {
        return;
      }
    }
    else {
      iVar8 = param_2 + -2;
      iVar9 = 0;
      iVar7 = 0;
      if (0 < iVar8) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10(param_1,piVar11,piVar5);
          if (iVar2 == 0) {
            iVar7 = iVar7 + 1;
          }
          piVar11 = piVar11 + 0xc;
          iVar9 = iVar9 + 1;
          piVar5 = piVar5 + 0xc;
        } while (iVar9 < iVar8);
      }
      if (iVar7 == iVar8) {
        return;
      }
    }
  }
  _DAT_01e52ef8 = _DAT_01e52ef8 + 1;
  if ((_DAT_01c02594 != 0) && (DAT_006b0278 == 0)) {
    engine_special_cpp_drawPolygon_FUN_00532620(param_1,param_2,_DAT_01c039a0);
    return;
  }
  switch(_DAT_01c039a4) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_004f9870(param_1,param_2);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_004f98e0(param_1,param_2);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_004f9960(param_1,param_2);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_004f98e0(param_1,param_2);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_004f99d0(param_1,param_2);
  }
  _DAT_01e52ef0 = 0;
  _DAT_01e52a68 = 0;
  local_1c = 0;
  _DAT_01e52eec = 0x4b0;
  if (0 < param_2) {
    do {
      iVar8 = local_1c + 1;
      if (param_2 <= iVar8) {
        iVar8 = 0;
      }
      piVar5 = param_1 + iVar8 * 0xc;
      piVar11 = param_1 + local_1c * 0xc;
      iVar8 = piVar11[5] >> 0x10;
      iVar7 = piVar5[5] >> 0x10;
      if (iVar8 != iVar7) {
        iVar9 = iVar7;
        piVar6 = piVar11;
        if (piVar5[5] < piVar11[5]) {
          iVar9 = iVar8;
          piVar6 = piVar5;
          iVar8 = iVar7;
          piVar5 = piVar11;
        }
        iVar2 = _DAT_01e52a68 * 0x48;
        *(int *)(&DAT_01e52a6c + iVar2) = iVar8;
        iVar7 = _DAT_01e52eec;
        *(int *)(iVar2 + 0x1e52a70) = iVar9;
        if (iVar8 < iVar7) {
          _DAT_01e52eec = iVar8;
        }
        if (_DAT_01e52ef0 < iVar9) {
          _DAT_01e52ef0 = iVar9;
        }
        if ((uint)(piVar5[5] - piVar6[5]) < 0x10000) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)(0xffffffff / (ulonglong)(uint)(piVar5[5] - piVar6[5]));
        }
        uVar10 = (uint)(ushort)((ushort)piVar6[5] ^ 0xffff);
        lVar1 = (longlong)iVar8 * (longlong)(piVar5[4] - piVar6[4]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e52a78) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e52a74) =
             piVar6[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(piVar5[6] - piVar6[6]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e52a88) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e52a84) =
             piVar6[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(piVar5[7] - piVar6[7]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e52a90) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e52a8c) =
             piVar6[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(piVar5[8] - piVar6[8]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e52a80) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e52a7c) =
             piVar6[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(piVar5[0xb] - piVar6[0xb]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e52aa0) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e52a9c) =
             piVar6[0xb] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(piVar5[2] - piVar6[2]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e52a98) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e52a94) =
             piVar6[2] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        _DAT_01e52a68 = _DAT_01e52a68 + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < param_2);
  }
  puVar3 = (uint *)engine_prim_c_findEdgeInBuffer_FUN_004f9830(_DAT_01e52eec,0);
  if ((puVar3 != (uint *)0x0) &&
     (local_14 = (uint *)engine_prim_c_findEdgeInBuffer_FUN_004f9830(_DAT_01e52eec,puVar3),
     iVar8 = _DAT_01e52eec, local_14 != (uint *)0x0)) {
    iVar7 = _DAT_01e52eec - INT_005be1e4;
    bVar12 = SBORROW4(_DAT_01e52eec,INT_005be1e4);
    while (bVar12 != iVar7 < 0) {
      if ((int)puVar3[1] <= iVar8) {
        *puVar3 = 0xffffffff;
        puVar3 = (uint *)engine_prim_c_findEdgeInBuffer_FUN_004f9830(iVar8,local_14);
        if (puVar3 == (uint *)0x0) {
          return;
        }
      }
      if ((int)local_14[1] <= iVar8) {
        *local_14 = 0xffffffff;
        local_14 = (uint *)engine_prim_c_findEdgeInBuffer_FUN_004f9830(iVar8,puVar3);
        if (local_14 == (uint *)0x0) {
          return;
        }
      }
      engine_special_cpp_renderScanline_FUN_00530710(local_14,puVar3,iVar8);
      puVar3[2] = puVar3[2] + puVar3[3];
      puVar3[6] = puVar3[6] + puVar3[7];
      puVar3[8] = puVar3[8] + puVar3[9];
      puVar3[4] = puVar3[4] + puVar3[5];
      puVar3[10] = puVar3[10] + puVar3[0xb];
      puVar3[0xc] = puVar3[0xc] + puVar3[0xd];
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + *(int *)(iVar8 + 0xc);
      *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + *(int *)(iVar8 + 0x1c);
      *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + *(int *)(iVar8 + 0x24);
      local_1c = local_1c + 1;
      *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + *(int *)(iVar8 + 0x14);
      iVar9 = INT_005be1e4;
      *(int *)(iVar8 + 0x28) = *(int *)(iVar8 + 0x28) + *(int *)(iVar8 + 0x2c);
      *(int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) + *(int *)(iVar8 + 0x34);
      iVar7 = local_1c - iVar9;
      bVar12 = SBORROW4(local_1c,iVar9);
    }
  }
  return;
}
