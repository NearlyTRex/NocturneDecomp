// Name: engine_prim.c_renderScanlinePolygon_FUN_00516de0
// Address: 00516de0
// Address Range: [[00516de0, 00517459]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderScanlinePolygon_FUN_00516de0(SRenderVertex *vertices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_renderScanlinePolygon_FUN_00516de0(SRenderVertex *vertices,int vertex_count)

{
  longlong lVar1;
  SRenderVertex *pSVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_1c;
  int local_18;
  int *local_14;
  
  if ((DAT_005fba40 != 0) && (iVar9 = 0, pSVar2 = vertices, 0 < vertex_count)) {
    do {
      if (((byte)pSVar2[0x13] & 0x80) != 0) {
        *(int *)(pSVar2 + 0xc) = (int)(0x7fffffff / (longlong)*(int *)(pSVar2 + 8));
        *(int *)(pSVar2 + 0x10) =
             (int)(((longlong)*(int *)pSVar2 * (longlong)_DAT_01c6b598) /
                  (longlong)*(int *)(pSVar2 + 8)) + _DAT_01c6b5a0;
        *(int *)(pSVar2 + 0x14) =
             (int)(((longlong)*(int *)(pSVar2 + 4) * (longlong)_DAT_01c6b59c) /
                  (longlong)*(int *)(pSVar2 + 8)) + _DAT_01c6b5a4;
      }
      iVar9 = iVar9 + 1;
      pSVar2 = pSVar2 + 0x30;
    } while (iVar9 < vertex_count);
  }
  if (DAT_007303fc != 0) {
    pSVar2 = vertices + 0x30;
    pSVar6 = vertices + 0x60;
    if (vertex_count < 4) {
      iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0(vertices,pSVar2,pSVar6);
      if (iVar9 == 0) {
        return;
      }
    }
    else {
      iVar9 = vertex_count + -2;
      iVar10 = 0;
      iVar8 = 0;
      if (0 < iVar9) {
        do {
          iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0(vertices,pSVar2,pSVar6);
          if (iVar3 == 0) {
            iVar8 = iVar8 + 1;
          }
          pSVar2 = pSVar2 + 0x30;
          iVar10 = iVar10 + 1;
          pSVar6 = pSVar6 + 0x30;
        } while (iVar10 < iVar9);
      }
      if (iVar8 == iVar9) {
        return;
      }
    }
  }
  if ((_DAT_01c6cee8 != 0) && (DAT_007303f4 == 0)) {
    engine_special_cpp_drawPolygon_FUN_00565c10(vertices,vertex_count,_DAT_01c6e2b4);
    _DAT_01ed3198 = _DAT_01ed3198 + vertex_count + -2;
    return;
  }
  _DAT_01ed3198 = _DAT_01ed3198 + 1;
  switch(_DAT_01c6e2b8) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_00515920(vertices,vertex_count);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_00515990(vertices,vertex_count);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_00515a10(vertices,vertex_count);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_00515990(vertices,vertex_count);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_00515a80(vertices,vertex_count);
  }
  _DAT_01ed36a4 = 0;
  _DAT_01ed319c = 0;
  local_1c = 0;
  _DAT_01ed36a0 = 0x4b0;
  if (0 < vertex_count) {
    do {
      iVar9 = local_1c + 1;
      if (vertex_count <= iVar9) {
        iVar9 = 0;
      }
      pSVar2 = vertices + iVar9 * 0x30;
      pSVar6 = vertices + local_1c * 0x30;
      iVar9 = *(int *)(pSVar6 + 0x14) >> 0x10;
      iVar8 = *(int *)(pSVar2 + 0x14) >> 0x10;
      if (iVar9 != iVar8) {
        iVar10 = iVar8;
        pSVar7 = pSVar6;
        if (*(int *)(pSVar2 + 0x14) < *(int *)(pSVar6 + 0x14)) {
          iVar10 = iVar9;
          iVar9 = iVar8;
          pSVar7 = pSVar2;
          pSVar2 = pSVar6;
        }
        iVar3 = _DAT_01ed319c * 0x50;
        *(int *)(&DAT_01ed31a0 + iVar3) = iVar9;
        iVar8 = _DAT_01ed36a0;
        *(int *)(iVar3 + 0x1ed31a4) = iVar10;
        if (iVar9 < iVar8) {
          _DAT_01ed36a0 = iVar9;
        }
        if (_DAT_01ed36a4 < iVar10) {
          _DAT_01ed36a4 = iVar10;
        }
        if ((uint)(*(int *)(pSVar2 + 0x14) - *(int *)(pSVar7 + 0x14)) < 0x10000) {
          iVar9 = 0;
        }
        else {
          iVar9 = (int)(0xffffffff /
                       (ulonglong)(uint)(*(int *)(pSVar2 + 0x14) - *(int *)(pSVar7 + 0x14)));
        }
        uVar11 = (uint)(ushort)((ushort)*(uint *)(pSVar7 + 0x14) ^ 0xffff);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(pSVar2 + 0x10) - *(int *)(pSVar7 + 0x10));
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1ed31ac) = uVar5;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1ed31a8) =
             *(int *)(pSVar7 + 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(pSVar2 + 0x18) - *(int *)(pSVar7 + 0x18));
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1ed31bc) = uVar5;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1ed31b8) =
             *(int *)(pSVar7 + 0x18) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(pSVar2 + 0x1c) - *(int *)(pSVar7 + 0x1c));
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1ed31c4) = uVar5;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1ed31c0) =
             *(int *)(pSVar7 + 0x1c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(pSVar2 + 0x20) - *(int *)(pSVar7 + 0x20));
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1ed31b4) = uVar5;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1ed31b0) =
             *(int *)(pSVar7 + 0x20) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(pSVar2 + 0x2c) - *(int *)(pSVar7 + 0x2c));
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1ed31d4) = uVar5;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1ed31d0) =
             *(int *)(pSVar7 + 0x2c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(pSVar2 + 8) - *(int *)(pSVar7 + 8));
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1ed31cc) = uVar5;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1ed31c8) =
             *(int *)(pSVar7 + 8) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(pSVar2 + 0x24) - *(int *)(pSVar7 + 0x24));
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1ed31dc) = uVar5;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1ed31d8) =
             *(int *)(pSVar7 + 0x24) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(pSVar2 + 0x28) - *(int *)(pSVar7 + 0x28));
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1ed31e4) = uVar5;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1ed31e0) =
             *(int *)(pSVar7 + 0x28) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        _DAT_01ed319c = _DAT_01ed319c + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < vertex_count);
  }
  piVar4 = (int *)&DAT_01ed31a0;
  iVar9 = 0;
  if (0 < _DAT_01ed319c) {
    do {
      if ((_DAT_01ed36a0 == *piVar4) && (piVar4 != (int *)0x0)) goto LAB_00516f8f;
      iVar9 = iVar9 + 1;
      piVar4 = piVar4 + 0x14;
    } while (iVar9 < _DAT_01ed319c);
  }
  piVar4 = (int *)0x0;
LAB_00516f8f:
  if (piVar4 != (int *)0x0) {
    iVar9 = 0;
    local_14 = (int *)&DAT_01ed31a0;
    if (0 < _DAT_01ed319c) {
      do {
        if ((_DAT_01ed36a0 == *local_14) && (local_14 != piVar4)) goto LAB_00516fcc;
        iVar9 = iVar9 + 1;
        local_14 = local_14 + 0x14;
      } while (iVar9 < _DAT_01ed319c);
    }
    local_14 = (int *)0x0;
LAB_00516fcc:
    if (local_14 != (int *)0x0) {
      local_18 = _DAT_01ed36a0;
      do {
        iVar9 = _DAT_01ed319c;
        if (piVar4[1] <= local_18) {
          *piVar4 = -1;
          iVar8 = 0;
          piVar4 = (int *)&DAT_01ed31a0;
          if (0 < iVar9) {
            do {
              if ((local_18 == *piVar4) && (piVar4 != local_14)) goto LAB_00517022;
              iVar8 = iVar8 + 1;
              piVar4 = piVar4 + 0x14;
            } while (iVar8 < _DAT_01ed319c);
          }
          piVar4 = (int *)0x0;
LAB_00517022:
          if (piVar4 == (int *)0x0) {
            return;
          }
        }
        iVar9 = _DAT_01ed319c;
        if (local_14[1] <= local_18) {
          *local_14 = -1;
          local_14 = (int *)&DAT_01ed31a0;
          iVar8 = 0;
          if (iVar9 < 1) {
            return;
          }
          while ((local_18 != *local_14 || (local_14 == piVar4))) {
            iVar8 = iVar8 + 1;
            local_14 = local_14 + 0x14;
            if (_DAT_01ed319c <= iVar8) {
              return;
            }
          }
          if (local_14 == (int *)0x0) {
            return;
          }
        }
        engine_special_cpp_FUN_00563257();
        piVar4[2] = piVar4[2] + piVar4[3];
        piVar4[6] = piVar4[6] + piVar4[7];
        piVar4[8] = piVar4[8] + piVar4[9];
        piVar4[10] = piVar4[10] + piVar4[0xb];
        piVar4[4] = piVar4[4] + piVar4[5];
        piVar4[0xe] = piVar4[0xe] + piVar4[0xf];
        piVar4[0x10] = piVar4[0x10] + piVar4[0x11];
        piVar4[0xc] = piVar4[0xc] + piVar4[0xd];
        local_14[2] = local_14[2] + local_14[3];
        local_14[6] = local_14[6] + local_14[7];
        local_14[8] = local_14[8] + local_14[9];
        local_14[10] = local_14[10] + local_14[0xb];
        local_14[4] = local_14[4] + local_14[5];
        local_18 = local_18 + 1;
        local_14[0xe] = local_14[0xe] + local_14[0xf];
        local_14[0x10] = local_14[0x10] + local_14[0x11];
        local_14[0xc] = local_14[0xc] + local_14[0xd];
      } while( true );
    }
  }
  return;
}
