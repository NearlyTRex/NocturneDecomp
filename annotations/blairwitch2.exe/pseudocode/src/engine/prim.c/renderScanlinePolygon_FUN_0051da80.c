// Name: engine_prim.c_renderScanlinePolygon_FUN_0051da80
// Address: 0051da80
// Address Range: [[0051da80, 0051e10d]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderScanlinePolygon_FUN_0051da80(SRenderVertex *vertices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_renderScanlinePolygon_FUN_0051da80(SRenderVertex *vertices,int vertex_count)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  SSoftwareEdge *left;
  SRenderVertex *pSVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  int iVar8;
  SRenderVertex *pSVar9;
  uint uVar10;
  int iVar11;
  int local_1c;
  SSoftwareEdge *local_14;
  
  if ((DAT_006141e0 != 0) && (iVar8 = 0, pSVar4 = vertices, 0 < vertex_count)) {
    do {
      if ((int)((pSVar4->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar4->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar4->projected_vertex).transformed_z);
        (pSVar4->projected_vertex).screen_x =
             (int)(((longlong)(pSVar4->projected_vertex).transformed_x * (longlong)_DAT_01c35e38) /
                  (longlong)(pSVar4->projected_vertex).transformed_z) + _DAT_01c35e40;
        (pSVar4->projected_vertex).screen_y =
             (int)(((longlong)(pSVar4->projected_vertex).transformed_y * (longlong)_DAT_01c35e3c) /
                  (longlong)(pSVar4->projected_vertex).transformed_z) + _DAT_01c35e44;
      }
      iVar8 = iVar8 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar8 < vertex_count);
  }
  if (DAT_0070ca7c != 0) {
    pSVar4 = vertices + 1;
    pSVar9 = vertices + 2;
    if (vertex_count < 4) {
      iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760(vertices,pSVar4,pSVar9);
      if (iVar8 == 0) {
        return;
      }
    }
    else {
      iVar8 = vertex_count + -2;
      iVar11 = 0;
      iVar7 = 0;
      if (0 < iVar8) {
        do {
          iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760(vertices,pSVar4,pSVar9);
          if (iVar3 == 0) {
            iVar7 = iVar7 + 1;
          }
          pSVar4 = pSVar4 + 1;
          iVar11 = iVar11 + 1;
          pSVar9 = pSVar9 + 1;
        } while (iVar11 < iVar8);
      }
      if (iVar7 == iVar8) {
        return;
      }
    }
  }
  if ((_DAT_01c37788 != 0) && (DAT_0070ca74 == 0)) {
    engine_special_cpp_drawPolygon_FUN_0055f8f0(vertices,vertex_count,_DAT_01c38b54);
    _DAT_01e61b58 = _DAT_01e61b58 + vertex_count + -2;
    return;
  }
  _DAT_01e61b58 = _DAT_01e61b58 + 1;
  switch(_DAT_01c38b58) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_0051c5c0(vertices,vertex_count);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_0051c630(vertices,vertex_count);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_0051c6b0(vertices,vertex_count);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_0051c630(vertices,vertex_count);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_0051c720(vertices,vertex_count);
  }
  _DAT_01e62064 = 0;
  _DAT_01e61b5c = 0;
  local_1c = 0;
  _DAT_01e62060 = 0x4b0;
  if (0 < vertex_count) {
    do {
      iVar8 = local_1c + 1;
      if (vertex_count <= iVar8) {
        iVar8 = 0;
      }
      pSVar4 = vertices + iVar8;
      pSVar9 = vertices + local_1c;
      iVar8 = (pSVar9->projected_vertex).screen_y >> 0x10;
      iVar7 = (pSVar4->projected_vertex).screen_y >> 0x10;
      if (iVar8 != iVar7) {
        iVar11 = iVar7;
        pSVar6 = pSVar9;
        if ((pSVar4->projected_vertex).screen_y < (pSVar9->projected_vertex).screen_y) {
          iVar11 = iVar8;
          iVar8 = iVar7;
          pSVar6 = pSVar4;
          pSVar4 = pSVar9;
        }
        iVar3 = _DAT_01e61b5c * 0x50;
        *(int *)(&DAT_01e61b60 + iVar3) = iVar8;
        iVar7 = _DAT_01e62060;
        *(int *)(iVar3 + 0x1e61b64) = iVar11;
        if (iVar8 < iVar7) {
          _DAT_01e62060 = iVar8;
        }
        if (_DAT_01e62064 < iVar11) {
          _DAT_01e62064 = iVar11;
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
        *(uint *)(iVar3 + 0x1e61b6c) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e61b68) =
             (pSVar6->projected_vertex).screen_x +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->u - pSVar6->u);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e61b7c) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e61b78) =
             pSVar6->u + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->v - pSVar6->v);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e61b84) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e61b80) =
             pSVar6->v + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->r - pSVar6->r);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e61b74) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e61b70) =
             pSVar6->r + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->a - pSVar6->a);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e61b94) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e61b90) =
             pSVar6->a + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 *
                (longlong)
                ((pSVar4->projected_vertex).transformed_z - (pSVar6->projected_vertex).transformed_z
                );
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e61b8c) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e61b88) =
             (pSVar6->projected_vertex).transformed_z +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->g - pSVar6->g);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e61b9c) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e61b98) =
             pSVar6->g + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->b - pSVar6->b);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e61ba4) = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e61ba0) =
             pSVar6->b + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        _DAT_01e61b5c = _DAT_01e61b5c + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < vertex_count);
  }
  iVar8 = _DAT_01e62060;
  local_14 = (SSoftwareEdge *)&DAT_01e61b60;
  iVar7 = 0;
  if (0 < _DAT_01e61b5c) {
    do {
      if ((_DAT_01e62060 == (local_14->base).y_min) && (local_14 != (SSoftwareEdge *)0x0))
      goto LAB_0051dc42;
      iVar7 = iVar7 + 1;
      local_14 = local_14 + 1;
    } while (iVar7 < _DAT_01e61b5c);
  }
  local_14 = (SSoftwareEdge *)0x0;
LAB_0051dc42:
  if (local_14 != (SSoftwareEdge *)0x0) {
    iVar7 = 0;
    left = (SSoftwareEdge *)&DAT_01e61b60;
    if (0 < _DAT_01e61b5c) {
      do {
        if ((_DAT_01e62060 == (left->base).y_min) && (left != local_14)) goto LAB_0051dc81;
        iVar7 = iVar7 + 1;
        left = left + 1;
      } while (iVar7 < _DAT_01e61b5c);
    }
    left = (SSoftwareEdge *)0x0;
LAB_0051dc81:
    if (left != (SSoftwareEdge *)0x0) {
      do {
        iVar7 = _DAT_01e61b5c;
        if ((local_14->base).y_max <= iVar8) {
          (local_14->base).y_min = -1;
          local_14 = (SSoftwareEdge *)&DAT_01e61b60;
          iVar11 = 0;
          if (0 < iVar7) {
            do {
              if ((iVar8 == (local_14->base).y_min) && (local_14 != left)) goto LAB_0051dcd6;
              iVar11 = iVar11 + 1;
              local_14 = local_14 + 1;
            } while (iVar11 < _DAT_01e61b5c);
          }
          local_14 = (SSoftwareEdge *)0x0;
LAB_0051dcd6:
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        iVar7 = _DAT_01e61b5c;
        if ((left->base).y_max <= iVar8) {
          (left->base).y_min = -1;
          iVar11 = 0;
          left = (SSoftwareEdge *)&DAT_01e61b60;
          if (iVar7 < 1) {
            return;
          }
          while ((iVar8 != (left->base).y_min || (left == local_14))) {
            iVar11 = iVar11 + 1;
            left = left + 1;
            if (_DAT_01e61b5c <= iVar11) {
              return;
            }
          }
          if (left == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        engine_special_cpp_FUN_0055d6d7(left,local_14,iVar8);
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + *(int *)(iVar8 + 0xc);
        *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + *(int *)(iVar8 + 0x1c);
        *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + *(int *)(iVar8 + 0x24);
        *(int *)(iVar8 + 0x28) = *(int *)(iVar8 + 0x28) + *(int *)(iVar8 + 0x2c);
        *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + *(int *)(iVar8 + 0x14);
        *(int *)(iVar8 + 0x38) = *(int *)(iVar8 + 0x38) + *(int *)(iVar8 + 0x3c);
        *(int *)(iVar8 + 0x40) = *(int *)(iVar8 + 0x40) + *(int *)(iVar8 + 0x44);
        *(int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) + *(int *)(iVar8 + 0x34);
        (left->base).x_current = (left->base).x_current + (left->base).x_gradient;
        (left->base).u_current = (left->base).u_current + (left->base).u_gradient;
        (left->base).v_current = (left->base).v_current + (left->base).v_gradient;
        iVar7 = left->green_current;
        iVar11 = left->blue_current;
        iVar3 = (left->base).alpha_current;
        (left->base).depth_current = (left->base).depth_current + (left->base).depth_gradient;
        iVar1 = left->green_gradient;
        (left->base).red_current = (left->base).red_current + (left->base).red_gradient;
        left->green_current = iVar7 + iVar1;
        iVar7 = (left->base).alpha_gradient;
        left->blue_current = iVar11 + left->blue_gradient;
        (left->base).alpha_current = iVar3 + iVar7;
      } while( true );
    }
  }
  return;
}
