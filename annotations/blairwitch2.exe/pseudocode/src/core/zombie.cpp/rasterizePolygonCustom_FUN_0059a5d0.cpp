// Name: core_zombie.cpp_rasterizePolygonCustom_FUN_0059a5d0
// Address: 0059a5d0
// Address Range: [[0059a5d0, 0059aa75]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_rasterizePolygonCustom_FUN_0059a5d0(SRenderVertex *vertex_buffer,int vertex_count,CustomScanlineFunc *scanline_renderer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_zombie_cpp_rasterizePolygonCustom_FUN_0059a5d0(SRenderVertex *vertex_buffer,int vertex_count,CustomScanlineFunc *scanline_renderer)

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
             (int)(((longlong)(pSVar5->projected_vertex).transformed_x * (longlong)_DAT_01c35e38) /
                  (longlong)(pSVar5->projected_vertex).transformed_z) + _DAT_01c35e40;
        (pSVar5->projected_vertex).screen_y =
             (int)(((longlong)(pSVar5->projected_vertex).transformed_y * (longlong)_DAT_01c35e3c) /
                  (longlong)(pSVar5->projected_vertex).transformed_z) + _DAT_01c35e44;
      }
      iVar10 = iVar10 + 1;
      pSVar5 = pSVar5 + 1;
    } while (iVar10 < vertex_count);
  }
  if ((DAT_0070ca7c != 0) &&
     (iVar10 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                         (vertex_buffer,vertex_buffer + 1,vertex_buffer + 2), iVar10 == 0)) {
    return;
  }
  _DAT_01e61b58 = _DAT_01e61b58 + 1;
  switch(_DAT_01c38b58) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_0051c5c0(vertex_buffer,vertex_count);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_0051c630(vertex_buffer,vertex_count);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_0051c6b0(vertex_buffer,vertex_count);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_0051c630(vertex_buffer,vertex_count);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_0051c720(vertex_buffer,vertex_count);
  }
  _DAT_026672a8 = 0;
  _DAT_026677b0 = 0;
  local_18 = 0;
  _DAT_026677ac = 0x4b0;
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
        iVar6 = _DAT_026672a8 * 0x50;
        *(int *)(&DAT_026672ac + iVar6) = iVar10;
        iVar3 = _DAT_026677ac;
        *(int *)(iVar6 + 0x26672b0) = iVar4;
        if (iVar10 < iVar3) {
          _DAT_026677ac = iVar10;
        }
        if (_DAT_026677b0 < iVar4) {
          _DAT_026677b0 = iVar4;
        }
        *(int *)(iVar6 + 0x26672b4) = (pSVar5->projected_vertex).screen_x;
        *(int *)(iVar6 + 0x26672d4) = (pSVar5->projected_vertex).transformed_z << 8;
        *(int *)(iVar6 + 0x26672bc) = pSVar5->r;
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
        *(uint *)(iVar6 + 0x26672b8) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10
        ;
        lVar2 = (longlong)iVar10 *
                (longlong)
                (((pSVar9->projected_vertex).transformed_z -
                 (pSVar5->projected_vertex).transformed_z) * 0x100);
        *(uint *)(iVar6 + 0x26672d8) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10
        ;
        lVar2 = (longlong)iVar10 * (longlong)(pSVar9->r - pSVar5->r);
        *(uint *)(iVar6 + 0x26672c0) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10
        ;
        uVar8 = (uint)(ushort)((ushort)(pSVar5->projected_vertex).screen_y ^ 0xffff);
        lVar2 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar6 + 0x26672b8);
        *(int *)(iVar6 + 0x26672b4) =
             *(int *)(iVar6 + 0x26672b4) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar6 + 0x26672d8);
        *(uint *)(iVar6 + 0x26672d4) =
             *(int *)(iVar6 + 0x26672d4) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar6 + 0x26672c0);
        _DAT_026672a8 = _DAT_026672a8 + 1;
        *(uint *)(iVar6 + 0x26672bc) =
             *(int *)(iVar6 + 0x26672bc) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
      }
      local_18 = local_18 + 1;
    } while (local_18 < vertex_count);
  }
  right = (SSoftwareEdge *)&DAT_026672ac;
  iVar10 = 0;
  if (0 < _DAT_026672a8) {
    do {
      if ((_DAT_026677ac == (right->base).y_min) && (right != (SSoftwareEdge *)0x0))
      goto LAB_0059a6e3;
      iVar10 = iVar10 + 1;
      right = right + 1;
    } while (iVar10 < _DAT_026672a8);
  }
  right = (SSoftwareEdge *)0x0;
LAB_0059a6e3:
  if (right != (SSoftwareEdge *)0x0) {
    iVar10 = 0;
    left = (SSoftwareEdge *)&DAT_026672ac;
    if (0 < _DAT_026672a8) {
      do {
        if ((_DAT_026677ac == (left->base).y_min) && (left != right)) goto LAB_0059a71a;
        iVar10 = iVar10 + 1;
        left = left + 1;
      } while (iVar10 < _DAT_026672a8);
    }
    left = (SSoftwareEdge *)0x0;
LAB_0059a71a:
    if (left != (SSoftwareEdge *)0x0) {
      local_14 = _DAT_026677ac;
      do {
        if ((right->base).y_max <= local_14) {
          (right->base).y_min = -1;
          iVar10 = 0;
          right = (SSoftwareEdge *)&DAT_026672ac;
          if (0 < _DAT_026672a8) {
            do {
              if ((local_14 == (right->base).y_min) && (right != left)) goto LAB_0059a76c;
              iVar10 = iVar10 + 1;
              right = right + 1;
            } while (iVar10 < _DAT_026672a8);
          }
          right = (SSoftwareEdge *)0x0;
LAB_0059a76c:
          if (right == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((left->base).y_max <= local_14) {
          (left->base).y_min = -1;
          iVar10 = 0;
          left = (SSoftwareEdge *)&DAT_026672ac;
          if (0 < _DAT_026672a8) {
            do {
              if ((local_14 == (left->base).y_min) && (left != right)) goto LAB_0059a7b4;
              iVar10 = iVar10 + 1;
              left = left + 1;
            } while (iVar10 < _DAT_026672a8);
          }
          left = (SSoftwareEdge *)0x0;
LAB_0059a7b4:
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
