// Name: core_dpart.cpp_FUN_0047a480
// Address: 0047a480
// Address Range: [[0047a480, 0047aaf1]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_FUN_0047a480(int *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dpart_cpp_FUN_0047a480(int *vertex_indices,int vertex_count)

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
  
  if ((DAT_00713a7c != 0) &&
     (iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                        ((SRenderVertex *)(&DAT_00629014 + *vertex_indices * 0xc),
                         (SRenderVertex *)(&DAT_00629014 + vertex_indices[1] * 0xc),
                         (SRenderVertex *)(&DAT_00629014 + vertex_indices[2] * 0xc)), iVar5 == 0)) {
    return;
  }
  _DAT_01e7dac8 = _DAT_01e7dac8 + 1;
  if ((_DAT_01c50948 == 0) || (DAT_00713a74 != 0)) {
    _DAT_01bc0784 = 0;
    _DAT_01bc0c8c = 0;
    local_24 = 0;
    _DAT_01bc0c88 = 0x4b0;
    if (0 < vertex_count) {
      local_28 = vertex_indices;
      do {
        iVar5 = local_24 + 1;
        if (vertex_count <= iVar5) {
          iVar5 = 0;
        }
        iVar4 = vertex_indices[iVar5] * 0x30;
        iVar7 = *local_28 * 0x30;
        local_1c = &DAT_00629014 + vertex_indices[iVar5] * 0xc;
        iVar5 = *(int *)(&DAT_00629028 + iVar4) >> 0x10;
        iVar6 = *(int *)(&DAT_00629028 + iVar7) >> 0x10;
        if (iVar6 != iVar5) {
          iVar2 = iVar6;
          puVar8 = &DAT_00629014 + *local_28 * 0xc;
          if (*(int *)(&DAT_00629028 + iVar4) < *(int *)(&DAT_00629028 + iVar7)) {
            iVar2 = iVar5;
            iVar5 = iVar6;
            puVar8 = local_1c;
            local_1c = &DAT_00629014 + *local_28 * 0xc;
          }
          iVar4 = _DAT_01bc0784 * 0x50;
          *(int *)(&DAT_01bc0788 + iVar4) = iVar2;
          iVar6 = _DAT_01bc0c88;
          *(int *)(iVar4 + 0x1bc078c) = iVar5;
          if (iVar2 < iVar6) {
            _DAT_01bc0c88 = iVar2;
          }
          if (_DAT_01bc0c8c < iVar5) {
            _DAT_01bc0c8c = iVar5;
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
          *(uint *)(iVar4 + 0x1bc0794) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1bc0790) =
               puVar8[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[6] - puVar8[6]);
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1bc07a4) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1bc07a0) =
               puVar8[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[7] - puVar8[7]);
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1bc07ac) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1bc07a8) =
               puVar8[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[8] - puVar8[8]);
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1bc079c) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1bc0798) =
               puVar8[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[0xb] - puVar8[0xb]);
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1bc07bc) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1bc07b8) =
               puVar8[0xb] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (DAT_00713a74 == 0) {
            lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[3] - puVar8[3]);
            uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1bc07b4) = uVar3;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar6 = puVar8[3];
          }
          else {
            lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[2] - puVar8[2]);
            uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1bc07b4) = uVar3;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar6 = puVar8[2];
          }
          *(uint *)(iVar4 + 0x1bc07b0) = iVar6 + local_2c;
          if ((_DAT_01c51d14 & 0x200) != 0) {
            lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[9] - puVar8[9]);
            uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1bc07c4) = uVar3;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1bc07c0) = puVar8[9] + local_2c;
            lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[10] - puVar8[10]);
            uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1bc07cc) = uVar3;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
            *(uint *)(iVar4 + 0x1bc07c8) =
                 puVar8[10] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          _DAT_01bc0784 = _DAT_01bc0784 + 1;
        }
        local_28 = local_28 + 1;
        local_24 = local_24 + 1;
      } while (local_24 < vertex_count);
    }
    local_18 = (int *)&DAT_01bc0788;
    iVar5 = 0;
    _DAT_01bc123c = 0;
    if (0 < _DAT_01bc0784) {
      do {
        if ((_DAT_01bc0c88 == *local_18) && (local_18 != (int *)0x0)) goto LAB_0047a634;
        iVar5 = iVar5 + 1;
        local_18 = local_18 + 0x14;
      } while (iVar5 < _DAT_01bc0784);
    }
    local_18 = (int *)0x0;
LAB_0047a634:
    if (local_18 != (int *)0x0) {
      local_14 = (int *)&DAT_01bc0788;
      iVar5 = 0;
      if (0 < _DAT_01bc0784) {
        do {
          if ((_DAT_01bc0c88 == *local_14) && (local_14 != local_18)) goto LAB_0047a66b;
          iVar5 = iVar5 + 1;
          local_14 = local_14 + 0x14;
        } while (iVar5 < _DAT_01bc0784);
      }
      local_14 = (int *)0x0;
LAB_0047a66b:
      if (local_14 != (int *)0x0) {
        local_20 = _DAT_01bc0c88;
        do {
          if (local_18[1] <= local_20) {
            *local_18 = -1;
            local_18 = (int *)&DAT_01bc0788;
            iVar5 = 0;
            if (0 < _DAT_01bc0784) {
              do {
                if ((local_20 == *local_18) && (local_18 != local_14)) goto LAB_0047a6c6;
                iVar5 = iVar5 + 1;
                local_18 = local_18 + 0x14;
              } while (iVar5 < _DAT_01bc0784);
            }
            local_18 = (int *)0x0;
LAB_0047a6c6:
            if (local_18 == (int *)0x0) {
              return;
            }
          }
          if (local_14[1] <= local_20) {
            *local_14 = -1;
            local_14 = (int *)&DAT_01bc0788;
            iVar5 = 0;
            if (0 < _DAT_01bc0784) {
              do {
                if ((local_20 == *local_14) && (local_14 != local_18)) goto LAB_0047a716;
                iVar5 = iVar5 + 1;
                local_14 = local_14 + 0x14;
              } while (iVar5 < _DAT_01bc0784);
            }
            local_14 = (int *)0x0;
LAB_0047a716:
            if (local_14 == (int *)0x0) {
              return;
            }
          }
          engine_special_cpp_FUN_00580127();
          if (_DAT_01bc123c != 0) {
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
          if ((_DAT_01c51d14 & 0x200) == 0) {
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
        local_6c[iVar5] = (SRenderVertex *)(&DAT_00629014 + *vertex_indices * 0xc);
        vertex_indices = vertex_indices + 1;
        iVar5 = iVar6;
      } while (iVar6 < vertex_count);
    }
    engine_special_cpp_drawPolygon2_FUN_00582370(local_6c,vertex_count,_DAT_01c51d14);
  }
  return;
}
