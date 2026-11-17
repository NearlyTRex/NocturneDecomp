// Name: engine_drender.cpp_renderTriangleSimple_FUN_004625f0
// Address: 004625f0
// Address Range: [[004625f0, 00462ae0]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_renderTriangleSimple_FUN_004625f0(CVector3i *vertex_indices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_drender_cpp_renderTriangleSimple_FUN_004625f0(CVector3i *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  CVector3i *pCVar8;
  int iVar9;
  SRenderVertex *pSVar10;
  SRenderVertex *local_74 [16];
  uint local_34;
  CVector3i *local_30;
  int local_2c;
  SRenderVertex *local_28;
  SRenderVertex *local_24;
  SRenderVertex *local_20;
  byte *local_1c;
  SSoftwareEdge *local_18;
  SSoftwareEdge *local_14;
  
  if ((g_INT_0070ca7c != 0) &&
     (iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                        (g_SRenderVertex_ARRAY_00622014 + vertex_indices->x,
                         g_SRenderVertex_ARRAY_00622014 + vertex_indices->y,
                         g_SRenderVertex_ARRAY_00622014 + vertex_indices->z), iVar3 == 0)) {
    return;
  }
  g_INT_01e61b58 = g_INT_01e61b58 + 1;
  if ((g_INT_01c37788 == 0) || (g_INT_0070ca74 != 0)) {
    if (g_INT_01c38b58 != 0) {
      if ((uint)g_INT_01c38b58 < 2) {
        iVar3 = 0;
        pCVar8 = vertex_indices;
        if (0 < vertex_count) {
          do {
            iVar3 = iVar3 + 1;
            engine_prim_c_prepareDepthBuffer_FUN_0051c5c0
                      (g_SRenderVertex_ARRAY_00622014 + pCVar8->x,1);
            pCVar8 = (CVector3i *)&pCVar8->y;
          } while (iVar3 < vertex_count);
        }
      }
      else if ((g_INT_01c38b58 == 6) && (iVar3 = 0, pCVar8 = vertex_indices, 0 < vertex_count)) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_replaceWWithDepth_FUN_0051c720(g_SRenderVertex_ARRAY_00622014 + pCVar8->x,1)
          ;
          pCVar8 = (CVector3i *)&pCVar8->y;
        } while (iVar3 < vertex_count);
      }
    }
    g_INT_01ba51c8 = 0;
    g_INT_01ba56d0 = 0;
    local_2c = 0;
    g_INT_01ba56cc = 0x4b0;
    if (0 < vertex_count) {
      local_30 = vertex_indices;
      do {
        iVar3 = local_2c + 1;
        if (vertex_count <= iVar3) {
          iVar3 = 0;
        }
        iVar3 = (&vertex_indices->x)[iVar3];
        local_20 = g_SRenderVertex_ARRAY_00622014 + iVar3;
        iVar9 = local_30->x;
        local_24 = g_SRenderVertex_ARRAY_00622014 + iVar9;
        iVar4 = g_SRenderVertex_ARRAY_00622014[iVar9].projected_vertex.screen_y >> 0x10;
        iVar7 = g_SRenderVertex_ARRAY_00622014[iVar3].projected_vertex.screen_y >> 0x10;
        local_28 = local_20;
        if (iVar4 != iVar7) {
          iVar5 = iVar4;
          pSVar10 = local_24;
          if (g_SRenderVertex_ARRAY_00622014[iVar3].projected_vertex.screen_y <
              g_SRenderVertex_ARRAY_00622014[iVar9].projected_vertex.screen_y) {
            iVar5 = iVar7;
            iVar7 = iVar4;
            pSVar10 = local_20;
            local_28 = local_24;
          }
          iVar9 = g_INT_01ba51c8 * 0x50;
          *(int *)(&DAT_01ba51cc + iVar9) = iVar5;
          iVar3 = g_INT_01ba56cc;
          *(int *)(iVar9 + 0x1ba51d0) = iVar7;
          if (iVar5 < iVar3) {
            g_INT_01ba56cc = iVar5;
          }
          if (g_INT_01ba56d0 < iVar7) {
            g_INT_01ba56d0 = iVar7;
          }
          uVar6 = (local_28->projected_vertex).screen_y - (pSVar10->projected_vertex).screen_y;
          if (uVar6 < 0x10000) {
            iVar3 = 0;
          }
          else {
            iVar3 = (int)(0xffffffff / (ulonglong)uVar6);
          }
          lVar1 = (longlong)iVar3 *
                  (longlong)
                  ((local_28->projected_vertex).screen_x - (pSVar10->projected_vertex).screen_x);
          *(uint *)(iVar9 + 0x1ba51d8) =
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          lVar1 = (longlong)iVar3 *
                  (longlong)
                  (((local_28->projected_vertex).transformed_z -
                   (pSVar10->projected_vertex).transformed_z) * 0x100);
          *(uint *)(iVar9 + 0x1ba51f8) =
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          uVar6 = (uint)(ushort)((ushort)(pSVar10->projected_vertex).screen_y ^ 0xffff);
          lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar9 + 0x1ba51d8);
          local_34 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar9 + 0x1ba51d4) = (pSVar10->projected_vertex).screen_x + local_34;
          lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar9 + 0x1ba51f8);
          g_INT_01ba51c8 = g_INT_01ba51c8 + 1;
          *(uint *)(iVar9 + 0x1ba51f4) =
               ((pSVar10->projected_vertex).transformed_z * 0x100 - g_INT_01ba5714) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        }
        local_30 = (CVector3i *)&local_30->y;
        local_2c = local_2c + 1;
      } while (local_2c < vertex_count);
    }
    iVar3 = 0;
    g_INT_01ba5c80 = 0;
    local_14 = (SSoftwareEdge *)&DAT_01ba51cc;
    if (0 < g_INT_01ba51c8) {
      do {
        if ((g_INT_01ba56cc == (local_14->base).y_min) && (local_14 != (SSoftwareEdge *)0x0))
        goto LAB_004627e4;
        iVar3 = iVar3 + 1;
        local_14 = local_14 + 1;
      } while (iVar3 < g_INT_01ba51c8);
    }
    local_14 = (SSoftwareEdge *)0x0;
LAB_004627e4:
    if (local_14 != (SSoftwareEdge *)0x0) {
      local_18 = (SSoftwareEdge *)&DAT_01ba51cc;
      iVar3 = 0;
      if (0 < g_INT_01ba51c8) {
        do {
          if ((g_INT_01ba56cc == (local_18->base).y_min) && (local_18 != local_14))
          goto LAB_0046281d;
          iVar3 = iVar3 + 1;
          local_18 = local_18 + 1;
        } while (iVar3 < g_INT_01ba51c8);
      }
      local_18 = (SSoftwareEdge *)0x0;
LAB_0046281d:
      local_1c = (byte *)g_INT_01ba56cc;
      if (local_18 != (SSoftwareEdge *)0x0) {
        do {
          if ((local_14->base).y_max <= (int)local_1c) {
            (local_14->base).y_min = -1;
            local_14 = (SSoftwareEdge *)&DAT_01ba51cc;
            iVar3 = 0;
            if (0 < g_INT_01ba51c8) {
              do {
                if ((local_1c == (byte *)(local_14->base).y_min) && (local_14 != local_18))
                goto LAB_00462878;
                iVar3 = iVar3 + 1;
                local_14 = local_14 + 1;
              } while (iVar3 < g_INT_01ba51c8);
            }
            local_14 = (SSoftwareEdge *)0x0;
LAB_00462878:
            if (local_14 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          if ((local_18->base).y_max <= (int)local_1c) {
            (local_18->base).y_min = -1;
            local_18 = (SSoftwareEdge *)&DAT_01ba51cc;
            iVar3 = 0;
            if (0 < g_INT_01ba51c8) {
              do {
                if ((local_1c == (byte *)(local_18->base).y_min) && (local_18 != local_14))
                goto LAB_004628c8;
                iVar3 = iVar3 + 1;
                local_18 = local_18 + 1;
              } while (iVar3 < g_INT_01ba51c8);
            }
            local_18 = (SSoftwareEdge *)0x0;
LAB_004628c8:
            if (local_18 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          local_74[0] = (SRenderVertex *)0x4628eb;
          engine_special_cpp_renderScanline_FUN_0055d6d7(local_18,local_14,(int)local_1c);
          if (g_INT_01ba5c80 != 0) {
            return;
          }
          (local_18->base).x_current = (local_18->base).x_current + (local_18->base).x_gradient;
          (local_18->base).depth_current =
               (local_18->base).depth_current + (local_18->base).depth_gradient;
          *(int *)(local_1c + 8) = *(int *)(local_1c + 8) + *(int *)(local_1c + 0xc);
          *(int *)(local_1c + 0x28) = *(int *)(local_1c + 0x28) + *(int *)(local_1c + 0x2c);
          local_1c = (byte *)((int)&(local_20->projected_vertex).transformed_x + 1);
        } while( true );
      }
    }
  }
  else {
    if (0 < vertex_count) {
      iVar3 = 0;
      do {
        piVar2 = &vertex_indices->x;
        iVar9 = iVar3 + 1;
        vertex_indices = (CVector3i *)&vertex_indices->y;
        local_74[iVar3] = g_SRenderVertex_ARRAY_00622014 + *piVar2;
        iVar3 = iVar9;
      } while (iVar9 < vertex_count);
    }
    engine_special_cpp_drawPolygon2_FUN_0055f920
              (local_74,vertex_count,g_BIT_INTEGER32_01c38b54.dword);
  }
  return;
}
