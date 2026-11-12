// Name: core_asgaya.cpp_rasterizePolygonCustom_FUN_005a23c0
// Address: 005a23c0
// Address Range: [[005a23c0, 005a2865]]
// Convention: __cdecl
// Signature: void __cdecl core_asgaya_cpp_rasterizePolygonCustom_FUN_005a23c0(SRenderVertex *vertex_buffer,int vertex_count,CustomScanlineFunc *scanline_renderer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_asgaya_cpp_rasterizePolygonCustom_FUN_005a23c0(SRenderVertex *vertex_buffer,int vertex_count,CustomScanlineFunc *scanline_renderer)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  SSoftwareEdge *right;
  SSoftwareEdge *left;
  int iVar4;
  SRenderVertex *pSVar5;
  int iVar6;
  SRenderVertex *pSVar7;
  uint uVar8;
  SRenderVertex *pSVar9;
  int iVar10;
  int local_18;
  int local_14;
  
  iVar10 = 0;
  pSVar5 = vertex_buffer;
  if (0 < vertex_count) {
    do {
      if ((int)((pSVar5->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar5->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar5->projected_vertex).transformed_z);
        (pSVar5->projected_vertex).screen_x =
             (int)(((longlong)(pSVar5->projected_vertex).transformed_x * (longlong)_DAT_01c6b598) /
                  (longlong)(pSVar5->projected_vertex).transformed_z) + _DAT_01c6b5a0;
        (pSVar5->projected_vertex).screen_y =
             (int)(((longlong)(pSVar5->projected_vertex).transformed_y * (longlong)_DAT_01c6b59c) /
                  (longlong)(pSVar5->projected_vertex).transformed_z) + _DAT_01c6b5a4;
      }
      iVar10 = iVar10 + 1;
      pSVar5 = pSVar5 + 1;
    } while (iVar10 < vertex_count);
  }
  if ((DAT_007303fc != 0) &&
     (iVar10 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                         (vertex_buffer,vertex_buffer + 1,vertex_buffer + 2), iVar10 == 0)) {
    return;
  }
  _DAT_01ed3198 = _DAT_01ed3198 + 1;
  switch(_DAT_01c6e2b8) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_00515920(vertex_buffer,vertex_count);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_00515990(vertex_buffer,vertex_count);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_00515a10(vertex_buffer,vertex_count);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_00515990(vertex_buffer,vertex_count);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_00515a80(vertex_buffer,vertex_count);
  }
  _DAT_02d24d80 = 0;
  _DAT_02d25288 = 0;
  local_18 = 0;
  _DAT_02d25284 = 0x4b0;
  if (0 < vertex_count) {
    do {
      iVar10 = local_18 + 1;
      if (vertex_count <= iVar10) {
        iVar10 = 0;
      }
      pSVar7 = vertex_buffer + iVar10;
      pSVar5 = vertex_buffer + local_18;
      iVar3 = (pSVar7->projected_vertex).screen_y >> 0x10;
      iVar10 = (pSVar5->projected_vertex).screen_y >> 0x10;
      if (iVar10 != iVar3) {
        iVar4 = iVar3;
        pSVar9 = pSVar7;
        if ((pSVar7->projected_vertex).screen_y < (pSVar5->projected_vertex).screen_y) {
          iVar4 = iVar10;
          iVar10 = iVar3;
          pSVar9 = pSVar5;
          pSVar5 = pSVar7;
        }
        iVar6 = _DAT_02d24d80 * 0x50;
        *(int *)(&DAT_02d24d84 + iVar6) = iVar10;
        iVar3 = _DAT_02d25284;
        *(int *)(iVar6 + 0x2d24d88) = iVar4;
        if (iVar10 < iVar3) {
          _DAT_02d25284 = iVar10;
        }
        if (_DAT_02d25288 < iVar4) {
          _DAT_02d25288 = iVar4;
        }
        *(int *)(iVar6 + 0x2d24d8c) = (pSVar5->projected_vertex).screen_x;
        *(int *)(iVar6 + 0x2d24dac) = (pSVar5->projected_vertex).transformed_z << 8;
        *(int *)(iVar6 + 0x2d24d94) = pSVar5->r;
        uVar8 = (pSVar9->projected_vertex).screen_y - (pSVar5->projected_vertex).screen_y;
        if (uVar8 < 0x10000) {
          iVar10 = 0;
        }
        else {
          iVar10 = (int)(0xffffffff / (ulonglong)uVar8);
        }
        lVar2 = (longlong)iVar10 *
                (longlong)
                ((pSVar9->projected_vertex).screen_x - (pSVar5->projected_vertex).screen_x);
        *(uint *)(iVar6 + 0x2d24d90) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10
        ;
        lVar2 = (longlong)iVar10 *
                (longlong)
                (((pSVar9->projected_vertex).transformed_z -
                 (pSVar5->projected_vertex).transformed_z) * 0x100);
        *(uint *)(iVar6 + 0x2d24db0) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10
        ;
        lVar2 = (longlong)iVar10 * (longlong)(pSVar9->r - pSVar5->r);
        *(uint *)(iVar6 + 0x2d24d98) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10
        ;
        uVar8 = (uint)(ushort)((ushort)(pSVar5->projected_vertex).screen_y ^ 0xffff);
        lVar2 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar6 + 0x2d24d90);
        *(int *)(iVar6 + 0x2d24d8c) =
             *(int *)(iVar6 + 0x2d24d8c) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar6 + 0x2d24db0);
        *(uint *)(iVar6 + 0x2d24dac) =
             *(int *)(iVar6 + 0x2d24dac) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar6 + 0x2d24d98);
        _DAT_02d24d80 = _DAT_02d24d80 + 1;
        *(uint *)(iVar6 + 0x2d24d94) =
             *(int *)(iVar6 + 0x2d24d94) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
      }
      local_18 = local_18 + 1;
    } while (local_18 < vertex_count);
  }
  right = (SSoftwareEdge *)&DAT_02d24d84;
  iVar10 = 0;
  if (0 < _DAT_02d24d80) {
    do {
      if ((_DAT_02d25284 == (right->base).y_min) && (right != (SSoftwareEdge *)0x0))
      goto LAB_005a24d3;
      iVar10 = iVar10 + 1;
      right = right + 1;
    } while (iVar10 < _DAT_02d24d80);
  }
  right = (SSoftwareEdge *)0x0;
LAB_005a24d3:
  if (right != (SSoftwareEdge *)0x0) {
    iVar10 = 0;
    left = (SSoftwareEdge *)&DAT_02d24d84;
    if (0 < _DAT_02d24d80) {
      do {
        if ((_DAT_02d25284 == (left->base).y_min) && (left != right)) goto LAB_005a250a;
        iVar10 = iVar10 + 1;
        left = left + 1;
      } while (iVar10 < _DAT_02d24d80);
    }
    left = (SSoftwareEdge *)0x0;
LAB_005a250a:
    if (left != (SSoftwareEdge *)0x0) {
      local_14 = _DAT_02d25284;
      do {
        if ((right->base).y_max <= local_14) {
          (right->base).y_min = -1;
          iVar10 = 0;
          right = (SSoftwareEdge *)&DAT_02d24d84;
          if (0 < _DAT_02d24d80) {
            do {
              if ((local_14 == (right->base).y_min) && (right != left)) goto LAB_005a255c;
              iVar10 = iVar10 + 1;
              right = right + 1;
            } while (iVar10 < _DAT_02d24d80);
          }
          right = (SSoftwareEdge *)0x0;
LAB_005a255c:
          if (right == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((left->base).y_max <= local_14) {
          (left->base).y_min = -1;
          iVar10 = 0;
          left = (SSoftwareEdge *)&DAT_02d24d84;
          if (0 < _DAT_02d24d80) {
            do {
              if ((local_14 == (left->base).y_min) && (left != right)) goto LAB_005a25a4;
              iVar10 = iVar10 + 1;
              left = left + 1;
            } while (iVar10 < _DAT_02d24d80);
          }
          left = (SSoftwareEdge *)0x0;
LAB_005a25a4:
          if (left == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        (*scanline_renderer)(local_14,right,left);
        piVar1 = &(right->base).x_current;
        *piVar1 = *piVar1 + (right->base).x_gradient;
        (right->base).depth_current = (right->base).depth_current + (right->base).depth_gradient;
        (right->base).red_current = (right->base).red_current + (right->base).red_gradient;
        (left->base).x_current = (left->base).x_current + (left->base).x_gradient;
        local_14 = local_14 + 1;
        (left->base).depth_current = (left->base).depth_current + (left->base).depth_gradient;
        (left->base).red_current = (left->base).red_current + (left->base).red_gradient;
      } while( true );
    }
  }
  return;
}
