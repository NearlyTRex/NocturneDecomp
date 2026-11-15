// Name: engine_prim.c_renderIndexedPolygonAdvanced_FUN_00517480
// Address: 00517480
// Address Range: [[00517480, 00517c1e]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderIndexedPolygonAdvanced_FUN_00517480(int *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_renderIndexedPolygonAdvanced_FUN_00517480(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  SSoftwareEdge *left;
  int iVar4;
  uint uVar5;
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
      iVar8 = 0;
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
          iVar8 = iVar8 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar8 < iVar3);
      }
      if (iVar11 == iVar3) {
        return;
      }
    }
  }
  if ((_DAT_01c6cee8 == 0) || (DAT_007303f4 != 0)) {
    _DAT_01ed3198 = _DAT_01ed3198 + 1;
    switch(_DAT_01c6e2b8) {
    case 1:
      iVar3 = 0;
      piVar6 = vertex_indices;
      if (0 < vertex_count) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_prepareDepthBuffer_FUN_00515920
                    ((SRenderVertex *)(&DAT_0060b014 + *piVar6 * 0xc),1);
          piVar6 = piVar6 + 1;
        } while (iVar3 < vertex_count);
      }
      break;
    case 2:
      iVar3 = 0;
      piVar6 = vertex_indices;
      if (0 < vertex_count) {
        do {
          engine_prim_c_normalizeTextureCoords_FUN_00515990
                    ((SRenderVertex *)(&DAT_0060b014 + *piVar6 * 0xc),1);
          iVar3 = iVar3 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar3 < vertex_count);
      }
      break;
    case 3:
      iVar3 = 0;
      piVar6 = vertex_indices;
      if (0 < vertex_count) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_adjustNearPlaneTextureCoords_FUN_00515a10
                    ((SRenderVertex *)(&DAT_0060b014 + *piVar6 * 0xc),1);
          piVar6 = piVar6 + 1;
        } while (iVar3 < vertex_count);
      }
      break;
    case 5:
      iVar3 = 0;
      piVar6 = vertex_indices;
      if (0 < vertex_count) {
        do {
          engine_prim_c_normalizeTextureCoords_FUN_00515990
                    ((SRenderVertex *)(&DAT_0060b014 + *piVar6 * 0xc),1);
          iVar3 = iVar3 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar3 < vertex_count);
      }
      break;
    case 6:
      iVar3 = 0;
      piVar6 = vertex_indices;
      if (0 < vertex_count) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_replaceWWithDepth_FUN_00515a80
                    ((SRenderVertex *)(&DAT_0060b014 + *piVar6 * 0xc),1);
          piVar6 = piVar6 + 1;
        } while (iVar3 < vertex_count);
      }
    }
    _DAT_01ed36a4 = 0;
    _DAT_01ed319c = 0;
    local_1c = 0;
    _DAT_01ed36a0 = 0x4b0;
    if (0 < vertex_count) {
      local_24 = vertex_indices;
      do {
        iVar3 = local_1c + 1;
        if (vertex_count <= iVar3) {
          iVar3 = 0;
        }
        iVar2 = vertex_indices[iVar3] * 0x30;
        iVar9 = *local_24 * 0x30;
        iVar11 = *(int *)(&DAT_0060b028 + iVar2) >> 0x10;
        iVar8 = *(int *)(&DAT_0060b028 + iVar9) >> 0x10;
        if (iVar8 != iVar11) {
          iVar4 = iVar11;
          puVar7 = &DAT_0060b014 + *local_24 * 0xc;
          puVar12 = &DAT_0060b014 + vertex_indices[iVar3] * 0xc;
          if (*(int *)(&DAT_0060b028 + iVar2) < *(int *)(&DAT_0060b028 + iVar9)) {
            iVar4 = iVar8;
            iVar8 = iVar11;
            puVar7 = &DAT_0060b014 + vertex_indices[iVar3] * 0xc;
            puVar12 = &DAT_0060b014 + *local_24 * 0xc;
          }
          iVar11 = _DAT_01ed319c * 0x50;
          *(int *)(&DAT_01ed31a0 + iVar11) = iVar8;
          iVar3 = _DAT_01ed36a0;
          *(int *)(iVar11 + 0x1ed31a4) = iVar4;
          if (iVar8 < iVar3) {
            _DAT_01ed36a0 = iVar8;
          }
          if (_DAT_01ed36a4 < iVar4) {
            _DAT_01ed36a4 = iVar4;
          }
          if ((uint)(puVar12[5] - puVar7[5]) < 0x10000) {
            iVar3 = 0;
          }
          else {
            iVar3 = (int)(0xffffffff / (ulonglong)(uint)(puVar12[5] - puVar7[5]));
          }
          uVar10 = (uint)(ushort)((ushort)puVar7[5] ^ 0xffff);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[4] - puVar7[4]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed31ac) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          *(uint *)(iVar11 + 0x1ed31a8) =
               puVar7[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[6] - puVar7[6]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed31bc) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          *(uint *)(iVar11 + 0x1ed31b8) =
               puVar7[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[7] - puVar7[7]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed31c4) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          *(uint *)(iVar11 + 0x1ed31c0) =
               puVar7[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[8] - puVar7[8]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed31b4) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          *(uint *)(iVar11 + 0x1ed31b0) =
               puVar7[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[0xb] - puVar7[0xb]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed31d4) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          *(uint *)(iVar11 + 0x1ed31d0) =
               puVar7[0xb] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (_DAT_01c6e2b8 == 1) {
            if (_DAT_01c6e2b0 == 0) {
              local_20 = puVar7[3];
              iVar8 = puVar12[3];
            }
            else {
              local_20 = 0x7fffffff - puVar7[2];
              iVar8 = 0x7fffffff - puVar12[2];
            }
            lVar1 = (longlong)iVar3 * (longlong)(iVar8 - local_20);
            uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1ed31cc) = uVar5;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
            *(uint *)(iVar11 + 0x1ed31c8) =
                 local_20 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          else {
            lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[2] - puVar7[2]);
            uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1ed31cc) = uVar5;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
            *(uint *)(iVar11 + 0x1ed31c8) =
                 puVar7[2] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[9] - puVar7[9]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed31dc) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          local_28 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed31d8) = puVar7[9] + local_28;
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[10] - puVar7[10]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed31e4) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          *(uint *)(iVar11 + 0x1ed31e0) =
               puVar7[10] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          _DAT_01ed319c = _DAT_01ed319c + 1;
        }
        local_24 = local_24 + 1;
        local_1c = local_1c + 1;
      } while (local_1c < vertex_count);
    }
    local_14 = (SSoftwareEdge *)&DAT_01ed31a0;
    iVar3 = 0;
    if (0 < _DAT_01ed319c) {
      do {
        if ((_DAT_01ed36a0 == (local_14->base).y_min) && (local_14 != (SSoftwareEdge *)0x0))
        goto LAB_0051778f;
        iVar3 = iVar3 + 1;
        local_14 = local_14 + 1;
      } while (iVar3 < _DAT_01ed319c);
    }
    local_14 = (SSoftwareEdge *)0x0;
LAB_0051778f:
    if (local_14 != (SSoftwareEdge *)0x0) {
      iVar3 = 0;
      left = (SSoftwareEdge *)&DAT_01ed31a0;
      if (0 < _DAT_01ed319c) {
        do {
          if ((_DAT_01ed36a0 == (left->base).y_min) && (left != local_14)) goto LAB_005177ce;
          iVar3 = iVar3 + 1;
          left = left + 1;
        } while (iVar3 < _DAT_01ed319c);
      }
      left = (SSoftwareEdge *)0x0;
LAB_005177ce:
      if (left != (SSoftwareEdge *)0x0) {
        local_18 = _DAT_01ed36a0;
        do {
          iVar3 = _DAT_01ed319c;
          if ((local_14->base).y_max <= local_18) {
            (local_14->base).y_min = -1;
            local_14 = (SSoftwareEdge *)&DAT_01ed31a0;
            iVar8 = 0;
            if (0 < iVar3) {
              do {
                if ((local_18 == (local_14->base).y_min) && (local_14 != left)) goto LAB_00517823;
                iVar8 = iVar8 + 1;
                local_14 = local_14 + 1;
              } while (iVar8 < _DAT_01ed319c);
            }
            local_14 = (SSoftwareEdge *)0x0;
LAB_00517823:
            if (local_14 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          if ((left->base).y_max <= local_18) {
            (left->base).y_min = -1;
            iVar3 = 0;
            left = (SSoftwareEdge *)&DAT_01ed31a0;
            if (0 < _DAT_01ed319c) {
              do {
                if ((local_18 == (left->base).y_min) && (left != local_14)) goto LAB_00517870;
                iVar3 = iVar3 + 1;
                left = left + 1;
              } while (iVar3 < _DAT_01ed319c);
            }
            left = (SSoftwareEdge *)0x0;
LAB_00517870:
            if (left == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          local_68[0] = (SRenderVertex *)0x517889;
          engine_special_cpp_renderScanline_FUN_00563257(left,local_14,local_18);
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
          iVar3 = left->green_current;
          iVar8 = left->blue_current;
          iVar11 = (left->base).alpha_current;
          (left->base).depth_current = (left->base).depth_current + (left->base).depth_gradient;
          local_1c = local_1c + 1;
          iVar2 = left->green_gradient;
          (left->base).red_current = (left->base).red_current + (left->base).red_gradient;
          left->green_current = iVar3 + iVar2;
          iVar3 = (left->base).alpha_gradient;
          left->blue_current = iVar8 + left->blue_gradient;
          (left->base).alpha_current = iVar11 + iVar3;
        } while( true );
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < vertex_count) {
      do {
        iVar8 = *vertex_indices;
        iVar11 = iVar3 + 1;
        vertex_indices = vertex_indices + 1;
        local_68[iVar3] = (SRenderVertex *)(&DAT_0060b014 + iVar8 * 0xc);
        iVar3 = iVar11;
      } while (iVar11 < vertex_count);
    }
    engine_special_cpp_drawPolygon2_FUN_00565c40(local_68,vertex_count,_DAT_01c6e2b4);
    _DAT_01ed3198 = _DAT_01ed3198 + vertex_count + -2;
  }
  return;
}
