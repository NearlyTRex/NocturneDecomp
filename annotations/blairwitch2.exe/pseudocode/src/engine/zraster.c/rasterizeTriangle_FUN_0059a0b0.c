// Name: engine_zraster.c_rasterizeTriangle_FUN_0059a0b0
// Address: 0059a0b0
// Address Range: [[0059a0b0, 0059a5a7]]
// Convention: __cdecl
// Signature: void __cdecl engine_zraster_c_rasterizeTriangle_FUN_0059a0b0(SRenderVertex *vertex_buffer,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_zraster_c_rasterizeTriangle_FUN_0059a0b0(SRenderVertex *vertex_buffer,int vertex_count)

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
  
  if ((DAT_006141e0 != 0) && (iVar10 = 0, pSVar6 = vertex_buffer, 0 < vertex_count)) {
    do {
      if ((int)((pSVar6->projected_vertex).screen_x & -0x80000000) != 0) {
        if ((_DAT_01c38b58 & 6) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        if ((_DAT_01c38b58 & 1) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        (pSVar6->projected_vertex).screen_x =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_x * (longlong)_DAT_01c35e38) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + _DAT_01c35e40;
        (pSVar6->projected_vertex).screen_y =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_y * (longlong)_DAT_01c35e3c) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + _DAT_01c35e44;
      }
      iVar10 = iVar10 + 1;
      pSVar6 = pSVar6 + 1;
    } while (iVar10 < vertex_count);
  }
  if ((DAT_0070ca7c != 0) &&
     (iVar10 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                         (vertex_buffer,vertex_buffer + 1,vertex_buffer + 2), iVar10 == 0)) {
    return;
  }
  _DAT_01e61b58 = _DAT_01e61b58 + 1;
  if ((_DAT_01c37788 != 0) && (DAT_0070ca74 == 0)) {
    engine_special_cpp_drawPolygon_FUN_0055f8f0(vertex_buffer,vertex_count,_DAT_01c38b54);
    return;
  }
  if (_DAT_01c38b58 != 0) {
    if (_DAT_01c38b58 < 2) {
      engine_prim_c_prepareDepthBuffer_FUN_0051c5c0(vertex_buffer,vertex_count);
    }
    else if (_DAT_01c38b58 == 6) {
      engine_prim_c_replaceWWithDepth_FUN_0051c720(vertex_buffer,vertex_count);
    }
  }
  _DAT_026672a8 = 0;
  iVar10 = 0;
  _DAT_026677b0 = (byte *)0x0;
  _DAT_026677ac = (byte *)0x4b0;
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
        iVar2 = _DAT_026672a8 * 0x50;
        *(byte **)(&DAT_026672ac + iVar2) = puVar9;
        puVar3 = _DAT_026677ac;
        *(byte **)(iVar2 + 0x26672b0) = puVar4;
        if ((int)puVar9 < (int)puVar3) {
          _DAT_026677ac = puVar9;
        }
        if ((int)_DAT_026677b0 < (int)puVar4) {
          _DAT_026677b0 = puVar4;
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
        *(uint *)(iVar2 + 0x26672b8) = uVar5;
        lVar1 = (longlong)(int)uVar7 * (longlong)(int)uVar5;
        *(uint *)(iVar2 + 0x26672b4) =
             (pSVar11->projected_vertex).screen_x +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 *
                (longlong)
                (((local_20->projected_vertex).transformed_z -
                 (pSVar11->projected_vertex).transformed_z) * 0x100);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x26672d8) = uVar5;
        lVar1 = (longlong)(int)uVar7 * (longlong)(int)uVar5;
        _DAT_026672a8 = _DAT_026672a8 + 1;
        *(uint *)(iVar2 + 0x26672d4) =
             ((pSVar11->projected_vertex).transformed_z * 0x100 - _DAT_01ba5714) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < vertex_count);
  }
  local_14 = (SSoftwareEdge *)&DAT_026672ac;
  iVar10 = 0;
  _DAT_01ba5c80 = 0;
  if (0 < _DAT_026672a8) {
    do {
      if ((_DAT_026677ac == (byte *)(local_14->base).y_min) &&
         (local_14 != (SSoftwareEdge *)0x0)) goto LAB_0059a258;
      iVar10 = iVar10 + 1;
      local_14 = local_14 + 1;
    } while (iVar10 < _DAT_026672a8);
  }
  local_14 = (SSoftwareEdge *)0x0;
LAB_0059a258:
  if (local_14 != (SSoftwareEdge *)0x0) {
    local_18 = (SSoftwareEdge *)&DAT_026672ac;
    iVar10 = 0;
    if (0 < _DAT_026672a8) {
      do {
        if ((_DAT_026677ac == (byte *)(local_18->base).y_min) && (local_18 != local_14))
        goto LAB_0059a291;
        iVar10 = iVar10 + 1;
        local_18 = local_18 + 1;
      } while (iVar10 < _DAT_026672a8);
    }
    local_18 = (SSoftwareEdge *)0x0;
LAB_0059a291:
    puVar9 = _DAT_026677ac;
    if (local_18 != (SSoftwareEdge *)0x0) {
      do {
        if ((local_14->base).y_max <= (int)puVar9) {
          (local_14->base).y_min = -1;
          local_14 = (SSoftwareEdge *)&DAT_026672ac;
          iVar10 = 0;
          if (0 < _DAT_026672a8) {
            do {
              if ((puVar9 == (byte *)(local_14->base).y_min) && (local_14 != local_18))
              goto LAB_0059a2ec;
              iVar10 = iVar10 + 1;
              local_14 = local_14 + 1;
            } while (iVar10 < _DAT_026672a8);
          }
          local_14 = (SSoftwareEdge *)0x0;
LAB_0059a2ec:
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((local_18->base).y_max <= (int)puVar9) {
          (local_18->base).y_min = -1;
          local_18 = (SSoftwareEdge *)&DAT_026672ac;
          iVar10 = 0;
          if (0 < _DAT_026672a8) {
            do {
              if ((puVar9 == (byte *)(local_18->base).y_min) && (local_18 != local_14))
              goto LAB_0059a33c;
              iVar10 = iVar10 + 1;
              local_18 = local_18 + 1;
            } while (iVar10 < _DAT_026672a8);
          }
          local_18 = (SSoftwareEdge *)0x0;
LAB_0059a33c:
          if (local_18 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        engine_special_cpp_renderScanline_FUN_0055d6d7(local_18,local_14,(int)puVar9);
        if (_DAT_01ba5c80 != 0) {
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
