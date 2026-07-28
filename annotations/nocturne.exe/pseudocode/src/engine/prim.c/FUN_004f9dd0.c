// Name: engine_prim.c_FUN_004f9dd0
// Address: 004f9dd0
// Address Range: [[004f9dd0, 004fa2dc]]
// Convention: unknown
// Signature: void engine_prim_c_FUN_004f9dd0(SRenderVertex *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_prim_c_FUN_004f9dd0(SRenderVertex *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  SSoftwareEdge *edge_ptr;
  SRenderVertex *pSVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  SRenderVertex *pSVar11;
  bool bVar12;
  int local_1c;
  SSoftwareEdge *local_14;
  
  if ((DAT_005b7644 != 0) && (iVar8 = 0, pSVar4 = param_1, 0 < param_2)) {
    do {
      if ((int)((pSVar4->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar4->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar4->projected_vertex).transformed_z);
        (pSVar4->projected_vertex).screen_x =
             (int)(((longlong)(pSVar4->projected_vertex).transformed_x * (longlong)_DAT_01c00c48) /
                  (longlong)(pSVar4->projected_vertex).transformed_z) + _DAT_01c00c50;
        (pSVar4->projected_vertex).screen_y =
             (int)(((longlong)(pSVar4->projected_vertex).transformed_y * (longlong)_DAT_01c00c4c) /
                  (longlong)(pSVar4->projected_vertex).transformed_z) + _DAT_01c00c54;
      }
      iVar8 = iVar8 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar8 < param_2);
  }
  if (DAT_006b0280 != 0) {
    pSVar11 = param_1 + 1;
    pSVar4 = param_1 + 2;
    if (param_2 < 4) {
      iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10(param_1,pSVar11,pSVar4);
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
          iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10(param_1,pSVar11,pSVar4);
          if (iVar3 == 0) {
            iVar7 = iVar7 + 1;
          }
          pSVar11 = pSVar11 + 1;
          iVar9 = iVar9 + 1;
          pSVar4 = pSVar4 + 1;
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
      pSVar4 = param_1 + iVar8;
      pSVar11 = param_1 + local_1c;
      iVar8 = (pSVar11->projected_vertex).screen_y >> 0x10;
      iVar7 = (pSVar4->projected_vertex).screen_y >> 0x10;
      if (iVar8 != iVar7) {
        iVar9 = iVar7;
        pSVar6 = pSVar11;
        if ((pSVar4->projected_vertex).screen_y < (pSVar11->projected_vertex).screen_y) {
          iVar9 = iVar8;
          pSVar6 = pSVar4;
          iVar8 = iVar7;
          pSVar4 = pSVar11;
        }
        iVar3 = _DAT_01e52a68 * 0x48;
        *(int *)(&DAT_01e52a6c + iVar3) = iVar8;
        iVar7 = _DAT_01e52eec;
        *(int *)(iVar3 + 0x1e52a70) = iVar9;
        if (iVar8 < iVar7) {
          _DAT_01e52eec = iVar8;
        }
        if (_DAT_01e52ef0 < iVar9) {
          _DAT_01e52ef0 = iVar9;
        }
        uVar5 = (pSVar4->projected_vertex).screen_y - (pSVar6->projected_vertex).screen_y;
        if (uVar5 < 0x10000) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)(0xffffffff / (ulonglong)uVar5);
        }
        uVar10 = (uint)(ushort)((ushort)(pSVar6->projected_vertex).screen_y ^ 0xffff);
        lVar2 = (longlong)iVar8 *
                (longlong)
                ((pSVar4->projected_vertex).screen_x - (pSVar6->projected_vertex).screen_x);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e52a78) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e52a74) =
             (pSVar6->projected_vertex).screen_x +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->u - pSVar6->u);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e52a88) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e52a84) =
             pSVar6->u + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->v - pSVar6->v);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e52a90) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e52a8c) =
             pSVar6->v + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->r - pSVar6->r);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e52a80) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e52a7c) =
             pSVar6->r + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->a - pSVar6->a);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e52aa0) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e52a9c) =
             pSVar6->a + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 *
                (longlong)
                ((pSVar4->projected_vertex).transformed_z - (pSVar6->projected_vertex).transformed_z
                );
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e52a98) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e52a94) =
             (pSVar6->projected_vertex).transformed_z +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        _DAT_01e52a68 = _DAT_01e52a68 + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < param_2);
  }
  edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_004f9830(_DAT_01e52eec,(SSoftwareEdge *)0x0);
  if ((edge_ptr != (SSoftwareEdge *)0x0) &&
     (local_14 = engine_prim_c_findEdgeInBuffer_FUN_004f9830(_DAT_01e52eec,edge_ptr),
     iVar8 = _DAT_01e52eec, local_14 != (SSoftwareEdge *)0x0)) {
    iVar7 = _DAT_01e52eec - INT_005be1e4;
    bVar12 = SBORROW4(_DAT_01e52eec,INT_005be1e4);
    while (bVar12 != iVar7 < 0) {
      if ((edge_ptr->base).y_max <= iVar8) {
        (edge_ptr->base).y_min = -1;
        edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_004f9830(iVar8,local_14);
        if (edge_ptr == (SSoftwareEdge *)0x0) {
          return;
        }
      }
      if ((local_14->base).y_max <= iVar8) {
        (local_14->base).y_min = -1;
        local_14 = engine_prim_c_findEdgeInBuffer_FUN_004f9830(iVar8,edge_ptr);
        if (local_14 == (SSoftwareEdge *)0x0) {
          return;
        }
      }
      engine_special_cpp_renderScanline_FUN_00530710(local_14,edge_ptr,iVar8);
      piVar1 = &(edge_ptr->base).x_current;
      *piVar1 = *piVar1 + (edge_ptr->base).x_gradient;
      (edge_ptr->base).u_current = (edge_ptr->base).u_current + (edge_ptr->base).u_gradient;
      (edge_ptr->base).v_current = (edge_ptr->base).v_current + (edge_ptr->base).v_gradient;
      (edge_ptr->base).red_current = (edge_ptr->base).red_current + (edge_ptr->base).red_gradient;
      (edge_ptr->base).depth_current =
           (edge_ptr->base).depth_current + (edge_ptr->base).depth_gradient;
      (edge_ptr->base).alpha_current =
           (edge_ptr->base).alpha_current + (edge_ptr->base).alpha_gradient;
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
