// Name: core_dpart.cpp_FUN_00466d50
// Address: 00466d50
// Address Range: [[00466d50, 004673c1]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_FUN_00466d50(int *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dpart_cpp_FUN_00466d50(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint *apuStack_70 [17];
  uint local_2c;
  int *local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  int *local_18;
  int *local_14;
  
  if (DAT_007303fc != 0) {
    apuStack_70[0] = &DAT_0060b014 + vertex_indices[2] * 0xc;
    iVar6 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                      (&DAT_0060b014 + *vertex_indices * 0xc,&DAT_0060b014 + vertex_indices[1] * 0xc
                      );
    if (iVar6 == 0) {
      return;
    }
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
        iVar6 = local_24 + 1;
        if (vertex_count <= iVar6) {
          iVar6 = 0;
        }
        iVar5 = vertex_indices[iVar6] * 0x30;
        iVar7 = *local_28 * 0x30;
        local_1c = &DAT_0060b014 + vertex_indices[iVar6] * 0xc;
        iVar6 = *(int *)(&DAT_0060b028 + iVar5) >> 0x10;
        iVar2 = *(int *)(&DAT_0060b028 + iVar7) >> 0x10;
        if (iVar2 != iVar6) {
          iVar3 = iVar2;
          puVar8 = &DAT_0060b014 + *local_28 * 0xc;
          if (*(int *)(&DAT_0060b028 + iVar5) < *(int *)(&DAT_0060b028 + iVar7)) {
            iVar3 = iVar6;
            iVar6 = iVar2;
            puVar8 = local_1c;
            local_1c = &DAT_0060b014 + *local_28 * 0xc;
          }
          iVar5 = _DAT_01bdcfd4 * 0x50;
          *(int *)(&DAT_01bdcfd8 + iVar5) = iVar3;
          iVar2 = _DAT_01bdd4d8;
          *(int *)(iVar5 + 0x1bdcfdc) = iVar6;
          if (iVar3 < iVar2) {
            _DAT_01bdd4d8 = iVar3;
          }
          if (_DAT_01bdd4dc < iVar6) {
            _DAT_01bdd4dc = iVar6;
          }
          if ((uint)(local_1c[5] - puVar8[5]) < 0x10000) {
            iVar6 = 0;
          }
          else {
            iVar6 = (int)(0xffffffff / (ulonglong)(uint)(local_1c[5] - puVar8[5]));
          }
          uVar9 = (uint)(ushort)((ushort)puVar8[5] ^ 0xffff);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[4] - puVar8[4]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1bdcfe4) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1bdcfe0) =
               puVar8[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[6] - puVar8[6]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1bdcff4) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1bdcff0) =
               puVar8[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[7] - puVar8[7]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1bdcffc) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1bdcff8) =
               puVar8[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[8] - puVar8[8]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1bdcfec) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1bdcfe8) =
               puVar8[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[0xb] - puVar8[0xb]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1bdd00c) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1bdd008) =
               puVar8[0xb] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (DAT_007303f4 == 0) {
            lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[3] - puVar8[3]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1bdd004) = uVar4;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar2 = puVar8[3];
          }
          else {
            lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[2] - puVar8[2]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1bdd004) = uVar4;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar2 = puVar8[2];
          }
          *(uint *)(iVar5 + 0x1bdd000) = iVar2 + local_2c;
          if (((uint)_DAT_01c6e2b4 & 0x200) != 0) {
            lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[9] - puVar8[9]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1bdd014) = uVar4;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1bdd010) = puVar8[9] + local_2c;
            lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[10] - puVar8[10]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1bdd01c) = uVar4;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
            *(uint *)(iVar5 + 0x1bdd018) =
                 puVar8[10] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          _DAT_01bdcfd4 = _DAT_01bdcfd4 + 1;
        }
        local_28 = local_28 + 1;
        local_24 = local_24 + 1;
      } while (local_24 < vertex_count);
    }
    local_18 = (int *)&DAT_01bdcfd8;
    iVar6 = 0;
    _DAT_01bdd814 = 0;
    if (0 < _DAT_01bdcfd4) {
      do {
        if ((_DAT_01bdd4d8 == *local_18) && (local_18 != (int *)0x0)) goto LAB_00466f04;
        iVar6 = iVar6 + 1;
        local_18 = local_18 + 0x14;
      } while (iVar6 < _DAT_01bdcfd4);
    }
    local_18 = (int *)0x0;
LAB_00466f04:
    if (local_18 != (int *)0x0) {
      local_14 = (int *)&DAT_01bdcfd8;
      iVar6 = 0;
      if (0 < _DAT_01bdcfd4) {
        do {
          if ((_DAT_01bdd4d8 == *local_14) && (local_14 != local_18)) goto LAB_00466f3b;
          iVar6 = iVar6 + 1;
          local_14 = local_14 + 0x14;
        } while (iVar6 < _DAT_01bdcfd4);
      }
      local_14 = (int *)0x0;
LAB_00466f3b:
      if (local_14 != (int *)0x0) {
        local_20 = _DAT_01bdd4d8;
        do {
          if (local_18[1] <= local_20) {
            *local_18 = -1;
            local_18 = (int *)&DAT_01bdcfd8;
            iVar6 = 0;
            if (0 < _DAT_01bdcfd4) {
              do {
                if ((local_20 == *local_18) && (local_18 != local_14)) goto LAB_00466f96;
                iVar6 = iVar6 + 1;
                local_18 = local_18 + 0x14;
              } while (iVar6 < _DAT_01bdcfd4);
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
            iVar6 = 0;
            if (0 < _DAT_01bdcfd4) {
              do {
                if ((local_20 == *local_14) && (local_14 != local_18)) goto LAB_00466fe6;
                iVar6 = iVar6 + 1;
                local_14 = local_14 + 0x14;
              } while (iVar6 < _DAT_01bdcfd4);
            }
            local_14 = (int *)0x0;
LAB_00466fe6:
            if (local_14 == (int *)0x0) {
              return;
            }
          }
          apuStack_70[0] = (uint *)0x467009;
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
          if (((uint)_DAT_01c6e2b4 & 0x200) == 0) {
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
    iVar6 = 0;
    if (0 < vertex_count) {
      do {
        iVar6 = iVar6 + 1;
        apuStack_70[iVar6] = &DAT_0060b014 + *vertex_indices * 0xc;
        vertex_indices = vertex_indices + 1;
      } while (iVar6 < vertex_count);
    }
    apuStack_70[0] = _DAT_01c6e2b4;
    engine_special_cpp_drawPolygon2_FUN_00565c40(apuStack_70 + 1,vertex_count);
  }
  return;
}
