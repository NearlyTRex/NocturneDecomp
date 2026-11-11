// Name: engine_prim.c_renderIndexedPolygonSoftware_FUN_0053e650
// Address: 0053e650
// Address Range: [[0053e650, 0053eb72]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderIndexedPolygonSoftware_FUN_0053e650(int *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_renderIndexedPolygonSoftware_FUN_0053e650(int *vertex_indices,int vertex_count)

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
  int local_64 [16];
  uint local_24;
  int *local_20;
  int local_1c;
  int local_18;
  SSoftwareEdge *local_14;
  
  if (DAT_00713a7c != 0) {
    if (vertex_count < 4) {
      iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                        (&DAT_00629014 + *vertex_indices * 0xc,
                         &DAT_00629014 + vertex_indices[1] * 0xc);
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
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                            (&DAT_00629014 + *piVar6 * 0xc,&DAT_00629014 + piVar6[1] * 0xc);
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
  if ((_DAT_01c50948 == 0) || (DAT_00713a74 != 0)) {
    _DAT_01e7dac0 = 0;
    _DAT_01e7d5b8 = 0;
    local_1c = 0;
    _DAT_01e7dac8 = _DAT_01e7dac8 + 1;
    _DAT_01e7dabc = 0x4b0;
    if (0 < vertex_count) {
      local_20 = vertex_indices;
      do {
        iVar3 = local_1c + 1;
        if (vertex_count <= iVar3) {
          iVar3 = 0;
        }
        iVar8 = *local_20 * 0x30;
        iVar11 = vertex_indices[iVar3] * 0x30;
        iVar2 = *(int *)(&DAT_00629028 + iVar8) >> 0x10;
        iVar9 = *(int *)(&DAT_00629028 + iVar11) >> 0x10;
        if (iVar2 != iVar9) {
          iVar5 = iVar2;
          puVar7 = &DAT_00629014 + *local_20 * 0xc;
          puVar12 = &DAT_00629014 + vertex_indices[iVar3] * 0xc;
          if (*(int *)(&DAT_00629028 + iVar11) < *(int *)(&DAT_00629028 + iVar8)) {
            iVar5 = iVar9;
            puVar7 = &DAT_00629014 + vertex_indices[iVar3] * 0xc;
            iVar9 = iVar2;
            puVar12 = &DAT_00629014 + *local_20 * 0xc;
          }
          iVar11 = _DAT_01e7d5b8 * 0x50;
          *(int *)(&DAT_01e7d5bc + iVar11) = iVar5;
          iVar3 = _DAT_01e7dabc;
          *(int *)(iVar11 + 0x1e7d5c0) = iVar9;
          if (iVar5 < iVar3) {
            _DAT_01e7dabc = iVar5;
          }
          if (_DAT_01e7dac0 < iVar9) {
            _DAT_01e7dac0 = iVar9;
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
          *(uint *)(iVar11 + 0x1e7d5c8) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1e7d5c4) =
               puVar7[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[6] - puVar7[6]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e7d5d8) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1e7d5d4) =
               puVar7[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[7] - puVar7[7]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e7d5e0) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1e7d5dc) =
               puVar7[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[8] - puVar7[8]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e7d5d0) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1e7d5cc) =
               puVar7[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[0xb] - puVar7[0xb]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e7d5f0) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          local_24 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e7d5ec) = puVar7[0xb] + local_24;
          if (_DAT_01c51d18 == 1) {
            if (_DAT_01c51d10 == 0) {
              iVar9 = puVar12[3];
              iVar2 = puVar7[3];
            }
            else {
              iVar2 = 0x7fffffff - puVar7[2];
              iVar9 = 0x7fffffff - puVar12[2];
            }
            lVar1 = (longlong)iVar3 * (longlong)(iVar9 - iVar2);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1e7d5e8) = uVar4;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
            *(uint *)(iVar11 + 0x1e7d5e4) =
                 iVar2 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            _DAT_01e7d5b8 = _DAT_01e7d5b8 + 1;
          }
          else {
            lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[2] - puVar7[2]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1e7d5e8) = uVar4;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
            *(uint *)(iVar11 + 0x1e7d5e4) =
                 puVar7[2] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            _DAT_01e7d5b8 = _DAT_01e7d5b8 + 1;
          }
        }
        local_20 = local_20 + 1;
        local_1c = local_1c + 1;
      } while (local_1c < vertex_count);
    }
    edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_0053db80(_DAT_01e7dabc,(SSoftwareEdge *)0x0);
    if ((edge_ptr != (SSoftwareEdge *)0x0) &&
       (local_14 = engine_prim_c_findEdgeInBuffer_FUN_0053db80(_DAT_01e7dabc,edge_ptr),
       local_14 != (SSoftwareEdge *)0x0)) {
      local_18 = _DAT_01e7dabc;
      iVar3 = _DAT_01e7dabc - DAT_00622a84;
      bVar13 = SBORROW4(_DAT_01e7dabc,DAT_00622a84);
      while (bVar13 != iVar3 < 0) {
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
        iVar3 = local_18 - DAT_00622a84;
        bVar13 = SBORROW4(local_18,DAT_00622a84);
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
        local_64[iVar3] = (int)(&DAT_00629014 + iVar9 * 0xc);
        iVar3 = iVar11;
      } while (iVar11 < vertex_count);
    }
    _DAT_01e7dac8 = _DAT_01e7dac8 + vertex_count + -2;
    engine_special_cpp_drawPolygon2_FUN_00582370(local_64,vertex_count);
  }
  return;
}
