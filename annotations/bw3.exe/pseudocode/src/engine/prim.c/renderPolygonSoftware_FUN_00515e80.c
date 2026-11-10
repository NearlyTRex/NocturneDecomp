// Name: engine_prim.c_renderPolygonSoftware_FUN_00515e80
// Address: 00515e80
// Address Range: [[00515e80, 005163a0]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderPolygonSoftware_FUN_00515e80(SRenderVertex *vertices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_renderPolygonSoftware_FUN_00515e80(SRenderVertex *vertices,int vertex_count)

{
  longlong lVar1;
  SRenderVertex *pSVar2;
  int iVar3;
  SSoftwareEdge *edge_ptr;
  uint uVar4;
  int iVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  SRenderVertex *pSVar10;
  bool bVar11;
  int local_1c;
  int local_18;
  SSoftwareEdge *local_14;
  
  if ((DAT_005fba40 != 0) && (iVar8 = 0, pSVar2 = vertices, 0 < vertex_count)) {
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
      iVar8 = iVar8 + 1;
      pSVar2 = pSVar2 + 0x30;
    } while (iVar8 < vertex_count);
  }
  if (DAT_007303fc != 0) {
    pSVar10 = vertices + 0x30;
    pSVar2 = vertices + 0x60;
    if (vertex_count < 4) {
      iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0(vertices,pSVar10,pSVar2);
      if (iVar8 == 0) {
        return;
      }
    }
    else {
      iVar8 = vertex_count + -2;
      iVar5 = 0;
      iVar7 = 0;
      if (0 < iVar8) {
        do {
          iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0(vertices,pSVar10,pSVar2);
          if (iVar3 == 0) {
            iVar7 = iVar7 + 1;
          }
          pSVar10 = pSVar10 + 0x30;
          iVar5 = iVar5 + 1;
          pSVar2 = pSVar2 + 0x30;
        } while (iVar5 < iVar8);
      }
      if (iVar7 == iVar8) {
        return;
      }
    }
  }
  if ((_DAT_01c6cee8 != 0) && (DAT_007303f4 == 0)) {
    _DAT_01ed3198 = _DAT_01ed3198 + vertex_count + -2;
    engine_special_cpp_drawPolygon_FUN_00565c10(vertices,vertex_count,_DAT_01c6e2b4);
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
  _DAT_01ed3190 = 0;
  _DAT_01ed2c88 = 0;
  local_1c = 0;
  _DAT_01ed318c = 0x4b0;
  if (0 < vertex_count) {
    do {
      iVar8 = local_1c + 1;
      if (vertex_count <= iVar8) {
        iVar8 = 0;
      }
      pSVar2 = vertices + iVar8 * 0x30;
      pSVar10 = vertices + local_1c * 0x30;
      iVar5 = *(int *)(pSVar10 + 0x14) >> 0x10;
      iVar8 = *(int *)(pSVar2 + 0x14) >> 0x10;
      if (iVar5 != iVar8) {
        iVar7 = iVar5;
        pSVar6 = pSVar10;
        if (*(int *)(pSVar2 + 0x14) < *(int *)(pSVar10 + 0x14)) {
          iVar7 = iVar8;
          pSVar6 = pSVar2;
          iVar8 = iVar5;
          pSVar2 = pSVar10;
        }
        iVar3 = _DAT_01ed2c88 * 0x50;
        *(int *)(&DAT_01ed2c8c + iVar3) = iVar7;
        iVar5 = _DAT_01ed318c;
        *(int *)(iVar3 + 0x1ed2c90) = iVar8;
        if (iVar7 < iVar5) {
          _DAT_01ed318c = iVar7;
        }
        if (_DAT_01ed3190 < iVar8) {
          _DAT_01ed3190 = iVar8;
        }
        if ((uint)(*(int *)(pSVar2 + 0x14) - *(int *)(pSVar6 + 0x14)) < 0x10000) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)(0xffffffff /
                       (ulonglong)(uint)(*(int *)(pSVar2 + 0x14) - *(int *)(pSVar6 + 0x14)));
        }
        uVar9 = (uint)(ushort)((ushort)*(uint *)(pSVar6 + 0x14) ^ 0xffff);
        lVar1 = (longlong)iVar8 * (longlong)(*(int *)(pSVar2 + 0x10) - *(int *)(pSVar6 + 0x10));
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1ed2c98) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar3 + 0x1ed2c94) =
             *(int *)(pSVar6 + 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(*(int *)(pSVar2 + 0x18) - *(int *)(pSVar6 + 0x18));
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1ed2ca8) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar3 + 0x1ed2ca4) =
             *(int *)(pSVar6 + 0x18) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(*(int *)(pSVar2 + 0x1c) - *(int *)(pSVar6 + 0x1c));
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1ed2cb0) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar3 + 0x1ed2cac) =
             *(int *)(pSVar6 + 0x1c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(*(int *)(pSVar2 + 0x20) - *(int *)(pSVar6 + 0x20));
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1ed2ca0) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar3 + 0x1ed2c9c) =
             *(int *)(pSVar6 + 0x20) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(*(int *)(pSVar2 + 0x2c) - *(int *)(pSVar6 + 0x2c));
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1ed2cc0) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar3 + 0x1ed2cbc) =
             *(int *)(pSVar6 + 0x2c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(*(int *)(pSVar2 + 8) - *(int *)(pSVar6 + 8));
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1ed2cb8) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar3 + 0x1ed2cb4) =
             *(int *)(pSVar6 + 8) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        _DAT_01ed2c88 = _DAT_01ed2c88 + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < vertex_count);
  }
  edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_005158e0(_DAT_01ed318c,(SSoftwareEdge *)0x0);
  if ((edge_ptr != (SSoftwareEdge *)0x0) &&
     (local_14 = engine_prim_c_findEdgeInBuffer_FUN_005158e0(_DAT_01ed318c,edge_ptr),
     local_14 != (SSoftwareEdge *)0x0)) {
    local_18 = _DAT_01ed318c;
    iVar8 = _DAT_01ed318c - DAT_00603974;
    bVar11 = SBORROW4(_DAT_01ed318c,DAT_00603974);
    while (bVar11 != iVar8 < 0) {
      if (*(int *)(edge_ptr + 4) <= local_18) {
        *(uint *)edge_ptr = 0xffffffff;
        edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_005158e0(local_18,local_14);
        if (edge_ptr == (SSoftwareEdge *)0x0) {
          return;
        }
      }
      if (*(int *)(local_14 + 4) <= local_18) {
        *(uint *)local_14 = 0xffffffff;
        local_14 = engine_prim_c_findEdgeInBuffer_FUN_005158e0(local_18,edge_ptr);
        if (local_14 == (SSoftwareEdge *)0x0) {
          return;
        }
      }
      engine_special_cpp_FUN_00563257();
      *(int *)(edge_ptr + 8) = *(int *)(edge_ptr + 8) + *(int *)(edge_ptr + 0xc);
      *(int *)(edge_ptr + 0x18) = *(int *)(edge_ptr + 0x18) + *(int *)(edge_ptr + 0x1c);
      *(int *)(edge_ptr + 0x20) = *(int *)(edge_ptr + 0x20) + *(int *)(edge_ptr + 0x24);
      *(int *)(edge_ptr + 0x10) = *(int *)(edge_ptr + 0x10) + *(int *)(edge_ptr + 0x14);
      *(int *)(edge_ptr + 0x28) = *(int *)(edge_ptr + 0x28) + *(int *)(edge_ptr + 0x2c);
      *(int *)(edge_ptr + 0x30) = *(int *)(edge_ptr + 0x30) + *(int *)(edge_ptr + 0x34);
      *(int *)(local_14 + 8) = *(int *)(local_14 + 8) + *(int *)(local_14 + 0xc);
      *(int *)(local_14 + 0x18) = *(int *)(local_14 + 0x18) + *(int *)(local_14 + 0x1c);
      *(int *)(local_14 + 0x20) = *(int *)(local_14 + 0x20) + *(int *)(local_14 + 0x24);
      local_18 = local_18 + 1;
      *(int *)(local_14 + 0x10) = *(int *)(local_14 + 0x10) + *(int *)(local_14 + 0x14);
      iVar5 = DAT_00603974;
      *(int *)(local_14 + 0x28) = *(int *)(local_14 + 0x28) + *(int *)(local_14 + 0x2c);
      *(int *)(local_14 + 0x30) = *(int *)(local_14 + 0x30) + *(int *)(local_14 + 0x34);
      iVar8 = local_18 - iVar5;
      bVar11 = SBORROW4(local_18,iVar5);
    }
  }
  return;
}
