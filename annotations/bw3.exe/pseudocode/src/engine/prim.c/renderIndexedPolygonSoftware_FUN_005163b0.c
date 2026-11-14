// Name: engine_prim.c_renderIndexedPolygonSoftware_FUN_005163b0
// Address: 005163b0
// Address Range: [[005163b0, 005168d2]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderIndexedPolygonSoftware_FUN_005163b0(int *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_renderIndexedPolygonSoftware_FUN_005163b0(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  SSoftwareEdge *edge_ptr;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  bool bVar13;
  SRenderVertex *local_64 [16];
  uint local_24;
  int *local_20;
  int local_1c;
  int local_18;
  SSoftwareEdge *local_14;
  
  if (DAT_007303fc != 0) {
    if (vertex_count < 4) {
      iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                        ((SRenderVertex *)(&DAT_0060b014 + *vertex_indices * 0xc),
                         (SRenderVertex *)(&DAT_0060b014 + vertex_indices[1] * 0xc),
                         (SRenderVertex *)(&DAT_0060b014 + vertex_indices[2] * 0xc));
      if (iVar3 == 0) {
        return;
      }
    }
    else {
      iVar3 = vertex_count + -2;
      iVar9 = 0;
      iVar11 = 0;
      piVar6 = vertex_indices;
      if (0 < iVar3) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                            ((SRenderVertex *)(&DAT_0060b014 + *piVar6 * 0xc),
                             (SRenderVertex *)(&DAT_0060b014 + piVar6[1] * 0xc),
                             (SRenderVertex *)(&DAT_0060b014 + piVar6[2] * 0xc));
          if (iVar2 == 0) {
            iVar11 = iVar11 + 1;
          }
          iVar9 = iVar9 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar9 < iVar3);
      }
      if (iVar11 == iVar3) {
        return;
      }
    }
  }
  if ((_DAT_01c6cee8 == 0) || (DAT_007303f4 != 0)) {
    _DAT_01ed3190 = 0;
    _DAT_01ed2c88 = 0;
    local_1c = 0;
    _DAT_01ed3198 = _DAT_01ed3198 + 1;
    _DAT_01ed318c = 0x4b0;
    if (0 < vertex_count) {
      local_20 = vertex_indices;
      do {
        iVar3 = local_1c + 1;
        if (vertex_count <= iVar3) {
          iVar3 = 0;
        }
        iVar8 = *local_20 * 0x30;
        iVar11 = vertex_indices[iVar3] * 0x30;
        iVar2 = *(int *)(&DAT_0060b028 + iVar8) >> 0x10;
        iVar9 = *(int *)(&DAT_0060b028 + iVar11) >> 0x10;
        if (iVar2 != iVar9) {
          iVar5 = iVar2;
          puVar7 = &DAT_0060b014 + *local_20 * 0xc;
          puVar12 = &DAT_0060b014 + vertex_indices[iVar3] * 0xc;
          if (*(int *)(&DAT_0060b028 + iVar11) < *(int *)(&DAT_0060b028 + iVar8)) {
            iVar5 = iVar9;
            puVar7 = &DAT_0060b014 + vertex_indices[iVar3] * 0xc;
            iVar9 = iVar2;
            puVar12 = &DAT_0060b014 + *local_20 * 0xc;
          }
          iVar11 = _DAT_01ed2c88 * 0x50;
          *(int *)(&DAT_01ed2c8c + iVar11) = iVar5;
          iVar3 = _DAT_01ed318c;
          *(int *)(iVar11 + 0x1ed2c90) = iVar9;
          if (iVar5 < iVar3) {
            _DAT_01ed318c = iVar5;
          }
          if (_DAT_01ed3190 < iVar9) {
            _DAT_01ed3190 = iVar9;
          }
          if ((uint)(puVar12[5] - puVar7[5]) < 0x10000) {
            iVar3 = 0;
          }
          else {
            iVar3 = (int)(0xffffffff / (ulonglong)(uint)(puVar12[5] - puVar7[5]));
          }
          uVar10 = (uint)(ushort)((ushort)puVar7[5] ^ 0xffff);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[4] - puVar7[4]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed2c98) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1ed2c94) =
               puVar7[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[6] - puVar7[6]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed2ca8) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1ed2ca4) =
               puVar7[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[7] - puVar7[7]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed2cb0) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1ed2cac) =
               puVar7[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[8] - puVar7[8]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed2ca0) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1ed2c9c) =
               puVar7[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[0xb] - puVar7[0xb]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed2cc0) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          local_24 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed2cbc) = puVar7[0xb] + local_24;
          if (_DAT_01c6e2b8 == 1) {
            if (_DAT_01c6e2b0 == 0) {
              iVar9 = puVar12[3];
              iVar2 = puVar7[3];
            }
            else {
              iVar2 = 0x7fffffff - puVar7[2];
              iVar9 = 0x7fffffff - puVar12[2];
            }
            lVar1 = (longlong)iVar3 * (longlong)(iVar9 - iVar2);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1ed2cb8) = uVar4;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
            *(uint *)(iVar11 + 0x1ed2cb4) =
                 iVar2 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            _DAT_01ed2c88 = _DAT_01ed2c88 + 1;
          }
          else {
            lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[2] - puVar7[2]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1ed2cb8) = uVar4;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
            *(uint *)(iVar11 + 0x1ed2cb4) =
                 puVar7[2] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            _DAT_01ed2c88 = _DAT_01ed2c88 + 1;
          }
        }
        local_20 = local_20 + 1;
        local_1c = local_1c + 1;
      } while (local_1c < vertex_count);
    }
    edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_005158e0(_DAT_01ed318c,(SSoftwareEdge *)0x0);
    if ((edge_ptr != (SSoftwareEdge *)0x0) &&
       (local_14 = engine_prim_c_findEdgeInBuffer_FUN_005158e0(_DAT_01ed318c,edge_ptr),
       local_14 != (SSoftwareEdge *)0x0)) {
      local_18 = _DAT_01ed318c;
      iVar3 = _DAT_01ed318c - DAT_00603974;
      bVar13 = SBORROW4(_DAT_01ed318c,DAT_00603974);
      while (bVar13 != iVar3 < 0) {
        if ((edge_ptr->base).y_max <= local_18) {
          (edge_ptr->base).y_min = -1;
          edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_005158e0(local_18,local_14);
          if (edge_ptr == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((local_14->base).y_max <= local_18) {
          (local_14->base).y_min = -1;
          local_14 = engine_prim_c_findEdgeInBuffer_FUN_005158e0(local_18,edge_ptr);
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        engine_special_cpp_FUN_00563257();
        piVar6 = &(edge_ptr->base).x_current;
        *piVar6 = *piVar6 + (edge_ptr->base).x_gradient;
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
        (local_14->base).red_current = (local_14->base).red_current + (local_14->base).red_gradient;
        (local_14->base).depth_current =
             (local_14->base).depth_current + (local_14->base).depth_gradient;
        local_18 = local_18 + 1;
        (local_14->base).alpha_current =
             (local_14->base).alpha_current + (local_14->base).alpha_gradient;
        iVar3 = local_18 - DAT_00603974;
        bVar13 = SBORROW4(local_18,DAT_00603974);
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < vertex_count) {
      do {
        iVar9 = *vertex_indices;
        iVar11 = iVar3 + 1;
        vertex_indices = vertex_indices + 1;
        local_64[iVar3] = (SRenderVertex *)(&DAT_0060b014 + iVar9 * 0xc);
        iVar3 = iVar11;
      } while (iVar11 < vertex_count);
    }
    _DAT_01ed3198 = _DAT_01ed3198 + vertex_count + -2;
    engine_special_cpp_drawPolygon2_FUN_00565c40(local_64,vertex_count,_DAT_01c6e2b4);
  }
  return;
}
