// Name: engine_prim.c_FUN_0051e130
// Address: 0051e130
// Address Range: [[0051e130, 0051e8ce]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_FUN_0051e130(int *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_FUN_0051e130(int *vertex_indices,int vertex_count)

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
  
  if (DAT_0070ca7c != 0) {
    if (vertex_count < 4) {
      apuStack_6c[0] = &DAT_00622014 + vertex_indices[2] * 0xc;
      iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                        (&DAT_00622014 + *vertex_indices * 0xc,
                         &DAT_00622014 + vertex_indices[1] * 0xc);
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
          apuStack_6c[0] = &DAT_00622014 + piVar4[2] * 0xc;
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                            (&DAT_00622014 + *piVar4 * 0xc,&DAT_00622014 + piVar4[1] * 0xc);
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
  if ((_DAT_01c37788 == 0) || (DAT_0070ca74 != 0)) {
    _DAT_01e61b58 = _DAT_01e61b58 + 1;
    switch(_DAT_01c38b58) {
    case 1:
      iVar3 = 0;
      piVar4 = vertex_indices;
      if (0 < vertex_count) {
        do {
          apuStack_6c[0] = (uint *)0x1;
          iVar3 = iVar3 + 1;
          engine_prim_c_prepareDepthBuffer_FUN_0051c5c0(&DAT_00622014 + *piVar4 * 0xc);
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
          engine_prim_c_normalizeTextureCoords_FUN_0051c630(&DAT_00622014 + *piVar4 * 0xc);
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
          engine_prim_c_adjustNearPlaneTextureCoords_FUN_0051c6b0(&DAT_00622014 + *piVar4 * 0xc);
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
          engine_prim_c_normalizeTextureCoords_FUN_0051c630(&DAT_00622014 + *piVar4 * 0xc);
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
          engine_prim_c_replaceWWithDepth_FUN_0051c720(&DAT_00622014 + *piVar4 * 0xc);
          piVar4 = piVar4 + 1;
        } while (iVar3 < vertex_count);
      }
    }
    _DAT_01e62064 = 0;
    _DAT_01e61b5c = 0;
    local_1c = 0;
    _DAT_01e62060 = 0x4b0;
    if (0 < vertex_count) {
      local_24 = vertex_indices;
      do {
        iVar3 = local_1c + 1;
        if (vertex_count <= iVar3) {
          iVar3 = 0;
        }
        iVar2 = vertex_indices[iVar3] * 0x30;
        iVar9 = *local_24 * 0x30;
        iVar11 = *(int *)(&DAT_00622028 + iVar2) >> 0x10;
        iVar8 = *(int *)(&DAT_00622028 + iVar9) >> 0x10;
        if (iVar8 != iVar11) {
          iVar5 = iVar11;
          puVar7 = &DAT_00622014 + *local_24 * 0xc;
          puVar12 = &DAT_00622014 + vertex_indices[iVar3] * 0xc;
          if (*(int *)(&DAT_00622028 + iVar2) < *(int *)(&DAT_00622028 + iVar9)) {
            iVar5 = iVar8;
            iVar8 = iVar11;
            puVar7 = &DAT_00622014 + vertex_indices[iVar3] * 0xc;
            puVar12 = &DAT_00622014 + *local_24 * 0xc;
          }
          iVar11 = _DAT_01e61b5c * 0x50;
          *(int *)(&DAT_01e61b60 + iVar11) = iVar8;
          iVar3 = _DAT_01e62060;
          *(int *)(iVar11 + 0x1e61b64) = iVar5;
          if (iVar8 < iVar3) {
            _DAT_01e62060 = iVar8;
          }
          if (_DAT_01e62064 < iVar5) {
            _DAT_01e62064 = iVar5;
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
          *(uint *)(iVar11 + 0x1e61b6c) = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          *(uint *)(iVar11 + 0x1e61b68) =
               puVar7[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[6] - puVar7[6]);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e61b7c) = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          *(uint *)(iVar11 + 0x1e61b78) =
               puVar7[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[7] - puVar7[7]);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e61b84) = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          *(uint *)(iVar11 + 0x1e61b80) =
               puVar7[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[8] - puVar7[8]);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e61b74) = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          *(uint *)(iVar11 + 0x1e61b70) =
               puVar7[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[0xb] - puVar7[0xb]);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e61b94) = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          *(uint *)(iVar11 + 0x1e61b90) =
               puVar7[0xb] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (_DAT_01c38b58 == 1) {
            if (_DAT_01c38b50 == 0) {
              local_20 = puVar7[3];
              iVar8 = puVar12[3];
            }
            else {
              local_20 = 0x7fffffff - puVar7[2];
              iVar8 = 0x7fffffff - puVar12[2];
            }
            lVar1 = (longlong)iVar3 * (longlong)(iVar8 - local_20);
            uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1e61b8c) = uVar6;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
            *(uint *)(iVar11 + 0x1e61b88) =
                 local_20 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          else {
            lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[2] - puVar7[2]);
            uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1e61b8c) = uVar6;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
            *(uint *)(iVar11 + 0x1e61b88) =
                 puVar7[2] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[9] - puVar7[9]);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e61b9c) = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          local_28 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e61b98) = puVar7[9] + local_28;
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[10] - puVar7[10]);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e61ba4) = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          *(uint *)(iVar11 + 0x1e61ba0) =
               puVar7[10] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          _DAT_01e61b5c = _DAT_01e61b5c + 1;
        }
        local_24 = local_24 + 1;
        local_1c = local_1c + 1;
      } while (local_1c < vertex_count);
    }
    local_14 = (int *)&DAT_01e61b60;
    iVar3 = 0;
    if (0 < _DAT_01e61b5c) {
      do {
        if ((_DAT_01e62060 == *local_14) && (local_14 != (int *)0x0)) goto LAB_0051e43f;
        iVar3 = iVar3 + 1;
        local_14 = local_14 + 0x14;
      } while (iVar3 < _DAT_01e61b5c);
    }
    local_14 = (int *)0x0;
LAB_0051e43f:
    if (local_14 != (int *)0x0) {
      iVar3 = 0;
      piVar4 = (int *)&DAT_01e61b60;
      if (0 < _DAT_01e61b5c) {
        do {
          if ((_DAT_01e62060 == *piVar4) && (piVar4 != local_14)) goto LAB_0051e47e;
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 0x14;
        } while (iVar3 < _DAT_01e61b5c);
      }
      piVar4 = (int *)0x0;
LAB_0051e47e:
      if (piVar4 != (int *)0x0) {
        local_18 = _DAT_01e62060;
        do {
          iVar3 = _DAT_01e61b5c;
          if (local_14[1] <= local_18) {
            *local_14 = -1;
            local_14 = (int *)&DAT_01e61b60;
            iVar8 = 0;
            if (0 < iVar3) {
              do {
                if ((local_18 == *local_14) && (local_14 != piVar4)) goto LAB_0051e4d3;
                iVar8 = iVar8 + 1;
                local_14 = local_14 + 0x14;
              } while (iVar8 < _DAT_01e61b5c);
            }
            local_14 = (int *)0x0;
LAB_0051e4d3:
            if (local_14 == (int *)0x0) {
              return;
            }
          }
          if (piVar4[1] <= local_18) {
            *piVar4 = -1;
            iVar3 = 0;
            piVar4 = (int *)&DAT_01e61b60;
            if (0 < _DAT_01e61b5c) {
              do {
                if ((local_18 == *piVar4) && (piVar4 != local_14)) goto LAB_0051e520;
                iVar3 = iVar3 + 1;
                piVar4 = piVar4 + 0x14;
              } while (iVar3 < _DAT_01e61b5c);
            }
            piVar4 = (int *)0x0;
LAB_0051e520:
            if (piVar4 == (int *)0x0) {
              return;
            }
          }
          apuStack_6c[0] = (uint *)0x51e539;
          engine_special_cpp_FUN_0055d6d7();
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
        apuStack_6c[iVar3] = &DAT_00622014 + iVar8 * 0xc;
      } while (iVar3 < vertex_count);
    }
    apuStack_6c[0] = _DAT_01c38b54;
    engine_special_cpp_drawPolygon2_FUN_0055f920(apuStack_6c + 1,vertex_count);
    _DAT_01e61b58 = _DAT_01e61b58 + vertex_count + -2;
  }
  return;
}
