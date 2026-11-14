// Name: core_dpart.cpp_FUN_004673d0
// Address: 004673d0
// Address Range: [[004673d0, 004678c0]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_FUN_004673d0(CVector3i *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dpart_cpp_FUN_004673d0(CVector3i *vertex_indices,int vertex_count)

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
  
  if ((DAT_007303fc != 0) &&
     (iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                        ((SRenderVertex *)(&DAT_0060b014 + vertex_indices->x * 0xc),
                         (SRenderVertex *)(&DAT_0060b014 + vertex_indices->y * 0xc),
                         (SRenderVertex *)(&DAT_0060b014 + vertex_indices->z * 0xc)), iVar3 == 0)) {
    return;
  }
  _DAT_01ed3198 = _DAT_01ed3198 + 1;
  if ((_DAT_01c6cee8 == 0) || (DAT_007303f4 != 0)) {
    if (_DAT_01c6e2b8 != 0) {
      if (_DAT_01c6e2b8 < 2) {
        iVar3 = 0;
        pCVar8 = vertex_indices;
        if (0 < vertex_count) {
          do {
            iVar3 = iVar3 + 1;
            engine_prim_c_prepareDepthBuffer_FUN_00515920
                      ((SRenderVertex *)(&DAT_0060b014 + pCVar8->x * 0xc),1);
            pCVar8 = (CVector3i *)&pCVar8->y;
          } while (iVar3 < vertex_count);
        }
      }
      else if ((_DAT_01c6e2b8 == 6) && (iVar3 = 0, pCVar8 = vertex_indices, 0 < vertex_count)) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_replaceWWithDepth_FUN_00515a80
                    ((SRenderVertex *)(&DAT_0060b014 + pCVar8->x * 0xc),1);
          pCVar8 = (CVector3i *)&pCVar8->y;
        } while (iVar3 < vertex_count);
      }
    }
    _DAT_01bdcfd4 = 0;
    _DAT_01bdd4dc = 0;
    local_2c = 0;
    _DAT_01bdd4d8 = 0x4b0;
    if (0 < vertex_count) {
      local_30 = vertex_indices;
      do {
        iVar3 = local_2c + 1;
        if (vertex_count <= iVar3) {
          iVar3 = 0;
        }
        iVar9 = (&vertex_indices->x)[iVar3] * 0x30;
        local_20 = &DAT_0060b014 + (&vertex_indices->x)[iVar3] * 0xc;
        iVar4 = local_30->x * 0x30;
        local_24 = &DAT_0060b014 + local_30->x * 0xc;
        iVar5 = *(int *)(&DAT_0060b028 + iVar4) >> 0x10;
        iVar3 = *(int *)(&DAT_0060b028 + iVar9) >> 0x10;
        local_28 = local_20;
        if (iVar5 != iVar3) {
          iVar6 = iVar5;
          puVar10 = local_24;
          if (*(int *)(&DAT_0060b028 + iVar9) < *(int *)(&DAT_0060b028 + iVar4)) {
            iVar6 = iVar3;
            iVar3 = iVar5;
            puVar10 = local_20;
            local_28 = local_24;
          }
          iVar4 = _DAT_01bdcfd4 * 0x50;
          *(int *)(&DAT_01bdcfd8 + iVar4) = iVar6;
          iVar9 = _DAT_01bdd4d8;
          *(int *)(iVar4 + 0x1bdcfdc) = iVar3;
          if (iVar6 < iVar9) {
            _DAT_01bdd4d8 = iVar6;
          }
          if (_DAT_01bdd4dc < iVar3) {
            _DAT_01bdd4dc = iVar3;
          }
          if ((uint)(local_28[5] - puVar10[5]) < 0x10000) {
            iVar3 = 0;
          }
          else {
            iVar3 = (int)(0xffffffff / (ulonglong)(uint)(local_28[5] - puVar10[5]));
          }
          lVar1 = (longlong)iVar3 * (longlong)(int)(local_28[4] - puVar10[4]);
          *(uint *)(iVar4 + 0x1bdcfe4) =
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          lVar1 = (longlong)iVar3 * (longlong)((local_28[2] - puVar10[2]) * 0x100);
          *(uint *)(iVar4 + 0x1bdd004) =
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          uVar7 = (uint)(ushort)((ushort)puVar10[5] ^ 0xffff);
          lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar4 + 0x1bdcfe4);
          local_34 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1bdcfe0) = puVar10[4] + local_34;
          lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar4 + 0x1bdd004);
          _DAT_01bdcfd4 = _DAT_01bdcfd4 + 1;
          *(uint *)(iVar4 + 0x1bdd000) =
               (puVar10[2] * 0x100 - _DAT_01bdd520) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        }
        local_30 = (CVector3i *)&local_30->y;
        local_2c = local_2c + 1;
      } while (local_2c < vertex_count);
    }
    iVar3 = 0;
    _DAT_01bdd814 = 0;
    local_14 = (int *)&DAT_01bdcfd8;
    if (0 < _DAT_01bdcfd4) {
      do {
        if ((_DAT_01bdd4d8 == *local_14) && (local_14 != (int *)0x0)) goto LAB_004675c4;
        iVar3 = iVar3 + 1;
        local_14 = local_14 + 0x14;
      } while (iVar3 < _DAT_01bdcfd4);
    }
    local_14 = (int *)0x0;
LAB_004675c4:
    if (local_14 != (int *)0x0) {
      local_18 = (int *)&DAT_01bdcfd8;
      iVar3 = 0;
      if (0 < _DAT_01bdcfd4) {
        do {
          if ((_DAT_01bdd4d8 == *local_18) && (local_18 != local_14)) goto LAB_004675fd;
          iVar3 = iVar3 + 1;
          local_18 = local_18 + 0x14;
        } while (iVar3 < _DAT_01bdcfd4);
      }
      local_18 = (int *)0x0;
LAB_004675fd:
      local_1c = _DAT_01bdd4d8;
      if (local_18 != (int *)0x0) {
        do {
          if (local_14[1] <= local_1c) {
            *local_14 = -1;
            local_14 = (int *)&DAT_01bdcfd8;
            iVar3 = 0;
            if (0 < _DAT_01bdcfd4) {
              do {
                if ((local_1c == *local_14) && (local_14 != local_18)) goto LAB_00467658;
                iVar3 = iVar3 + 1;
                local_14 = local_14 + 0x14;
              } while (iVar3 < _DAT_01bdcfd4);
            }
            local_14 = (int *)0x0;
LAB_00467658:
            if (local_14 == (int *)0x0) {
              return;
            }
          }
          if (local_18[1] <= local_1c) {
            *local_18 = -1;
            local_18 = (int *)&DAT_01bdcfd8;
            iVar3 = 0;
            if (0 < _DAT_01bdcfd4) {
              do {
                if ((local_1c == *local_18) && (local_18 != local_14)) goto LAB_004676a8;
                iVar3 = iVar3 + 1;
                local_18 = local_18 + 0x14;
              } while (iVar3 < _DAT_01bdcfd4);
            }
            local_18 = (int *)0x0;
LAB_004676a8:
            if (local_18 == (int *)0x0) {
              return;
            }
          }
          engine_special_cpp_FUN_00563257();
          if (_DAT_01bdd814 != 0) {
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
        local_74[iVar3] = (SRenderVertex *)(&DAT_0060b014 + *piVar2 * 0xc);
        iVar3 = iVar9;
      } while (iVar9 < vertex_count);
    }
    engine_special_cpp_drawPolygon2_FUN_00565c40(local_74,vertex_count,_DAT_01c6e2b4);
  }
  return;
}
