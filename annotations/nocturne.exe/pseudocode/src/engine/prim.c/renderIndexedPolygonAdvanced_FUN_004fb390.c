// Name: engine_prim.c_renderIndexedPolygonAdvanced_FUN_004fb390
// Address: 004fb390
// Address Range: [[004fb390, 004fbb31]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderIndexedPolygonAdvanced_FUN_004fb390(int *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_renderIndexedPolygonAdvanced_FUN_004fb390(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  SSoftwareEdge *left;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  SRenderVertex *local_68 [16];
  uint local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  SSoftwareEdge *local_14;
  
  if (DAT_006b0280 != 0) {
    if (vertex_count < 4) {
      iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                        ((SRenderVertex *)(&DAT_005c5014 + *vertex_indices * 0xc),
                         (SRenderVertex *)(&DAT_005c5014 + vertex_indices[1] * 0xc),
                         (SRenderVertex *)(&DAT_005c5014 + vertex_indices[2] * 0xc));
      if (iVar5 == 0) {
        return;
      }
    }
    else {
      iVar5 = vertex_count + -2;
      iVar8 = 0;
      iVar11 = 0;
      piVar6 = vertex_indices;
      if (0 < iVar5) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                            ((SRenderVertex *)(&DAT_005c5014 + *piVar6 * 0xc),
                             (SRenderVertex *)(&DAT_005c5014 + piVar6[1] * 0xc),
                             (SRenderVertex *)(&DAT_005c5014 + piVar6[2] * 0xc));
          if (iVar2 == 0) {
            iVar11 = iVar11 + 1;
          }
          iVar8 = iVar8 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar8 < iVar5);
      }
      if (iVar11 == iVar5) {
        return;
      }
    }
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer == 0) || (DAT_006b0278 != 0)) {
    switch(g_VertexPreprocessMode) {
    case 1:
      iVar5 = 0;
      piVar6 = vertex_indices;
      if (0 < vertex_count) {
        do {
          iVar5 = iVar5 + 1;
          engine_prim_c_prepareDepthBuffer_FUN_004f9870
                    ((SRenderVertex *)(&DAT_005c5014 + *piVar6 * 0xc),1);
          piVar6 = piVar6 + 1;
        } while (iVar5 < vertex_count);
      }
      break;
    case 2:
      iVar5 = 0;
      piVar6 = vertex_indices;
      if (0 < vertex_count) {
        do {
          engine_prim_c_normalizeTextureCoords_FUN_004f98e0
                    ((SRenderVertex *)(&DAT_005c5014 + *piVar6 * 0xc),1);
          iVar5 = iVar5 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar5 < vertex_count);
      }
      break;
    case 3:
      iVar5 = 0;
      piVar6 = vertex_indices;
      if (0 < vertex_count) {
        do {
          iVar5 = iVar5 + 1;
          engine_prim_c_adjustNearPlaneTextureCoords_FUN_004f9960
                    ((SRenderVertex *)(&DAT_005c5014 + *piVar6 * 0xc),1);
          piVar6 = piVar6 + 1;
        } while (iVar5 < vertex_count);
      }
      break;
    case 5:
      iVar5 = 0;
      piVar6 = vertex_indices;
      if (0 < vertex_count) {
        do {
          engine_prim_c_normalizeTextureCoords_FUN_004f98e0
                    ((SRenderVertex *)(&DAT_005c5014 + *piVar6 * 0xc),1);
          iVar5 = iVar5 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar5 < vertex_count);
      }
      break;
    case 6:
      iVar5 = 0;
      piVar6 = vertex_indices;
      if (0 < vertex_count) {
        do {
          iVar5 = iVar5 + 1;
          engine_prim_c_replaceWWithDepth_FUN_004f99d0
                    ((SRenderVertex *)(&DAT_005c5014 + *piVar6 * 0xc),1);
          piVar6 = piVar6 + 1;
        } while (iVar5 < vertex_count);
      }
    }
    _DAT_01e53384 = 0;
    _DAT_01e52efc = 0;
    local_1c = 0;
    _DAT_01e53380 = 0x4b0;
    if (0 < vertex_count) {
      local_24 = vertex_indices;
      do {
        iVar5 = local_1c + 1;
        if (vertex_count <= iVar5) {
          iVar5 = 0;
        }
        iVar9 = vertex_indices[iVar5] * 0x30;
        iVar2 = *local_24 * 0x30;
        iVar8 = *(int *)(&DAT_005c5028 + iVar9) >> 0x10;
        iVar11 = *(int *)(&DAT_005c5028 + iVar2) >> 0x10;
        if (iVar11 != iVar8) {
          iVar3 = iVar11;
          puVar7 = &DAT_005c5014 + *local_24 * 0xc;
          puVar12 = &DAT_005c5014 + vertex_indices[iVar5] * 0xc;
          if (*(int *)(&DAT_005c5028 + iVar9) < *(int *)(&DAT_005c5028 + iVar2)) {
            iVar3 = iVar8;
            iVar8 = iVar11;
            puVar7 = &DAT_005c5014 + vertex_indices[iVar5] * 0xc;
            puVar12 = &DAT_005c5014 + *local_24 * 0xc;
          }
          iVar11 = _DAT_01e52efc * 0x48;
          *(int *)(&DAT_01e52f00 + iVar11) = iVar3;
          iVar5 = _DAT_01e53380;
          *(int *)(iVar11 + 0x1e52f04) = iVar8;
          if (iVar3 < iVar5) {
            _DAT_01e53380 = iVar3;
          }
          if (_DAT_01e53384 < iVar8) {
            _DAT_01e53384 = iVar8;
          }
          if ((uint)(puVar12[5] - puVar7[5]) < 0x10000) {
            iVar5 = 0;
          }
          else {
            iVar5 = (int)(0xffffffff / (ulonglong)(uint)(puVar12[5] - puVar7[5]));
          }
          uVar10 = (uint)(ushort)((ushort)puVar7[5] ^ 0xffff);
          lVar1 = (longlong)iVar5 * (longlong)(int)(puVar12[4] - puVar7[4]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52f0c) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1e52f08) =
               puVar7[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(puVar12[6] - puVar7[6]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52f1c) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1e52f18) =
               puVar7[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(puVar12[7] - puVar7[7]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52f24) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1e52f20) =
               puVar7[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(puVar12[8] - puVar7[8]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52f14) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1e52f10) =
               puVar7[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(puVar12[0xb] - puVar7[0xb]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52f34) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1e52f30) =
               puVar7[0xb] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (g_VertexPreprocessMode == 1) {
            if (g_ProcessorType == 0) {
              local_20 = puVar7[3];
              iVar8 = puVar12[3];
            }
            else {
              local_20 = 0x7fffffff - puVar7[2];
              iVar8 = 0x7fffffff - puVar12[2];
            }
            lVar1 = (longlong)iVar5 * (longlong)(iVar8 - local_20);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1e52f2c) = uVar4;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
            *(uint *)(iVar11 + 0x1e52f28) =
                 local_20 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          else {
            lVar1 = (longlong)iVar5 * (longlong)(int)(puVar12[2] - puVar7[2]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1e52f2c) = uVar4;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
            *(uint *)(iVar11 + 0x1e52f28) =
                 puVar7[2] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          lVar1 = (longlong)iVar5 * (longlong)(int)(puVar12[9] - puVar7[9]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52f3c) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          local_28 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52f38) = puVar7[9] + local_28;
          lVar1 = (longlong)iVar5 * (longlong)(int)(puVar12[10] - puVar7[10]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52f44) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1e52f40) =
               puVar7[10] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          _DAT_01e52efc = _DAT_01e52efc + 1;
        }
        local_24 = local_24 + 1;
        local_1c = local_1c + 1;
      } while (local_1c < vertex_count);
    }
    local_14 = (SSoftwareEdge *)&DAT_01e52f00;
    iVar5 = 0;
    if (0 < _DAT_01e52efc) {
      do {
        if ((_DAT_01e53380 == (local_14->base).y_min) && (local_14 != (SSoftwareEdge *)0x0))
        goto LAB_004fb6af;
        iVar5 = iVar5 + 1;
        local_14 = local_14 + 1;
      } while (iVar5 < _DAT_01e52efc);
    }
    local_14 = (SSoftwareEdge *)0x0;
LAB_004fb6af:
    if (local_14 != (SSoftwareEdge *)0x0) {
      iVar5 = 0;
      left = (SSoftwareEdge *)&DAT_01e52f00;
      if (0 < _DAT_01e52efc) {
        do {
          if ((_DAT_01e53380 == (left->base).y_min) && (left != local_14)) goto LAB_004fb6ee;
          iVar5 = iVar5 + 1;
          left = left + 1;
        } while (iVar5 < _DAT_01e52efc);
      }
      left = (SSoftwareEdge *)0x0;
LAB_004fb6ee:
      if (left != (SSoftwareEdge *)0x0) {
        local_18 = _DAT_01e53380;
        do {
          iVar5 = _DAT_01e52efc;
          if ((local_14->base).y_max <= local_18) {
            (local_14->base).y_min = -1;
            local_14 = (SSoftwareEdge *)&DAT_01e52f00;
            iVar8 = 0;
            if (0 < iVar5) {
              do {
                if ((local_18 == (local_14->base).y_min) && (local_14 != left)) goto LAB_004fb743;
                iVar8 = iVar8 + 1;
                local_14 = local_14 + 1;
              } while (iVar8 < _DAT_01e52efc);
            }
            local_14 = (SSoftwareEdge *)0x0;
LAB_004fb743:
            if (local_14 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          if ((left->base).y_max <= local_18) {
            (left->base).y_min = -1;
            iVar5 = 0;
            left = (SSoftwareEdge *)&DAT_01e52f00;
            if (0 < _DAT_01e52efc) {
              do {
                if ((local_18 == (left->base).y_min) && (left != local_14)) goto LAB_004fb790;
                iVar5 = iVar5 + 1;
                left = left + 1;
              } while (iVar5 < _DAT_01e52efc);
            }
            left = (SSoftwareEdge *)0x0;
LAB_004fb790:
            if (left == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          local_68[0] = (SRenderVertex *)0x4fb7a9;
          engine_special_cpp_renderScanline_FUN_00530710(left,local_14,local_18);
          *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + *(int *)(local_18 + 0xc);
          *(int *)(local_18 + 0x18) = *(int *)(local_18 + 0x18) + *(int *)(local_18 + 0x1c);
          *(int *)(local_18 + 0x20) = *(int *)(local_18 + 0x20) + *(int *)(local_18 + 0x24);
          *(int *)(local_18 + 0x28) = *(int *)(local_18 + 0x28) + *(int *)(local_18 + 0x2c);
          *(int *)(local_18 + 0x10) = *(int *)(local_18 + 0x10) + *(int *)(local_18 + 0x14);
          *(int *)(local_18 + 0x38) = *(int *)(local_18 + 0x38) + *(int *)(local_18 + 0x3c);
          *(int *)(local_18 + 0x40) = *(int *)(local_18 + 0x40) + *(int *)(local_18 + 0x44);
          *(int *)(local_18 + 0x30) = *(int *)(local_18 + 0x30) + *(int *)(local_18 + 0x34);
          (left->base).x_current = (left->base).x_current + (left->base).x_gradient;
          (left->base).u_current = (left->base).u_current + (left->base).u_gradient;
          (left->base).v_current = (left->base).v_current + (left->base).v_gradient;
          iVar5 = left->green_current;
          iVar8 = left->blue_current;
          iVar11 = (left->base).alpha_current;
          (left->base).depth_current = (left->base).depth_current + (left->base).depth_gradient;
          local_1c = local_1c + 1;
          iVar2 = left->green_gradient;
          (left->base).red_current = (left->base).red_current + (left->base).red_gradient;
          left->green_current = iVar5 + iVar2;
          iVar5 = (left->base).alpha_gradient;
          left->blue_current = iVar8 + left->blue_gradient;
          (left->base).alpha_current = iVar11 + iVar5;
        } while( true );
      }
    }
  }
  else {
    iVar5 = 0;
    if (0 < vertex_count) {
      do {
        iVar8 = *vertex_indices;
        iVar11 = iVar5 + 1;
        vertex_indices = vertex_indices + 1;
        local_68[iVar5] = (SRenderVertex *)(&DAT_005c5014 + iVar8 * 0xc);
        iVar5 = iVar11;
      } while (iVar11 < vertex_count);
    }
    engine_special_cpp_drawPolygon2_FUN_00532650(local_68,vertex_count,g_RenderStateFlags.dword);
  }
  return;
}
