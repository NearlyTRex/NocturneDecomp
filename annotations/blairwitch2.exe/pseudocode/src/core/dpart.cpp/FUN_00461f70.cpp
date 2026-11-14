// Name: core_dpart.cpp_FUN_00461f70
// Address: 00461f70
// Address Range: [[00461f70, 004625e1]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_FUN_00461f70(int *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dpart_cpp_FUN_00461f70(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  SRenderVertex *local_6c [16];
  uint local_2c;
  int *local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  int *local_18;
  int *local_14;
  
  if ((DAT_0070ca7c != 0) &&
     (iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                        ((SRenderVertex *)(&DAT_00622014 + *vertex_indices * 0xc),
                         (SRenderVertex *)(&DAT_00622014 + vertex_indices[1] * 0xc),
                         (SRenderVertex *)(&DAT_00622014 + vertex_indices[2] * 0xc)), iVar5 == 0)) {
    return;
  }
  _DAT_01e61b58 = _DAT_01e61b58 + 1;
  if ((_DAT_01c37788 == 0) || (DAT_0070ca74 != 0)) {
    _DAT_01ba51c8 = 0;
    _DAT_01ba56d0 = 0;
    local_24 = 0;
    _DAT_01ba56cc = 0x4b0;
    if (0 < vertex_count) {
      local_28 = vertex_indices;
      do {
        iVar5 = local_24 + 1;
        if (vertex_count <= iVar5) {
          iVar5 = 0;
        }
        iVar4 = vertex_indices[iVar5] * 0x30;
        iVar7 = *local_28 * 0x30;
        local_1c = &DAT_00622014 + vertex_indices[iVar5] * 0xc;
        iVar5 = *(int *)(&DAT_00622028 + iVar4) >> 0x10;
        iVar6 = *(int *)(&DAT_00622028 + iVar7) >> 0x10;
        if (iVar6 != iVar5) {
          iVar2 = iVar6;
          puVar8 = &DAT_00622014 + *local_28 * 0xc;
          if (*(int *)(&DAT_00622028 + iVar4) < *(int *)(&DAT_00622028 + iVar7)) {
            iVar2 = iVar5;
            iVar5 = iVar6;
            puVar8 = local_1c;
            local_1c = &DAT_00622014 + *local_28 * 0xc;
          }
          iVar4 = _DAT_01ba51c8 * 0x50;
          *(int *)(&DAT_01ba51cc + iVar4) = iVar2;
          iVar6 = _DAT_01ba56cc;
          *(int *)(iVar4 + 0x1ba51d0) = iVar5;
          if (iVar2 < iVar6) {
            _DAT_01ba56cc = iVar2;
          }
          if (_DAT_01ba56d0 < iVar5) {
            _DAT_01ba56d0 = iVar5;
          }
          if ((uint)(local_1c[5] - puVar8[5]) < 0x10000) {
            iVar5 = 0;
          }
          else {
            iVar5 = (int)(0xffffffff / (ulonglong)(uint)(local_1c[5] - puVar8[5]));
          }
          uVar9 = (uint)(ushort)((ushort)puVar8[5] ^ 0xffff);
          lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[4] - puVar8[4]);
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1ba51d8) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1ba51d4) =
               puVar8[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[6] - puVar8[6]);
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1ba51e8) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1ba51e4) =
               puVar8[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[7] - puVar8[7]);
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1ba51f0) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1ba51ec) =
               puVar8[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[8] - puVar8[8]);
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1ba51e0) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1ba51dc) =
               puVar8[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[0xb] - puVar8[0xb]);
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1ba5200) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1ba51fc) =
               puVar8[0xb] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (DAT_0070ca74 == 0) {
            lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[3] - puVar8[3]);
            uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1ba51f8) = uVar3;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar6 = puVar8[3];
          }
          else {
            lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[2] - puVar8[2]);
            uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1ba51f8) = uVar3;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar6 = puVar8[2];
          }
          *(uint *)(iVar4 + 0x1ba51f4) = iVar6 + local_2c;
          if ((_DAT_01c38b54 & 0x200) != 0) {
            lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[9] - puVar8[9]);
            uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1ba5208) = uVar3;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1ba5204) = puVar8[9] + local_2c;
            lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[10] - puVar8[10]);
            uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1ba5210) = uVar3;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
            *(uint *)(iVar4 + 0x1ba520c) =
                 puVar8[10] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          _DAT_01ba51c8 = _DAT_01ba51c8 + 1;
        }
        local_28 = local_28 + 1;
        local_24 = local_24 + 1;
      } while (local_24 < vertex_count);
    }
    local_18 = (int *)&DAT_01ba51cc;
    iVar5 = 0;
    _DAT_01ba5c80 = 0;
    if (0 < _DAT_01ba51c8) {
      do {
        if ((_DAT_01ba56cc == *local_18) && (local_18 != (int *)0x0)) goto LAB_00462124;
        iVar5 = iVar5 + 1;
        local_18 = local_18 + 0x14;
      } while (iVar5 < _DAT_01ba51c8);
    }
    local_18 = (int *)0x0;
LAB_00462124:
    if (local_18 != (int *)0x0) {
      local_14 = (int *)&DAT_01ba51cc;
      iVar5 = 0;
      if (0 < _DAT_01ba51c8) {
        do {
          if ((_DAT_01ba56cc == *local_14) && (local_14 != local_18)) goto LAB_0046215b;
          iVar5 = iVar5 + 1;
          local_14 = local_14 + 0x14;
        } while (iVar5 < _DAT_01ba51c8);
      }
      local_14 = (int *)0x0;
LAB_0046215b:
      if (local_14 != (int *)0x0) {
        local_20 = _DAT_01ba56cc;
        do {
          if (local_18[1] <= local_20) {
            *local_18 = -1;
            local_18 = (int *)&DAT_01ba51cc;
            iVar5 = 0;
            if (0 < _DAT_01ba51c8) {
              do {
                if ((local_20 == *local_18) && (local_18 != local_14)) goto LAB_004621b6;
                iVar5 = iVar5 + 1;
                local_18 = local_18 + 0x14;
              } while (iVar5 < _DAT_01ba51c8);
            }
            local_18 = (int *)0x0;
LAB_004621b6:
            if (local_18 == (int *)0x0) {
              return;
            }
          }
          if (local_14[1] <= local_20) {
            *local_14 = -1;
            local_14 = (int *)&DAT_01ba51cc;
            iVar5 = 0;
            if (0 < _DAT_01ba51c8) {
              do {
                if ((local_20 == *local_14) && (local_14 != local_18)) goto LAB_00462206;
                iVar5 = iVar5 + 1;
                local_14 = local_14 + 0x14;
              } while (iVar5 < _DAT_01ba51c8);
            }
            local_14 = (int *)0x0;
LAB_00462206:
            if (local_14 == (int *)0x0) {
              return;
            }
          }
          engine_special_cpp_FUN_0055d6d7();
          if (_DAT_01ba5c80 != 0) {
            return;
          }
          local_18[2] = local_18[2] + local_18[3];
          local_18[6] = local_18[6] + local_18[7];
          local_18[8] = local_18[8] + local_18[9];
          local_18[4] = local_18[4] + local_18[5];
          local_18[10] = local_18[10] + local_18[0xb];
          local_18[0xc] = local_18[0xc] + local_18[0xd];
          local_14[2] = local_14[2] + local_14[3];
          local_14[6] = local_14[6] + local_14[7];
          local_14[8] = local_14[8] + local_14[9];
          local_14[4] = local_14[4] + local_14[5];
          local_14[10] = local_14[10] + local_14[0xb];
          local_14[0xc] = local_14[0xc] + local_14[0xd];
          if ((_DAT_01c38b54 & 0x200) == 0) {
            local_20 = local_20 + 1;
          }
          else {
            local_18[0xe] = local_18[0xe] + local_18[0xf];
            local_18[0x10] = local_18[0x10] + local_18[0x11];
            local_14[0xe] = local_14[0xe] + local_14[0xf];
            local_14[0x10] = local_14[0x10] + local_14[0x11];
            local_20 = local_20 + 1;
          }
        } while( true );
      }
    }
  }
  else {
    iVar5 = 0;
    if (0 < vertex_count) {
      do {
        iVar6 = iVar5 + 1;
        local_6c[iVar5] = (SRenderVertex *)(&DAT_00622014 + *vertex_indices * 0xc);
        vertex_indices = vertex_indices + 1;
        iVar5 = iVar6;
      } while (iVar6 < vertex_count);
    }
    engine_special_cpp_drawPolygon2_FUN_0055f920(local_6c,vertex_count,_DAT_01c38b54);
  }
  return;
}
