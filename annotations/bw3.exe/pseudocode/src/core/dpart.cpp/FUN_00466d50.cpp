// Name: core_dpart.cpp_FUN_00466d50
// Address: 00466d50
// Address Range: [[00466d50, 004673c1]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_FUN_00466d50(int *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dpart_cpp_FUN_00466d50(int *vertex_indices,int vertex_count)

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
  
  if ((DAT_007303fc != 0) &&
     (iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                        ((SRenderVertex *)(&DAT_0060b014 + *vertex_indices * 0xc),
                         (SRenderVertex *)(&DAT_0060b014 + vertex_indices[1] * 0xc),
                         (SRenderVertex *)(&DAT_0060b014 + vertex_indices[2] * 0xc)), iVar5 == 0)) {
    return;
  }
  _DAT_01ed3198 = _DAT_01ed3198 + 1;
  if ((_DAT_01c6cee8 == 0) || (DAT_007303f4 != 0)) {
    _DAT_01bdcfd4 = 0;
    _DAT_01bdd4dc = 0;
    local_24 = 0;
    _DAT_01bdd4d8 = 0x4b0;
    if (0 < vertex_count) {
      local_28 = vertex_indices;
      do {
        iVar5 = local_24 + 1;
        if (vertex_count <= iVar5) {
          iVar5 = 0;
        }
        iVar4 = vertex_indices[iVar5] * 0x30;
        iVar7 = *local_28 * 0x30;
        local_1c = &DAT_0060b014 + vertex_indices[iVar5] * 0xc;
        iVar5 = *(int *)(&DAT_0060b028 + iVar4) >> 0x10;
        iVar6 = *(int *)(&DAT_0060b028 + iVar7) >> 0x10;
        if (iVar6 != iVar5) {
          iVar2 = iVar6;
          puVar8 = &DAT_0060b014 + *local_28 * 0xc;
          if (*(int *)(&DAT_0060b028 + iVar4) < *(int *)(&DAT_0060b028 + iVar7)) {
            iVar2 = iVar5;
            iVar5 = iVar6;
            puVar8 = local_1c;
            local_1c = &DAT_0060b014 + *local_28 * 0xc;
          }
          iVar4 = _DAT_01bdcfd4 * 0x50;
          *(int *)(&DAT_01bdcfd8 + iVar4) = iVar2;
          iVar6 = _DAT_01bdd4d8;
          *(int *)(iVar4 + 0x1bdcfdc) = iVar5;
          if (iVar2 < iVar6) {
            _DAT_01bdd4d8 = iVar2;
          }
          if (_DAT_01bdd4dc < iVar5) {
            _DAT_01bdd4dc = iVar5;
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
          *(uint *)(iVar4 + 0x1bdcfe4) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1bdcfe0) =
               puVar8[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[6] - puVar8[6]);
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1bdcff4) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1bdcff0) =
               puVar8[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[7] - puVar8[7]);
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1bdcffc) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1bdcff8) =
               puVar8[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[8] - puVar8[8]);
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1bdcfec) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1bdcfe8) =
               puVar8[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[0xb] - puVar8[0xb]);
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1bdd00c) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1bdd008) =
               puVar8[0xb] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (DAT_007303f4 == 0) {
            lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[3] - puVar8[3]);
            uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1bdd004) = uVar3;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar6 = puVar8[3];
          }
          else {
            lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[2] - puVar8[2]);
            uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1bdd004) = uVar3;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar6 = puVar8[2];
          }
          *(uint *)(iVar4 + 0x1bdd000) = iVar6 + local_2c;
          if ((_DAT_01c6e2b4 & 0x200) != 0) {
            lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[9] - puVar8[9]);
            uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1bdd014) = uVar3;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1bdd010) = puVar8[9] + local_2c;
            lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[10] - puVar8[10]);
            uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1bdd01c) = uVar3;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
            *(uint *)(iVar4 + 0x1bdd018) =
                 puVar8[10] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          _DAT_01bdcfd4 = _DAT_01bdcfd4 + 1;
        }
        local_28 = local_28 + 1;
        local_24 = local_24 + 1;
      } while (local_24 < vertex_count);
    }
    local_18 = (int *)&DAT_01bdcfd8;
    iVar5 = 0;
    _DAT_01bdd814 = 0;
    if (0 < _DAT_01bdcfd4) {
      do {
        if ((_DAT_01bdd4d8 == *local_18) && (local_18 != (int *)0x0)) goto LAB_00466f04;
        iVar5 = iVar5 + 1;
        local_18 = local_18 + 0x14;
      } while (iVar5 < _DAT_01bdcfd4);
    }
    local_18 = (int *)0x0;
LAB_00466f04:
    if (local_18 != (int *)0x0) {
      local_14 = (int *)&DAT_01bdcfd8;
      iVar5 = 0;
      if (0 < _DAT_01bdcfd4) {
        do {
          if ((_DAT_01bdd4d8 == *local_14) && (local_14 != local_18)) goto LAB_00466f3b;
          iVar5 = iVar5 + 1;
          local_14 = local_14 + 0x14;
        } while (iVar5 < _DAT_01bdcfd4);
      }
      local_14 = (int *)0x0;
LAB_00466f3b:
      if (local_14 != (int *)0x0) {
        local_20 = _DAT_01bdd4d8;
        do {
          if (local_18[1] <= local_20) {
            *local_18 = -1;
            local_18 = (int *)&DAT_01bdcfd8;
            iVar5 = 0;
            if (0 < _DAT_01bdcfd4) {
              do {
                if ((local_20 == *local_18) && (local_18 != local_14)) goto LAB_00466f96;
                iVar5 = iVar5 + 1;
                local_18 = local_18 + 0x14;
              } while (iVar5 < _DAT_01bdcfd4);
            }
            local_18 = (int *)0x0;
LAB_00466f96:
            if (local_18 == (int *)0x0) {
              return;
            }
          }
          if (local_14[1] <= local_20) {
            *local_14 = -1;
            local_14 = (int *)&DAT_01bdcfd8;
            iVar5 = 0;
            if (0 < _DAT_01bdcfd4) {
              do {
                if ((local_20 == *local_14) && (local_14 != local_18)) goto LAB_00466fe6;
                iVar5 = iVar5 + 1;
                local_14 = local_14 + 0x14;
              } while (iVar5 < _DAT_01bdcfd4);
            }
            local_14 = (int *)0x0;
LAB_00466fe6:
            if (local_14 == (int *)0x0) {
              return;
            }
          }
          engine_special_cpp_FUN_00563257();
          if (_DAT_01bdd814 != 0) {
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
          if ((_DAT_01c6e2b4 & 0x200) == 0) {
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
        local_6c[iVar5] = (SRenderVertex *)(&DAT_0060b014 + *vertex_indices * 0xc);
        vertex_indices = vertex_indices + 1;
        iVar5 = iVar6;
      } while (iVar6 < vertex_count);
    }
    engine_special_cpp_drawPolygon2_FUN_00565c40(local_6c,vertex_count,_DAT_01c6e2b4);
  }
  return;
}
