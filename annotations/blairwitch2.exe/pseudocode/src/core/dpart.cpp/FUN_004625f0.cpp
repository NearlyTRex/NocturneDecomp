// Name: core_dpart.cpp_FUN_004625f0
// Address: 004625f0
// Address Range: [[004625f0, 00462ae0]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_FUN_004625f0(CVector3i *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dpart_cpp_FUN_004625f0(CVector3i *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  CVector3i *pCVar7;
  int iVar8;
  uint *puVar9;
  uint *apuStack_78 [17];
  uint local_34;
  CVector3i *local_30;
  int local_2c;
  uint *local_28;
  uint *local_24;
  uint *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  
  if (DAT_0070ca7c != 0) {
    apuStack_78[0] = &DAT_00622014 + *(int *)(vertex_indices + 8) * 0xc;
    iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                      (&DAT_00622014 + *(int *)vertex_indices * 0xc,
                       &DAT_00622014 + *(int *)(vertex_indices + 4) * 0xc);
    if (iVar8 == 0) {
      return;
    }
  }
  _DAT_01e61b58 = _DAT_01e61b58 + 1;
  if ((_DAT_01c37788 == 0) || (DAT_0070ca74 != 0)) {
    if (_DAT_01c38b58 != 0) {
      if (_DAT_01c38b58 < 2) {
        iVar8 = 0;
        pCVar7 = vertex_indices;
        if (0 < vertex_count) {
          do {
            apuStack_78[0] = (uint *)0x1;
            iVar8 = iVar8 + 1;
            engine_prim_c_prepareDepthBuffer_FUN_0051c5c0(&DAT_00622014 + *(int *)pCVar7 * 0xc);
            pCVar7 = pCVar7 + 4;
          } while (iVar8 < vertex_count);
        }
      }
      else if ((_DAT_01c38b58 == 6) && (iVar8 = 0, pCVar7 = vertex_indices, 0 < vertex_count)) {
        do {
          apuStack_78[0] = (uint *)0x1;
          iVar8 = iVar8 + 1;
          engine_prim_c_replaceWWithDepth_FUN_0051c720(&DAT_00622014 + *(int *)pCVar7 * 0xc);
          pCVar7 = pCVar7 + 4;
        } while (iVar8 < vertex_count);
      }
    }
    _DAT_01ba51c8 = 0;
    _DAT_01ba56d0 = 0;
    local_2c = 0;
    _DAT_01ba56cc = 0x4b0;
    if (0 < vertex_count) {
      local_30 = vertex_indices;
      do {
        iVar8 = local_2c + 1;
        if (vertex_count <= iVar8) {
          iVar8 = 0;
        }
        iVar2 = *(int *)(vertex_indices + iVar8 * 4) * 0x30;
        local_20 = &DAT_00622014 + *(int *)(vertex_indices + iVar8 * 4) * 0xc;
        iVar3 = *(int *)local_30 * 0x30;
        local_24 = &DAT_00622014 + *(int *)local_30 * 0xc;
        iVar4 = *(int *)(&DAT_00622028 + iVar3) >> 0x10;
        iVar8 = *(int *)(&DAT_00622028 + iVar2) >> 0x10;
        local_28 = local_20;
        if (iVar4 != iVar8) {
          iVar5 = iVar4;
          puVar9 = local_24;
          if (*(int *)(&DAT_00622028 + iVar2) < *(int *)(&DAT_00622028 + iVar3)) {
            iVar5 = iVar8;
            iVar8 = iVar4;
            puVar9 = local_20;
            local_28 = local_24;
          }
          iVar3 = _DAT_01ba51c8 * 0x50;
          *(int *)(&DAT_01ba51cc + iVar3) = iVar5;
          iVar2 = _DAT_01ba56cc;
          *(int *)(iVar3 + 0x1ba51d0) = iVar8;
          if (iVar5 < iVar2) {
            _DAT_01ba56cc = iVar5;
          }
          if (_DAT_01ba56d0 < iVar8) {
            _DAT_01ba56d0 = iVar8;
          }
          if ((uint)(local_28[5] - puVar9[5]) < 0x10000) {
            iVar8 = 0;
          }
          else {
            iVar8 = (int)(0xffffffff / (ulonglong)(uint)(local_28[5] - puVar9[5]));
          }
          lVar1 = (longlong)iVar8 * (longlong)(int)(local_28[4] - puVar9[4]);
          *(uint *)(iVar3 + 0x1ba51d8) =
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          lVar1 = (longlong)iVar8 * (longlong)((local_28[2] - puVar9[2]) * 0x100);
          *(uint *)(iVar3 + 0x1ba51f8) =
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          uVar6 = (uint)(ushort)((ushort)puVar9[5] ^ 0xffff);
          lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar3 + 0x1ba51d8);
          local_34 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar3 + 0x1ba51d4) = puVar9[4] + local_34;
          lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar3 + 0x1ba51f8);
          _DAT_01ba51c8 = _DAT_01ba51c8 + 1;
          *(uint *)(iVar3 + 0x1ba51f4) =
               (puVar9[2] * 0x100 - _DAT_01ba5714) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        }
        local_30 = local_30 + 4;
        local_2c = local_2c + 1;
      } while (local_2c < vertex_count);
    }
    iVar8 = 0;
    _DAT_01ba5c80 = 0;
    local_14 = (int *)&DAT_01ba51cc;
    if (0 < _DAT_01ba51c8) {
      do {
        if ((_DAT_01ba56cc == *local_14) && (local_14 != (int *)0x0)) goto LAB_004627e4;
        iVar8 = iVar8 + 1;
        local_14 = local_14 + 0x14;
      } while (iVar8 < _DAT_01ba51c8);
    }
    local_14 = (int *)0x0;
LAB_004627e4:
    if (local_14 != (int *)0x0) {
      local_18 = (int *)&DAT_01ba51cc;
      iVar8 = 0;
      if (0 < _DAT_01ba51c8) {
        do {
          if ((_DAT_01ba56cc == *local_18) && (local_18 != local_14)) goto LAB_0046281d;
          iVar8 = iVar8 + 1;
          local_18 = local_18 + 0x14;
        } while (iVar8 < _DAT_01ba51c8);
      }
      local_18 = (int *)0x0;
LAB_0046281d:
      local_1c = _DAT_01ba56cc;
      if (local_18 != (int *)0x0) {
        do {
          if (local_14[1] <= local_1c) {
            *local_14 = -1;
            local_14 = (int *)&DAT_01ba51cc;
            iVar8 = 0;
            if (0 < _DAT_01ba51c8) {
              do {
                if ((local_1c == *local_14) && (local_14 != local_18)) goto LAB_00462878;
                iVar8 = iVar8 + 1;
                local_14 = local_14 + 0x14;
              } while (iVar8 < _DAT_01ba51c8);
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
            iVar8 = 0;
            if (0 < _DAT_01ba51c8) {
              do {
                if ((local_1c == *local_18) && (local_18 != local_14)) goto LAB_004628c8;
                iVar8 = iVar8 + 1;
                local_18 = local_18 + 0x14;
              } while (iVar8 < _DAT_01ba51c8);
            }
            local_18 = (int *)0x0;
LAB_004628c8:
            if (local_18 == (int *)0x0) {
              return;
            }
          }
          apuStack_78[0] = (uint *)0x4628eb;
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
      iVar8 = 0;
      do {
        iVar2 = *(int *)vertex_indices;
        iVar8 = iVar8 + 1;
        vertex_indices = vertex_indices + 4;
        apuStack_78[iVar8] = &DAT_00622014 + iVar2 * 0xc;
      } while (iVar8 < vertex_count);
    }
    apuStack_78[0] = _DAT_01c38b54;
    engine_special_cpp_drawPolygon2_FUN_0055f920(apuStack_78 + 1,vertex_count);
  }
  return;
}
