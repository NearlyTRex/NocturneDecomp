// Name: engine_prim.c_renderIndexedPolygonAdvanced_FUN_00517480
// Address: 00517480
// Address Range: [[00517480, 00517c1e]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderIndexedPolygonAdvanced_FUN_00517480(int *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_renderIndexedPolygonAdvanced_FUN_00517480(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint *apuStack_6c [17];
  uint local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  
  if (DAT_007303fc != 0) {
    if (vertex_count < 4) {
      apuStack_6c[0] = &DAT_0060b014 + vertex_indices[2] * 0xc;
      iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                        (&DAT_0060b014 + *vertex_indices * 0xc,
                         &DAT_0060b014 + vertex_indices[1] * 0xc);
      if (iVar3 == 0) {
        return;
      }
    }
    else {
      iVar3 = vertex_count + -2;
      iVar8 = 0;
      iVar11 = 0;
      piVar4 = vertex_indices;
      if (0 < iVar3) {
        do {
          apuStack_6c[0] = &DAT_0060b014 + piVar4[2] * 0xc;
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                            (&DAT_0060b014 + *piVar4 * 0xc,&DAT_0060b014 + piVar4[1] * 0xc);
          if (iVar2 == 0) {
            iVar11 = iVar11 + 1;
          }
          iVar8 = iVar8 + 1;
          piVar4 = piVar4 + 1;
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
      piVar4 = vertex_indices;
      if (0 < vertex_count) {
        do {
          apuStack_6c[0] = (uint *)0x1;
          iVar3 = iVar3 + 1;
          engine_prim_c_prepareDepthBuffer_FUN_00515920(&DAT_0060b014 + *piVar4 * 0xc);
          piVar4 = piVar4 + 1;
        } while (iVar3 < vertex_count);
      }
      break;
    case 2:
      iVar3 = 0;
      piVar4 = vertex_indices;
      if (0 < vertex_count) {
        do {
          apuStack_6c[0] = (uint *)0x1;
          engine_prim_c_normalizeTextureCoords_FUN_00515990(&DAT_0060b014 + *piVar4 * 0xc);
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar3 < vertex_count);
      }
      break;
    case 3:
      iVar3 = 0;
      piVar4 = vertex_indices;
      if (0 < vertex_count) {
        do {
          apuStack_6c[0] = (uint *)0x1;
          iVar3 = iVar3 + 1;
          engine_prim_c_adjustNearPlaneTextureCoords_FUN_00515a10(&DAT_0060b014 + *piVar4 * 0xc);
          piVar4 = piVar4 + 1;
        } while (iVar3 < vertex_count);
      }
      break;
    case 5:
      iVar3 = 0;
      piVar4 = vertex_indices;
      if (0 < vertex_count) {
        do {
          apuStack_6c[0] = (uint *)0x1;
          engine_prim_c_normalizeTextureCoords_FUN_00515990(&DAT_0060b014 + *piVar4 * 0xc);
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar3 < vertex_count);
      }
      break;
    case 6:
      iVar3 = 0;
      piVar4 = vertex_indices;
      if (0 < vertex_count) {
        do {
          apuStack_6c[0] = (uint *)0x1;
          iVar3 = iVar3 + 1;
          engine_prim_c_replaceWWithDepth_FUN_00515a80(&DAT_0060b014 + *piVar4 * 0xc);
          piVar4 = piVar4 + 1;
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
          iVar5 = iVar11;
          puVar7 = &DAT_0060b014 + *local_24 * 0xc;
          puVar12 = &DAT_0060b014 + vertex_indices[iVar3] * 0xc;
          if (*(int *)(&DAT_0060b028 + iVar2) < *(int *)(&DAT_0060b028 + iVar9)) {
            iVar5 = iVar8;
            iVar8 = iVar11;
            puVar7 = &DAT_0060b014 + vertex_indices[iVar3] * 0xc;
            puVar12 = &DAT_0060b014 + *local_24 * 0xc;
          }
          iVar11 = _DAT_01ed319c * 0x50;
          *(int *)(&DAT_01ed31a0 + iVar11) = iVar8;
          iVar3 = _DAT_01ed36a0;
          *(int *)(iVar11 + 0x1ed31a4) = iVar5;
          if (iVar8 < iVar3) {
            _DAT_01ed36a0 = iVar8;
          }
          if (_DAT_01ed36a4 < iVar5) {
            _DAT_01ed36a4 = iVar5;
          }
          if ((uint)(puVar12[5] - puVar7[5]) < 0x10000) {
            iVar3 = 0;
          }
          else {
            iVar3 = (int)(0xffffffff / (ulonglong)(uint)(puVar12[5] - puVar7[5]));
          }
          uVar10 = (uint)(ushort)((ushort)puVar7[5] ^ 0xffff);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[4] - puVar7[4]);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed31ac) = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          *(uint *)(iVar11 + 0x1ed31a8) =
               puVar7[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[6] - puVar7[6]);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed31bc) = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          *(uint *)(iVar11 + 0x1ed31b8) =
               puVar7[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[7] - puVar7[7]);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed31c4) = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          *(uint *)(iVar11 + 0x1ed31c0) =
               puVar7[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[8] - puVar7[8]);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed31b4) = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          *(uint *)(iVar11 + 0x1ed31b0) =
               puVar7[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[0xb] - puVar7[0xb]);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed31d4) = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
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
            uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1ed31cc) = uVar6;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
            *(uint *)(iVar11 + 0x1ed31c8) =
                 local_20 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          else {
            lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[2] - puVar7[2]);
            uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1ed31cc) = uVar6;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
            *(uint *)(iVar11 + 0x1ed31c8) =
                 puVar7[2] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[9] - puVar7[9]);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed31dc) = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          local_28 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed31d8) = puVar7[9] + local_28;
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[10] - puVar7[10]);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1ed31e4) = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          *(uint *)(iVar11 + 0x1ed31e0) =
               puVar7[10] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          _DAT_01ed319c = _DAT_01ed319c + 1;
        }
        local_24 = local_24 + 1;
        local_1c = local_1c + 1;
      } while (local_1c < vertex_count);
    }
    local_14 = (int *)&DAT_01ed31a0;
    iVar3 = 0;
    if (0 < _DAT_01ed319c) {
      do {
        if ((_DAT_01ed36a0 == *local_14) && (local_14 != (int *)0x0)) goto LAB_0051778f;
        iVar3 = iVar3 + 1;
        local_14 = local_14 + 0x14;
      } while (iVar3 < _DAT_01ed319c);
    }
    local_14 = (int *)0x0;
LAB_0051778f:
    if (local_14 != (int *)0x0) {
      iVar3 = 0;
      piVar4 = (int *)&DAT_01ed31a0;
      if (0 < _DAT_01ed319c) {
        do {
          if ((_DAT_01ed36a0 == *piVar4) && (piVar4 != local_14)) goto LAB_005177ce;
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 0x14;
        } while (iVar3 < _DAT_01ed319c);
      }
      piVar4 = (int *)0x0;
LAB_005177ce:
      if (piVar4 != (int *)0x0) {
        local_18 = _DAT_01ed36a0;
        do {
          iVar3 = _DAT_01ed319c;
          if (local_14[1] <= local_18) {
            *local_14 = -1;
            local_14 = (int *)&DAT_01ed31a0;
            iVar8 = 0;
            if (0 < iVar3) {
              do {
                if ((local_18 == *local_14) && (local_14 != piVar4)) goto LAB_00517823;
                iVar8 = iVar8 + 1;
                local_14 = local_14 + 0x14;
              } while (iVar8 < _DAT_01ed319c);
            }
            local_14 = (int *)0x0;
LAB_00517823:
            if (local_14 == (int *)0x0) {
              return;
            }
          }
          if (piVar4[1] <= local_18) {
            *piVar4 = -1;
            iVar3 = 0;
            piVar4 = (int *)&DAT_01ed31a0;
            if (0 < _DAT_01ed319c) {
              do {
                if ((local_18 == *piVar4) && (piVar4 != local_14)) goto LAB_00517870;
                iVar3 = iVar3 + 1;
                piVar4 = piVar4 + 0x14;
              } while (iVar3 < _DAT_01ed319c);
            }
            piVar4 = (int *)0x0;
LAB_00517870:
            if (piVar4 == (int *)0x0) {
              return;
            }
          }
          apuStack_6c[0] = (uint *)0x517889;
          engine_special_cpp_FUN_00563257();
          local_14[2] = local_14[2] + local_14[3];
          local_14[6] = local_14[6] + local_14[7];
          local_14[8] = local_14[8] + local_14[9];
          local_14[10] = local_14[10] + local_14[0xb];
          local_14[4] = local_14[4] + local_14[5];
          local_14[0xe] = local_14[0xe] + local_14[0xf];
          local_14[0x10] = local_14[0x10] + local_14[0x11];
          local_14[0xc] = local_14[0xc] + local_14[0xd];
          piVar4[2] = piVar4[2] + piVar4[3];
          piVar4[6] = piVar4[6] + piVar4[7];
          piVar4[8] = piVar4[8] + piVar4[9];
          piVar4[10] = piVar4[10] + piVar4[0xb];
          local_18 = local_18 + 1;
          piVar4[4] = piVar4[4] + piVar4[5];
          piVar4[0xe] = piVar4[0xe] + piVar4[0xf];
          piVar4[0x10] = piVar4[0x10] + piVar4[0x11];
          piVar4[0xc] = piVar4[0xc] + piVar4[0xd];
        } while( true );
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < vertex_count) {
      do {
        iVar8 = *vertex_indices;
        iVar3 = iVar3 + 1;
        vertex_indices = vertex_indices + 1;
        apuStack_6c[iVar3] = &DAT_0060b014 + iVar8 * 0xc;
      } while (iVar3 < vertex_count);
    }
    apuStack_6c[0] = _DAT_01c6e2b4;
    engine_special_cpp_drawPolygon2_FUN_00565c40(apuStack_6c + 1,vertex_count);
    _DAT_01ed3198 = _DAT_01ed3198 + vertex_count + -2;
  }
  return;
}
