// Name: core_zombie.cpp_FUN_005bf120
// Address: 005bf120
// Address Range: [[005bf120, 005bf617]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_FUN_005bf120(SRenderVertex *vertex_buffer,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_zombie_cpp_FUN_005bf120(SRenderVertex *vertex_buffer,int vertex_count)

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
  
  if ((DAT_0061b4c0 != 0) && (iVar10 = 0, pSVar6 = vertex_buffer, 0 < vertex_count)) {
    do {
      if ((int)((pSVar6->projected_vertex).screen_x & -0x80000000) != 0) {
        if ((_DAT_01c51d18 & 6) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        if ((_DAT_01c51d18 & 1) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        (pSVar6->projected_vertex).screen_x =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_x * (longlong)_DAT_01c4eff8) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + _DAT_01c4f000;
        (pSVar6->projected_vertex).screen_y =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_y * (longlong)_DAT_01c4effc) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + _DAT_01c4f004;
      }
      iVar10 = iVar10 + 1;
      pSVar6 = pSVar6 + 1;
    } while (iVar10 < vertex_count);
  }
  if ((DAT_00713a7c != 0) &&
     (iVar10 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                         (vertex_buffer,vertex_buffer + 1,vertex_buffer + 2), iVar10 == 0)) {
    return;
  }
  _DAT_01e7dac8 = _DAT_01e7dac8 + 1;
  if ((_DAT_01c50948 != 0) && (DAT_00713a74 == 0)) {
    engine_special_cpp_drawPolygon_FUN_00582340(vertex_buffer,vertex_count,_DAT_01c51d14);
    return;
  }
  if (_DAT_01c51d18 != 0) {
    if (_DAT_01c51d18 < 2) {
      engine_prim_c_prepareDepthBuffer_FUN_0053dbc0(vertex_buffer,vertex_count);
    }
    else if (_DAT_01c51d18 == 6) {
      engine_prim_c_replaceWWithDepth_FUN_0053dd20(vertex_buffer,vertex_count);
    }
  }
  _DAT_02c9eb34 = 0;
  iVar10 = 0;
  _DAT_02c9f03c = (byte *)0x0;
  _DAT_02c9f038 = (byte *)0x4b0;
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
        iVar2 = _DAT_02c9eb34 * 0x50;
        *(byte **)(&DAT_02c9eb38 + iVar2) = puVar9;
        puVar3 = _DAT_02c9f038;
        *(byte **)(iVar2 + 0x2c9eb3c) = puVar4;
        if ((int)puVar9 < (int)puVar3) {
          _DAT_02c9f038 = puVar9;
        }
        if ((int)_DAT_02c9f03c < (int)puVar4) {
          _DAT_02c9f03c = puVar4;
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
        *(uint *)(iVar2 + 0x2c9eb44) = uVar5;
        lVar1 = (longlong)(int)uVar7 * (longlong)(int)uVar5;
        *(uint *)(iVar2 + 0x2c9eb40) =
             (pSVar11->projected_vertex).screen_x +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 *
                (longlong)
                (((local_20->projected_vertex).transformed_z -
                 (pSVar11->projected_vertex).transformed_z) * 0x100);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x2c9eb64) = uVar5;
        lVar1 = (longlong)(int)uVar7 * (longlong)(int)uVar5;
        _DAT_02c9eb34 = _DAT_02c9eb34 + 1;
        *(uint *)(iVar2 + 0x2c9eb60) =
             ((pSVar11->projected_vertex).transformed_z * 0x100 - _DAT_01bc0cd0) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < vertex_count);
  }
  local_14 = (SSoftwareEdge *)&DAT_02c9eb38;
  iVar10 = 0;
  _DAT_01bc123c = 0;
  if (0 < _DAT_02c9eb34) {
    do {
      if ((_DAT_02c9f038 == (byte *)(local_14->base).y_min) &&
         (local_14 != (SSoftwareEdge *)0x0)) goto LAB_005bf2c8;
      iVar10 = iVar10 + 1;
      local_14 = local_14 + 1;
    } while (iVar10 < _DAT_02c9eb34);
  }
  local_14 = (SSoftwareEdge *)0x0;
LAB_005bf2c8:
  if (local_14 != (SSoftwareEdge *)0x0) {
    local_18 = (SSoftwareEdge *)&DAT_02c9eb38;
    iVar10 = 0;
    if (0 < _DAT_02c9eb34) {
      do {
        if ((_DAT_02c9f038 == (byte *)(local_18->base).y_min) && (local_18 != local_14))
        goto LAB_005bf301;
        iVar10 = iVar10 + 1;
        local_18 = local_18 + 1;
      } while (iVar10 < _DAT_02c9eb34);
    }
    local_18 = (SSoftwareEdge *)0x0;
LAB_005bf301:
    puVar9 = _DAT_02c9f038;
    if (local_18 != (SSoftwareEdge *)0x0) {
      do {
        if ((local_14->base).y_max <= (int)puVar9) {
          (local_14->base).y_min = -1;
          local_14 = (SSoftwareEdge *)&DAT_02c9eb38;
          iVar10 = 0;
          if (0 < _DAT_02c9eb34) {
            do {
              if ((puVar9 == (byte *)(local_14->base).y_min) && (local_14 != local_18))
              goto LAB_005bf35c;
              iVar10 = iVar10 + 1;
              local_14 = local_14 + 1;
            } while (iVar10 < _DAT_02c9eb34);
          }
          local_14 = (SSoftwareEdge *)0x0;
LAB_005bf35c:
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((local_18->base).y_max <= (int)puVar9) {
          (local_18->base).y_min = -1;
          local_18 = (SSoftwareEdge *)&DAT_02c9eb38;
          iVar10 = 0;
          if (0 < _DAT_02c9eb34) {
            do {
              if ((puVar9 == (byte *)(local_18->base).y_min) && (local_18 != local_14))
              goto LAB_005bf3ac;
              iVar10 = iVar10 + 1;
              local_18 = local_18 + 1;
            } while (iVar10 < _DAT_02c9eb34);
          }
          local_18 = (SSoftwareEdge *)0x0;
LAB_005bf3ac:
          if (local_18 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        engine_special_cpp_FUN_00580127(local_18,local_14,(int)puVar9);
        if (_DAT_01bc123c != 0) {
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
