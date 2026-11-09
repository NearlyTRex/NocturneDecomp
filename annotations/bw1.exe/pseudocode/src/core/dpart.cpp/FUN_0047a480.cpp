// Name: core_dpart.cpp_FUN_0047a480
// Address: 0047a480
// Address Range: [[0047a480, 0047aaf1]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_FUN_0047a480(int *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dpart_cpp_FUN_0047a480(int *vertex_indices,int vertex_count)

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
  
  if (DAT_00713a7c != 0) {
    apuStack_70[0] = &DAT_00629014 + vertex_indices[2] * 0xc;
    iVar6 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                      (&DAT_00629014 + *vertex_indices * 0xc,&DAT_00629014 + vertex_indices[1] * 0xc
                      );
    if (iVar6 == 0) {
      return;
    }
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
        iVar6 = local_24 + 1;
        if (vertex_count <= iVar6) {
          iVar6 = 0;
        }
        iVar5 = vertex_indices[iVar6] * 0x30;
        iVar7 = *local_28 * 0x30;
        local_1c = &DAT_00629014 + vertex_indices[iVar6] * 0xc;
        iVar6 = *(int *)(&DAT_00629028 + iVar5) >> 0x10;
        iVar2 = *(int *)(&DAT_00629028 + iVar7) >> 0x10;
        if (iVar2 != iVar6) {
          iVar3 = iVar2;
          puVar8 = &DAT_00629014 + *local_28 * 0xc;
          if (*(int *)(&DAT_00629028 + iVar5) < *(int *)(&DAT_00629028 + iVar7)) {
            iVar3 = iVar6;
            iVar6 = iVar2;
            puVar8 = local_1c;
            local_1c = &DAT_00629014 + *local_28 * 0xc;
          }
          iVar5 = _DAT_01bc0784 * 0x50;
          *(int *)(&DAT_01bc0788 + iVar5) = iVar3;
          iVar2 = _DAT_01bc0c88;
          *(int *)(iVar5 + 0x1bc078c) = iVar6;
          if (iVar3 < iVar2) {
            _DAT_01bc0c88 = iVar3;
          }
          if (_DAT_01bc0c8c < iVar6) {
            _DAT_01bc0c8c = iVar6;
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
          *(uint *)(iVar5 + 0x1bc0794) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1bc0790) =
               puVar8[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[6] - puVar8[6]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1bc07a4) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1bc07a0) =
               puVar8[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[7] - puVar8[7]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1bc07ac) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1bc07a8) =
               puVar8[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[8] - puVar8[8]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1bc079c) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1bc0798) =
               puVar8[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[0xb] - puVar8[0xb]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1bc07bc) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1bc07b8) =
               puVar8[0xb] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (DAT_00713a74 == 0) {
            lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[3] - puVar8[3]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1bc07b4) = uVar4;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar2 = puVar8[3];
          }
          else {
            lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[2] - puVar8[2]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1bc07b4) = uVar4;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar2 = puVar8[2];
          }
          *(uint *)(iVar5 + 0x1bc07b0) = iVar2 + local_2c;
          if (((uint)_DAT_01c51d14 & 0x200) != 0) {
            lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[9] - puVar8[9]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1bc07c4) = uVar4;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1bc07c0) = puVar8[9] + local_2c;
            lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[10] - puVar8[10]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1bc07cc) = uVar4;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
            *(uint *)(iVar5 + 0x1bc07c8) =
                 puVar8[10] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          _DAT_01bc0784 = _DAT_01bc0784 + 1;
        }
        local_28 = local_28 + 1;
        local_24 = local_24 + 1;
      } while (local_24 < vertex_count);
    }
    local_18 = (int *)&DAT_01bc0788;
    iVar6 = 0;
    _DAT_01bc123c = 0;
    if (0 < _DAT_01bc0784) {
      do {
        if ((_DAT_01bc0c88 == *local_18) && (local_18 != (int *)0x0)) goto LAB_0047a634;
        iVar6 = iVar6 + 1;
        local_18 = local_18 + 0x14;
      } while (iVar6 < _DAT_01bc0784);
    }
    local_18 = (int *)0x0;
LAB_0047a634:
    if (local_18 != (int *)0x0) {
      local_14 = (int *)&DAT_01bc0788;
      iVar6 = 0;
      if (0 < _DAT_01bc0784) {
        do {
          if ((_DAT_01bc0c88 == *local_14) && (local_14 != local_18)) goto LAB_0047a66b;
          iVar6 = iVar6 + 1;
          local_14 = local_14 + 0x14;
        } while (iVar6 < _DAT_01bc0784);
      }
      local_14 = (int *)0x0;
LAB_0047a66b:
      if (local_14 != (int *)0x0) {
        local_20 = _DAT_01bc0c88;
        do {
          if (local_18[1] <= local_20) {
            *local_18 = -1;
            local_18 = (int *)&DAT_01bc0788;
            iVar6 = 0;
            if (0 < _DAT_01bc0784) {
              do {
                if ((local_20 == *local_18) && (local_18 != local_14)) goto LAB_0047a6c6;
                iVar6 = iVar6 + 1;
                local_18 = local_18 + 0x14;
              } while (iVar6 < _DAT_01bc0784);
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
            iVar6 = 0;
            if (0 < _DAT_01bc0784) {
              do {
                if ((local_20 == *local_14) && (local_14 != local_18)) goto LAB_0047a716;
                iVar6 = iVar6 + 1;
                local_14 = local_14 + 0x14;
              } while (iVar6 < _DAT_01bc0784);
            }
            local_14 = (int *)0x0;
LAB_0047a716:
            if (local_14 == (int *)0x0) {
              return;
            }
          }
          apuStack_70[0] = (uint *)0x47a739;
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
          if (((uint)_DAT_01c51d14 & 0x200) == 0) {
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
        apuStack_70[iVar6] = &DAT_00629014 + *vertex_indices * 0xc;
        vertex_indices = vertex_indices + 1;
      } while (iVar6 < vertex_count);
    }
    apuStack_70[0] = _DAT_01c51d14;
    engine_special_cpp_drawPolygon2_FUN_00582370(apuStack_70 + 1,vertex_count);
  }
  return;
}
