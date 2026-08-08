// Name: engine_prim.c_FUN_004fa2e0
// Address: 004fa2e0
// Address Range: [[004fa2e0, 004fa7f0]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_FUN_004fa2e0(int *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_FUN_004fa2e0(int *vertex_indices,int vertex_count)

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
  
  if (DAT_006b0280 != 0) {
    if (vertex_count < 4) {
      iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                        ((SRenderVertex *)(&DAT_005c5014 + *vertex_indices * 0xc),
                         (SRenderVertex *)(&DAT_005c5014 + vertex_indices[1] * 0xc),
                         (SRenderVertex *)(&DAT_005c5014 + vertex_indices[2] * 0xc));
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
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                            ((SRenderVertex *)(&DAT_005c5014 + *piVar6 * 0xc),
                             (SRenderVertex *)(&DAT_005c5014 + piVar6[1] * 0xc),
                             (SRenderVertex *)(&DAT_005c5014 + piVar6[2] * 0xc));
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
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer == 0) || (DAT_006b0278 != 0)) {
    _DAT_01e52ef0 = 0;
    _DAT_01e52a68 = 0;
    local_1c = 0;
    _DAT_01e52eec = 0x4b0;
    if (0 < vertex_count) {
      local_20 = vertex_indices;
      do {
        iVar3 = local_1c + 1;
        if (vertex_count <= iVar3) {
          iVar3 = 0;
        }
        iVar8 = *local_20 * 0x30;
        iVar11 = vertex_indices[iVar3] * 0x30;
        iVar2 = *(int *)(&DAT_005c5028 + iVar8) >> 0x10;
        iVar9 = *(int *)(&DAT_005c5028 + iVar11) >> 0x10;
        if (iVar2 != iVar9) {
          iVar5 = iVar2;
          puVar7 = &DAT_005c5014 + *local_20 * 0xc;
          puVar12 = &DAT_005c5014 + vertex_indices[iVar3] * 0xc;
          if (*(int *)(&DAT_005c5028 + iVar11) < *(int *)(&DAT_005c5028 + iVar8)) {
            iVar5 = iVar9;
            puVar7 = &DAT_005c5014 + vertex_indices[iVar3] * 0xc;
            iVar9 = iVar2;
            puVar12 = &DAT_005c5014 + *local_20 * 0xc;
          }
          iVar11 = _DAT_01e52a68 * 0x48;
          *(int *)(&DAT_01e52a6c + iVar11) = iVar5;
          iVar3 = _DAT_01e52eec;
          *(int *)(iVar11 + 0x1e52a70) = iVar9;
          if (iVar5 < iVar3) {
            _DAT_01e52eec = iVar5;
          }
          if (_DAT_01e52ef0 < iVar9) {
            _DAT_01e52ef0 = iVar9;
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
          *(uint *)(iVar11 + 0x1e52a78) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1e52a74) =
               puVar7[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[6] - puVar7[6]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52a88) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1e52a84) =
               puVar7[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[7] - puVar7[7]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52a90) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1e52a8c) =
               puVar7[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[8] - puVar7[8]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52a80) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1e52a7c) =
               puVar7[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[0xb] - puVar7[0xb]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52aa0) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          local_24 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52a9c) = puVar7[0xb] + local_24;
          if (g_VertexPreprocessMode == 1) {
            if (g_ProcessorType == 0) {
              iVar9 = puVar12[3];
              iVar2 = puVar7[3];
            }
            else {
              iVar2 = 0x7fffffff - puVar7[2];
              iVar9 = 0x7fffffff - puVar12[2];
            }
            lVar1 = (longlong)iVar3 * (longlong)(iVar9 - iVar2);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1e52a98) = uVar4;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
            *(uint *)(iVar11 + 0x1e52a94) =
                 iVar2 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            _DAT_01e52a68 = _DAT_01e52a68 + 1;
          }
          else {
            lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[2] - puVar7[2]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1e52a98) = uVar4;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
            *(uint *)(iVar11 + 0x1e52a94) =
                 puVar7[2] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            _DAT_01e52a68 = _DAT_01e52a68 + 1;
          }
        }
        local_20 = local_20 + 1;
        local_1c = local_1c + 1;
      } while (local_1c < vertex_count);
    }
    local_14 = engine_prim_c_findEdgeInBuffer_FUN_004f9830(_DAT_01e52eec,(SSoftwareEdge *)0x0);
    if ((local_14 != (SSoftwareEdge *)0x0) &&
       (edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_004f9830(_DAT_01e52eec,local_14),
       edge_ptr != (SSoftwareEdge *)0x0)) {
      local_18 = _DAT_01e52eec;
      iVar3 = _DAT_01e52eec - INT_005be1e4;
      bVar13 = SBORROW4(_DAT_01e52eec,INT_005be1e4);
      while (bVar13 != iVar3 < 0) {
        if ((local_14->base).y_max <= local_18) {
          (local_14->base).y_min = -1;
          local_14 = engine_prim_c_findEdgeInBuffer_FUN_004f9830(local_18,edge_ptr);
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((edge_ptr->base).y_max <= local_18) {
          (edge_ptr->base).y_min = -1;
          edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_004f9830(local_18,local_14);
          if (edge_ptr == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        local_64[0] = (SRenderVertex *)0x4fa54c;
        engine_special_cpp_renderScanline_FUN_00530710(edge_ptr,local_14,local_18);
        *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + *(int *)(local_18 + 0xc);
        *(int *)(local_18 + 0x18) = *(int *)(local_18 + 0x18) + *(int *)(local_18 + 0x1c);
        *(int *)(local_18 + 0x20) = *(int *)(local_18 + 0x20) + *(int *)(local_18 + 0x24);
        *(int *)(local_18 + 0x10) = *(int *)(local_18 + 0x10) + *(int *)(local_18 + 0x14);
        *(int *)(local_18 + 0x28) = *(int *)(local_18 + 0x28) + *(int *)(local_18 + 0x2c);
        *(int *)(local_18 + 0x30) = *(int *)(local_18 + 0x30) + *(int *)(local_18 + 0x34);
        piVar6 = &(edge_ptr->base).x_current;
        *piVar6 = *piVar6 + (edge_ptr->base).x_gradient;
        (edge_ptr->base).u_current = (edge_ptr->base).u_current + (edge_ptr->base).u_gradient;
        iVar9 = INT_005be1e4;
        (edge_ptr->base).v_current = (edge_ptr->base).v_current + (edge_ptr->base).v_gradient;
        (edge_ptr->base).red_current = (edge_ptr->base).red_current + (edge_ptr->base).red_gradient;
        (edge_ptr->base).depth_current =
             (edge_ptr->base).depth_current + (edge_ptr->base).depth_gradient;
        local_1c = local_1c + 1;
        (edge_ptr->base).alpha_current =
             (edge_ptr->base).alpha_current + (edge_ptr->base).alpha_gradient;
        iVar3 = local_1c - iVar9;
        bVar13 = SBORROW4(local_1c,iVar9);
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
        local_64[iVar3] = (SRenderVertex *)(&DAT_005c5014 + iVar9 * 0xc);
        iVar3 = iVar11;
      } while (iVar11 < vertex_count);
    }
    engine_special_cpp_drawPolygon2_FUN_00532650(local_64,vertex_count,g_RenderStateFlags.dword);
  }
  return;
}
