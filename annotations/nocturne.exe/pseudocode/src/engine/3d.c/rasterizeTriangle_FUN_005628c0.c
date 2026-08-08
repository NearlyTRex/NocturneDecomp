// Name: engine_3d.c_rasterizeTriangle_FUN_005628c0
// Address: 005628c0
// Address Range: [[005628c0, 00562db7]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_rasterizeTriangle_FUN_005628c0(SRenderVertex *vertex_buffer,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_rasterizeTriangle_FUN_005628c0(SRenderVertex *vertex_buffer,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  byte *puVar3;
  byte *puVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  uint uVar7;
  int iVar8;
  byte *puVar9;
  int iVar10;
  SRenderVertex *pSVar11;
  SRenderVertex *local_20;
  SSoftwareEdge *local_18;
  SSoftwareEdge *local_14;
  
  if ((INT_005b7644 != 0) && (iVar10 = 0, pSVar6 = vertex_buffer, 0 < vertex_count)) {
    do {
      if ((int)((pSVar6->projected_vertex).screen_x & -0x80000000) != 0) {
        if ((g_VertexPreprocessMode & 6U) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        if ((g_VertexPreprocessMode & 1U) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        (pSVar6->projected_vertex).screen_x =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_x *
                   (longlong)g_Projection.half_width_fixed) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + g_Projection.center_x_fixed;
        (pSVar6->projected_vertex).screen_y =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_y *
                   (longlong)g_Projection.neg_half_height_fixed) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + g_Projection.center_y_fixed;
      }
      iVar10 = iVar10 + 1;
      pSVar6 = pSVar6 + 1;
    } while (iVar10 < vertex_count);
  }
  if ((DAT_006b0280 != 0) &&
     (iVar10 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                         (vertex_buffer,vertex_buffer + 1,vertex_buffer + 2), iVar10 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer != 0) && (DAT_006b0278 == 0)) {
    engine_special_cpp_drawPolygon_FUN_00532620(vertex_buffer,vertex_count,g_RenderStateFlags.dword)
    ;
    return;
  }
  if (g_VertexPreprocessMode != 0) {
    if ((uint)g_VertexPreprocessMode < 2) {
      engine_prim_c_prepareDepthBuffer_FUN_004f9870(vertex_buffer,vertex_count);
    }
    else if (g_VertexPreprocessMode == 6) {
      engine_prim_c_replaceWWithDepth_FUN_004f99d0(vertex_buffer,vertex_count);
    }
  }
  _DAT_02de497c = 0;
  iVar10 = 0;
  _DAT_02de4e04 = (byte *)0x0;
  _DAT_02de4e00 = (byte *)0x4b0;
  if (0 < vertex_count) {
    do {
      iVar2 = iVar10 + 1;
      if (vertex_count <= iVar2) {
        iVar2 = 0;
      }
      local_20 = vertex_buffer + iVar2;
      pSVar6 = vertex_buffer + iVar10;
      puVar9 = (byte *)((pSVar6->projected_vertex).screen_y >> 0x10);
      puVar3 = (byte *)((local_20->projected_vertex).screen_y >> 0x10);
      if (puVar9 != puVar3) {
        puVar4 = puVar3;
        pSVar11 = pSVar6;
        if ((local_20->projected_vertex).screen_y < (pSVar6->projected_vertex).screen_y) {
          puVar4 = puVar9;
          puVar9 = puVar3;
          pSVar11 = local_20;
          local_20 = pSVar6;
        }
        iVar2 = _DAT_02de497c * 0x48;
        *(byte **)(&DAT_02de4980 + iVar2) = puVar9;
        puVar3 = _DAT_02de4e00;
        *(byte **)(iVar2 + 0x2de4984) = puVar4;
        if ((int)puVar9 < (int)puVar3) {
          _DAT_02de4e00 = puVar9;
        }
        if ((int)_DAT_02de4e04 < (int)puVar4) {
          _DAT_02de4e04 = puVar4;
        }
        uVar7 = (local_20->projected_vertex).screen_y - (pSVar11->projected_vertex).screen_y;
        if (uVar7 < 0x10000) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)(0xffffffff / (ulonglong)uVar7);
        }
        uVar7 = (uint)(ushort)((ushort)(pSVar11->projected_vertex).screen_y ^ 0xffff);
        lVar1 = (longlong)iVar8 *
                (longlong)
                ((local_20->projected_vertex).screen_x - (pSVar11->projected_vertex).screen_x);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x2de498c) = uVar5;
        lVar1 = (longlong)(int)uVar7 * (longlong)(int)uVar5;
        *(uint *)(iVar2 + 0x2de4988) =
             (pSVar11->projected_vertex).screen_x +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 *
                (longlong)
                (((local_20->projected_vertex).transformed_z -
                 (pSVar11->projected_vertex).transformed_z) * 0x100);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x2de49ac) = uVar5;
        lVar1 = (longlong)(int)uVar7 * (longlong)(int)uVar5;
        _DAT_02de497c = _DAT_02de497c + 1;
        *(uint *)(iVar2 + 0x2de49a8) =
             ((pSVar11->projected_vertex).transformed_z * 0x100 - _DAT_01b4d1fc) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < vertex_count);
  }
  local_14 = (SSoftwareEdge *)&DAT_02de4980;
  iVar10 = 0;
  _DAT_01b4d768 = 0;
  if (0 < _DAT_02de497c) {
    do {
      if ((_DAT_02de4e00 == (byte *)(local_14->base).y_min) &&
         (local_14 != (SSoftwareEdge *)0x0)) goto LAB_00562a68;
      iVar10 = iVar10 + 1;
      local_14 = local_14 + 1;
    } while (iVar10 < _DAT_02de497c);
  }
  local_14 = (SSoftwareEdge *)0x0;
LAB_00562a68:
  if (local_14 != (SSoftwareEdge *)0x0) {
    local_18 = (SSoftwareEdge *)&DAT_02de4980;
    iVar10 = 0;
    if (0 < _DAT_02de497c) {
      do {
        if ((_DAT_02de4e00 == (byte *)(local_18->base).y_min) && (local_18 != local_14))
        goto LAB_00562aa1;
        iVar10 = iVar10 + 1;
        local_18 = local_18 + 1;
      } while (iVar10 < _DAT_02de497c);
    }
    local_18 = (SSoftwareEdge *)0x0;
LAB_00562aa1:
    puVar9 = _DAT_02de4e00;
    if (local_18 != (SSoftwareEdge *)0x0) {
      do {
        if ((local_14->base).y_max <= (int)puVar9) {
          (local_14->base).y_min = -1;
          local_14 = (SSoftwareEdge *)&DAT_02de4980;
          iVar10 = 0;
          if (0 < _DAT_02de497c) {
            do {
              if ((puVar9 == (byte *)(local_14->base).y_min) && (local_14 != local_18))
              goto LAB_00562afc;
              iVar10 = iVar10 + 1;
              local_14 = local_14 + 1;
            } while (iVar10 < _DAT_02de497c);
          }
          local_14 = (SSoftwareEdge *)0x0;
LAB_00562afc:
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((local_18->base).y_max <= (int)puVar9) {
          (local_18->base).y_min = -1;
          local_18 = (SSoftwareEdge *)&DAT_02de4980;
          iVar10 = 0;
          if (0 < _DAT_02de497c) {
            do {
              if ((puVar9 == (byte *)(local_18->base).y_min) && (local_18 != local_14))
              goto LAB_00562b4c;
              iVar10 = iVar10 + 1;
              local_18 = local_18 + 1;
            } while (iVar10 < _DAT_02de497c);
          }
          local_18 = (SSoftwareEdge *)0x0;
LAB_00562b4c:
          if (local_18 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        engine_special_cpp_renderScanline_FUN_00530710(local_18,local_14,(int)puVar9);
        if (_DAT_01b4d768 != 0) {
          return;
        }
        (local_18->base).x_current = (local_18->base).x_current + (local_18->base).x_gradient;
        (local_18->base).depth_current =
             (local_18->base).depth_current + (local_18->base).depth_gradient;
        *(int *)(puVar9 + 8) = *(int *)(puVar9 + 8) + *(int *)(puVar9 + 0xc);
        *(int *)(puVar9 + 0x28) = *(int *)(puVar9 + 0x28) + *(int *)(puVar9 + 0x2c);
        puVar9 = (byte *)((int)&(local_20->projected_vertex).transformed_x + 1);
      } while( true );
    }
  }
  return;
}
