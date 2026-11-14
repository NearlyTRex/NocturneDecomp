// Name: core_dpart.cpp_FUN_004625f0
// Address: 004625f0
// Address Range: [[004625f0, 00462ae0]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_FUN_004625f0(CVector3i *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dpart_cpp_FUN_004625f0(CVector3i *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  CVector3i *pCVar8;
  int iVar9;
  uint *puVar10;
  SRenderVertex *local_74 [16];
  uint local_34;
  CVector3i *local_30;
  int local_2c;
  uint *local_28;
  uint *local_24;
  uint *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  
  if ((DAT_0070ca7c != 0) &&
     (iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                        ((SRenderVertex *)(&DAT_00622014 + vertex_indices->x * 0xc),
                         (SRenderVertex *)(&DAT_00622014 + vertex_indices->y * 0xc),
                         (SRenderVertex *)(&DAT_00622014 + vertex_indices->z * 0xc)), iVar3 == 0)) {
    return;
  }
  _DAT_01e61b58 = _DAT_01e61b58 + 1;
  if ((_DAT_01c37788 == 0) || (DAT_0070ca74 != 0)) {
    if (_DAT_01c38b58 != 0) {
      if (_DAT_01c38b58 < 2) {
        iVar3 = 0;
        pCVar8 = vertex_indices;
        if (0 < vertex_count) {
          do {
            iVar3 = iVar3 + 1;
            engine_prim_c_prepareDepthBuffer_FUN_0051c5c0
                      ((SRenderVertex *)(&DAT_00622014 + pCVar8->x * 0xc),1);
            pCVar8 = (CVector3i *)&pCVar8->y;
          } while (iVar3 < vertex_count);
        }
      }
      else if ((_DAT_01c38b58 == 6) && (iVar3 = 0, pCVar8 = vertex_indices, 0 < vertex_count)) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_replaceWWithDepth_FUN_0051c720
                    ((SRenderVertex *)(&DAT_00622014 + pCVar8->x * 0xc),1);
          pCVar8 = (CVector3i *)&pCVar8->y;
        } while (iVar3 < vertex_count);
      }
    }
    _DAT_01ba51c8 = 0;
    _DAT_01ba56d0 = 0;
    local_2c = 0;
    _DAT_01ba56cc = 0x4b0;
    if (0 < vertex_count) {
      local_30 = vertex_indices;
      do {
        iVar3 = local_2c + 1;
        if (vertex_count <= iVar3) {
          iVar3 = 0;
        }
        iVar9 = (&vertex_indices->x)[iVar3] * 0x30;
        local_20 = &DAT_00622014 + (&vertex_indices->x)[iVar3] * 0xc;
        iVar4 = local_30->x * 0x30;
        local_24 = &DAT_00622014 + local_30->x * 0xc;
        iVar5 = *(int *)(&DAT_00622028 + iVar4) >> 0x10;
        iVar3 = *(int *)(&DAT_00622028 + iVar9) >> 0x10;
        local_28 = local_20;
        if (iVar5 != iVar3) {
          iVar6 = iVar5;
          puVar10 = local_24;
          if (*(int *)(&DAT_00622028 + iVar9) < *(int *)(&DAT_00622028 + iVar4)) {
            iVar6 = iVar3;
            iVar3 = iVar5;
            puVar10 = local_20;
            local_28 = local_24;
          }
          iVar4 = _DAT_01ba51c8 * 0x50;
          *(int *)(&DAT_01ba51cc + iVar4) = iVar6;
          iVar9 = _DAT_01ba56cc;
          *(int *)(iVar4 + 0x1ba51d0) = iVar3;
          if (iVar6 < iVar9) {
            _DAT_01ba56cc = iVar6;
          }
          if (_DAT_01ba56d0 < iVar3) {
            _DAT_01ba56d0 = iVar3;
          }
          if ((uint)(local_28[5] - puVar10[5]) < 0x10000) {
            iVar3 = 0;
          }
          else {
            iVar3 = (int)(0xffffffff / (ulonglong)(uint)(local_28[5] - puVar10[5]));
          }
          lVar1 = (longlong)iVar3 * (longlong)(int)(local_28[4] - puVar10[4]);
          *(uint *)(iVar4 + 0x1ba51d8) =
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          lVar1 = (longlong)iVar3 * (longlong)((local_28[2] - puVar10[2]) * 0x100);
          *(uint *)(iVar4 + 0x1ba51f8) =
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          uVar7 = (uint)(ushort)((ushort)puVar10[5] ^ 0xffff);
          lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar4 + 0x1ba51d8);
          local_34 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1ba51d4) = puVar10[4] + local_34;
          lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar4 + 0x1ba51f8);
          _DAT_01ba51c8 = _DAT_01ba51c8 + 1;
          *(uint *)(iVar4 + 0x1ba51f4) =
               (puVar10[2] * 0x100 - _DAT_01ba5714) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        }
        local_30 = (CVector3i *)&local_30->y;
        local_2c = local_2c + 1;
      } while (local_2c < vertex_count);
    }
    iVar3 = 0;
    _DAT_01ba5c80 = 0;
    local_14 = (int *)&DAT_01ba51cc;
    if (0 < _DAT_01ba51c8) {
      do {
        if ((_DAT_01ba56cc == *local_14) && (local_14 != (int *)0x0)) goto LAB_004627e4;
        iVar3 = iVar3 + 1;
        local_14 = local_14 + 0x14;
      } while (iVar3 < _DAT_01ba51c8);
    }
    local_14 = (int *)0x0;
LAB_004627e4:
    if (local_14 != (int *)0x0) {
      local_18 = (int *)&DAT_01ba51cc;
      iVar3 = 0;
      if (0 < _DAT_01ba51c8) {
        do {
          if ((_DAT_01ba56cc == *local_18) && (local_18 != local_14)) goto LAB_0046281d;
          iVar3 = iVar3 + 1;
          local_18 = local_18 + 0x14;
        } while (iVar3 < _DAT_01ba51c8);
      }
      local_18 = (int *)0x0;
LAB_0046281d:
      local_1c = _DAT_01ba56cc;
      if (local_18 != (int *)0x0) {
        do {
          if (local_14[1] <= local_1c) {
            *local_14 = -1;
            local_14 = (int *)&DAT_01ba51cc;
            iVar3 = 0;
            if (0 < _DAT_01ba51c8) {
              do {
                if ((local_1c == *local_14) && (local_14 != local_18)) goto LAB_00462878;
                iVar3 = iVar3 + 1;
                local_14 = local_14 + 0x14;
              } while (iVar3 < _DAT_01ba51c8);
            }
            local_14 = (int *)0x0;
LAB_00462878:
            if (local_14 == (int *)0x0) {
              return;
            }
          }
          if (local_18[1] <= local_1c) {
            *local_18 = -1;
            local_18 = (int *)&DAT_01ba51cc;
            iVar3 = 0;
            if (0 < _DAT_01ba51c8) {
              do {
                if ((local_1c == *local_18) && (local_18 != local_14)) goto LAB_004628c8;
                iVar3 = iVar3 + 1;
                local_18 = local_18 + 0x14;
              } while (iVar3 < _DAT_01ba51c8);
            }
            local_18 = (int *)0x0;
LAB_004628c8:
            if (local_18 == (int *)0x0) {
              return;
            }
          }
          engine_special_cpp_FUN_0055d6d7();
          if (_DAT_01ba5c80 != 0) {
            return;
          }
          local_14[2] = local_14[2] + local_14[3];
          local_14[10] = local_14[10] + local_14[0xb];
          local_18[2] = local_18[2] + local_18[3];
          local_18[10] = local_18[10] + local_18[0xb];
          local_1c = local_1c + 1;
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
        local_74[iVar3] = (SRenderVertex *)(&DAT_00622014 + *piVar2 * 0xc);
        iVar3 = iVar9;
      } while (iVar9 < vertex_count);
    }
    engine_special_cpp_drawPolygon2_FUN_0055f920(local_74,vertex_count,_DAT_01c38b54);
  }
  return;
}
