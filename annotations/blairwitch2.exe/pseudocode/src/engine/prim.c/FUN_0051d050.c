// Name: engine_prim.c_FUN_0051d050
// Address: 0051d050
// Address Range: [[0051d050, 0051d572]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_FUN_0051d050(int *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_FUN_0051d050(int *vertex_indices,int vertex_count)

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
  
  if (DAT_0070ca7c != 0) {
    if (vertex_count < 4) {
      iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                        (&DAT_00622014 + *vertex_indices * 0xc,
                         &DAT_00622014 + vertex_indices[1] * 0xc);
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
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                            (&DAT_00622014 + *piVar6 * 0xc,&DAT_00622014 + piVar6[1] * 0xc);
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
  if ((_DAT_01c37788 == 0) || (DAT_0070ca74 != 0)) {
    _DAT_01e61b50 = 0;
    _DAT_01e61648 = 0;
    local_1c = 0;
    _DAT_01e61b58 = _DAT_01e61b58 + 1;
    _DAT_01e61b4c = 0x4b0;
    if (0 < vertex_count) {
      local_20 = vertex_indices;
      do {
        iVar3 = local_1c + 1;
        if (vertex_count <= iVar3) {
          iVar3 = 0;
        }
        iVar8 = *local_20 * 0x30;
        iVar11 = vertex_indices[iVar3] * 0x30;
        iVar2 = *(int *)(&DAT_00622028 + iVar8) >> 0x10;
        iVar9 = *(int *)(&DAT_00622028 + iVar11) >> 0x10;
        if (iVar2 != iVar9) {
          iVar5 = iVar2;
          puVar7 = &DAT_00622014 + *local_20 * 0xc;
          puVar12 = &DAT_00622014 + vertex_indices[iVar3] * 0xc;
          if (*(int *)(&DAT_00622028 + iVar11) < *(int *)(&DAT_00622028 + iVar8)) {
            iVar5 = iVar9;
            puVar7 = &DAT_00622014 + vertex_indices[iVar3] * 0xc;
            iVar9 = iVar2;
            puVar12 = &DAT_00622014 + *local_20 * 0xc;
          }
          iVar11 = _DAT_01e61648 * 0x50;
          *(int *)(&DAT_01e6164c + iVar11) = iVar5;
          iVar3 = _DAT_01e61b4c;
          *(int *)(iVar11 + 0x1e61650) = iVar9;
          if (iVar5 < iVar3) {
            _DAT_01e61b4c = iVar5;
          }
          if (_DAT_01e61b50 < iVar9) {
            _DAT_01e61b50 = iVar9;
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
          *(uint *)(iVar11 + 0x1e61658) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1e61654) =
               puVar7[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[6] - puVar7[6]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e61668) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1e61664) =
               puVar7[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[7] - puVar7[7]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e61670) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1e6166c) =
               puVar7[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[8] - puVar7[8]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e61660) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          *(uint *)(iVar11 + 0x1e6165c) =
               puVar7[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[0xb] - puVar7[0xb]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e61680) = uVar4;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
          local_24 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e6167c) = puVar7[0xb] + local_24;
          if (_DAT_01c38b58 == 1) {
            if (_DAT_01c38b50 == 0) {
              iVar9 = puVar12[3];
              iVar2 = puVar7[3];
            }
            else {
              iVar2 = 0x7fffffff - puVar7[2];
              iVar9 = 0x7fffffff - puVar12[2];
            }
            lVar1 = (longlong)iVar3 * (longlong)(iVar9 - iVar2);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1e61678) = uVar4;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
            *(uint *)(iVar11 + 0x1e61674) =
                 iVar2 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            _DAT_01e61648 = _DAT_01e61648 + 1;
          }
          else {
            lVar1 = (longlong)iVar3 * (longlong)(int)(puVar12[2] - puVar7[2]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1e61678) = uVar4;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
            *(uint *)(iVar11 + 0x1e61674) =
                 puVar7[2] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            _DAT_01e61648 = _DAT_01e61648 + 1;
          }
        }
        local_20 = local_20 + 1;
        local_1c = local_1c + 1;
      } while (local_1c < vertex_count);
    }
    edge_ptr = engine_prim_c_FUN_0051c580(_DAT_01e61b4c,(SSoftwareEdge *)0x0);
    if ((edge_ptr != (SSoftwareEdge *)0x0) &&
       (local_14 = engine_prim_c_FUN_0051c580(_DAT_01e61b4c,edge_ptr),
       local_14 != (SSoftwareEdge *)0x0)) {
      local_18 = _DAT_01e61b4c;
      iVar3 = _DAT_01e61b4c - DAT_0061b424;
      bVar13 = SBORROW4(_DAT_01e61b4c,DAT_0061b424);
      while (bVar13 != iVar3 < 0) {
        if (*(int *)(edge_ptr + 4) <= local_18) {
          *(uint *)edge_ptr = 0xffffffff;
          edge_ptr = engine_prim_c_FUN_0051c580(local_18,local_14);
          if (edge_ptr == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if (*(int *)(local_14 + 4) <= local_18) {
          *(uint *)local_14 = 0xffffffff;
          local_14 = engine_prim_c_FUN_0051c580(local_18,edge_ptr);
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        engine_special_cpp_FUN_0055d6d7();
        *(int *)(edge_ptr + 8) = *(int *)(edge_ptr + 8) + *(int *)(edge_ptr + 0xc);
        *(int *)(edge_ptr + 0x18) = *(int *)(edge_ptr + 0x18) + *(int *)(edge_ptr + 0x1c);
        *(int *)(edge_ptr + 0x20) = *(int *)(edge_ptr + 0x20) + *(int *)(edge_ptr + 0x24);
        *(int *)(edge_ptr + 0x10) = *(int *)(edge_ptr + 0x10) + *(int *)(edge_ptr + 0x14);
        *(int *)(edge_ptr + 0x28) = *(int *)(edge_ptr + 0x28) + *(int *)(edge_ptr + 0x2c);
        *(int *)(edge_ptr + 0x30) = *(int *)(edge_ptr + 0x30) + *(int *)(edge_ptr + 0x34);
        *(int *)(local_14 + 8) = *(int *)(local_14 + 8) + *(int *)(local_14 + 0xc);
        *(int *)(local_14 + 0x18) = *(int *)(local_14 + 0x18) + *(int *)(local_14 + 0x1c);
        *(int *)(local_14 + 0x20) = *(int *)(local_14 + 0x20) + *(int *)(local_14 + 0x24);
        *(int *)(local_14 + 0x10) = *(int *)(local_14 + 0x10) + *(int *)(local_14 + 0x14);
        *(int *)(local_14 + 0x28) = *(int *)(local_14 + 0x28) + *(int *)(local_14 + 0x2c);
        local_18 = local_18 + 1;
        *(int *)(local_14 + 0x30) = *(int *)(local_14 + 0x30) + *(int *)(local_14 + 0x34);
        iVar3 = local_18 - DAT_0061b424;
        bVar13 = SBORROW4(local_18,DAT_0061b424);
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
        local_64[iVar3] = (int)(&DAT_00622014 + iVar9 * 0xc);
        iVar3 = iVar11;
      } while (iVar11 < vertex_count);
    }
    _DAT_01e61b58 = _DAT_01e61b58 + vertex_count + -2;
    engine_special_cpp_drawPolygon2_FUN_0055f920(local_64,vertex_count);
  }
  return;
}
