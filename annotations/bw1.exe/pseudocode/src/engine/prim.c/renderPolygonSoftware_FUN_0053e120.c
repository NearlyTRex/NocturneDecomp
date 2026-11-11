// Name: engine_prim.c_renderPolygonSoftware_FUN_0053e120
// Address: 0053e120
// Address Range: [[0053e120, 0053e640]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderPolygonSoftware_FUN_0053e120(SRenderVertex *vertices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_renderPolygonSoftware_FUN_0053e120(SRenderVertex *vertices,int vertex_count)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  SSoftwareEdge *edge_ptr;
  SRenderVertex *pSVar4;
  uint uVar5;
  int iVar6;
  SRenderVertex *pSVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  SRenderVertex *pSVar11;
  bool bVar12;
  int local_1c;
  int local_18;
  SSoftwareEdge *local_14;
  
  if ((DAT_0061b4c0 != 0) && (iVar9 = 0, pSVar4 = vertices, 0 < vertex_count)) {
    do {
      if ((int)((pSVar4->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar4->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar4->projected_vertex).transformed_z);
        (pSVar4->projected_vertex).screen_x =
             (int)(((longlong)(pSVar4->projected_vertex).transformed_x * (longlong)_DAT_01c4eff8) /
                  (longlong)(pSVar4->projected_vertex).transformed_z) + _DAT_01c4f000;
        (pSVar4->projected_vertex).screen_y =
             (int)(((longlong)(pSVar4->projected_vertex).transformed_y * (longlong)_DAT_01c4effc) /
                  (longlong)(pSVar4->projected_vertex).transformed_z) + _DAT_01c4f004;
      }
      iVar9 = iVar9 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar9 < vertex_count);
  }
  if (DAT_00713a7c != 0) {
    pSVar11 = vertices + 1;
    pSVar4 = vertices + 2;
    if (vertex_count < 4) {
      iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60(vertices,pSVar11,pSVar4);
      if (iVar9 == 0) {
        return;
      }
    }
    else {
      iVar9 = vertex_count + -2;
      iVar6 = 0;
      iVar8 = 0;
      if (0 < iVar9) {
        do {
          iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60(vertices,pSVar11,pSVar4);
          if (iVar3 == 0) {
            iVar8 = iVar8 + 1;
          }
          pSVar11 = pSVar11 + 1;
          iVar6 = iVar6 + 1;
          pSVar4 = pSVar4 + 1;
        } while (iVar6 < iVar9);
      }
      if (iVar8 == iVar9) {
        return;
      }
    }
  }
  if ((_DAT_01c50948 != 0) && (DAT_00713a74 == 0)) {
    _DAT_01e7dac8 = _DAT_01e7dac8 + vertex_count + -2;
    engine_special_cpp_drawPolygon_FUN_00582340(vertices,vertex_count,_DAT_01c51d14);
    return;
  }
  _DAT_01e7dac8 = _DAT_01e7dac8 + 1;
  switch(_DAT_01c51d18) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_0053dbc0(vertices,vertex_count);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_0053dc30(vertices,vertex_count);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_0053dcb0(vertices,vertex_count);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_0053dc30(vertices,vertex_count);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_0053dd20(vertices,vertex_count);
  }
  _DAT_01e7dac0 = 0;
  _DAT_01e7d5b8 = 0;
  local_1c = 0;
  _DAT_01e7dabc = 0x4b0;
  if (0 < vertex_count) {
    do {
      iVar9 = local_1c + 1;
      if (vertex_count <= iVar9) {
        iVar9 = 0;
      }
      pSVar4 = vertices + iVar9;
      pSVar11 = vertices + local_1c;
      iVar6 = (pSVar11->projected_vertex).screen_y >> 0x10;
      iVar9 = (pSVar4->projected_vertex).screen_y >> 0x10;
      if (iVar6 != iVar9) {
        iVar8 = iVar6;
        pSVar7 = pSVar11;
        if ((pSVar4->projected_vertex).screen_y < (pSVar11->projected_vertex).screen_y) {
          iVar8 = iVar9;
          pSVar7 = pSVar4;
          iVar9 = iVar6;
          pSVar4 = pSVar11;
        }
        iVar3 = _DAT_01e7d5b8 * 0x50;
        *(int *)(&DAT_01e7d5bc + iVar3) = iVar8;
        iVar6 = _DAT_01e7dabc;
        *(int *)(iVar3 + 0x1e7d5c0) = iVar9;
        if (iVar8 < iVar6) {
          _DAT_01e7dabc = iVar8;
        }
        if (_DAT_01e7dac0 < iVar9) {
          _DAT_01e7dac0 = iVar9;
        }
        uVar5 = (pSVar4->projected_vertex).screen_y - (pSVar7->projected_vertex).screen_y;
        if (uVar5 < 0x10000) {
          iVar9 = 0;
        }
        else {
          iVar9 = (int)(0xffffffff / (ulonglong)uVar5);
        }
        uVar10 = (uint)(ushort)((ushort)(pSVar7->projected_vertex).screen_y ^ 0xffff);
        lVar2 = (longlong)iVar9 *
                (longlong)
                ((pSVar4->projected_vertex).screen_x - (pSVar7->projected_vertex).screen_x);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e7d5c8) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e7d5c4) =
             (pSVar7->projected_vertex).screen_x +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar9 * (longlong)(pSVar4->u - pSVar7->u);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e7d5d8) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e7d5d4) =
             pSVar7->u + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar9 * (longlong)(pSVar4->v - pSVar7->v);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e7d5e0) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e7d5dc) =
             pSVar7->v + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar9 * (longlong)(pSVar4->r - pSVar7->r);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e7d5d0) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e7d5cc) =
             pSVar7->r + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar9 * (longlong)(pSVar4->a - pSVar7->a);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e7d5f0) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e7d5ec) =
             pSVar7->a + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar9 *
                (longlong)
                ((pSVar4->projected_vertex).transformed_z - (pSVar7->projected_vertex).transformed_z
                );
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e7d5e8) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e7d5e4) =
             (pSVar7->projected_vertex).transformed_z +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        _DAT_01e7d5b8 = _DAT_01e7d5b8 + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < vertex_count);
  }
  edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_0053db80(_DAT_01e7dabc,(SSoftwareEdge *)0x0);
  if ((edge_ptr != (SSoftwareEdge *)0x0) &&
     (local_14 = engine_prim_c_findEdgeInBuffer_FUN_0053db80(_DAT_01e7dabc,edge_ptr),
     local_14 != (SSoftwareEdge *)0x0)) {
    local_18 = _DAT_01e7dabc;
    iVar9 = _DAT_01e7dabc - DAT_00622a84;
    bVar12 = SBORROW4(_DAT_01e7dabc,DAT_00622a84);
    while (bVar12 != iVar9 < 0) {
      if ((edge_ptr->base).y_max <= local_18) {
        (edge_ptr->base).y_min = -1;
        edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_0053db80(local_18,local_14);
        if (edge_ptr == (SSoftwareEdge *)0x0) {
          return;
        }
      }
      if ((local_14->base).y_max <= local_18) {
        (local_14->base).y_min = -1;
        local_14 = engine_prim_c_findEdgeInBuffer_FUN_0053db80(local_18,edge_ptr);
        if (local_14 == (SSoftwareEdge *)0x0) {
          return;
        }
      }
      engine_special_cpp_FUN_00580127();
      piVar1 = &(edge_ptr->base).x_current;
      *piVar1 = *piVar1 + (edge_ptr->base).x_gradient;
      (edge_ptr->base).u_current = (edge_ptr->base).u_current + (edge_ptr->base).u_gradient;
      (edge_ptr->base).v_current = (edge_ptr->base).v_current + (edge_ptr->base).v_gradient;
      (edge_ptr->base).red_current = (edge_ptr->base).red_current + (edge_ptr->base).red_gradient;
      (edge_ptr->base).depth_current =
           (edge_ptr->base).depth_current + (edge_ptr->base).depth_gradient;
      (edge_ptr->base).alpha_current =
           (edge_ptr->base).alpha_current + (edge_ptr->base).alpha_gradient;
      (local_14->base).x_current = (local_14->base).x_current + (local_14->base).x_gradient;
      (local_14->base).u_current = (local_14->base).u_current + (local_14->base).u_gradient;
      (local_14->base).v_current = (local_14->base).v_current + (local_14->base).v_gradient;
      local_18 = local_18 + 1;
      (local_14->base).red_current = (local_14->base).red_current + (local_14->base).red_gradient;
      iVar6 = DAT_00622a84;
      (local_14->base).depth_current =
           (local_14->base).depth_current + (local_14->base).depth_gradient;
      (local_14->base).alpha_current =
           (local_14->base).alpha_current + (local_14->base).alpha_gradient;
      iVar9 = local_18 - iVar6;
      bVar12 = SBORROW4(local_18,iVar6);
    }
  }
  return;
}
