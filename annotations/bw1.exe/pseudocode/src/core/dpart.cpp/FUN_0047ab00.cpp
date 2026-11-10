// Name: core_dpart.cpp_FUN_0047ab00
// Address: 0047ab00
// Address Range: [[0047ab00, 0047aff0]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_FUN_0047ab00(CVector3i *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dpart_cpp_FUN_0047ab00(CVector3i *vertex_indices,int vertex_count)

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
  
  if (DAT_00713a7c != 0) {
    apuStack_78[0] = &DAT_00629014 + vertex_indices->z * 0xc;
    iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                      (&DAT_00629014 + vertex_indices->x * 0xc,
                       &DAT_00629014 + vertex_indices->y * 0xc);
    if (iVar9 == 0) {
      return;
    }
  }
  _DAT_01e7dac8 = _DAT_01e7dac8 + 1;
  if ((_DAT_01c50948 == 0) || (DAT_00713a74 != 0)) {
    if (_DAT_01c51d18 != 0) {
      if (_DAT_01c51d18 < 2) {
        iVar9 = 0;
        pCVar8 = vertex_indices;
        if (0 < vertex_count) {
          do {
            apuStack_78[0] = (uint *)0x1;
            iVar9 = iVar9 + 1;
            engine_prim_c_prepareDepthBuffer_FUN_0053dbc0(&DAT_00629014 + pCVar8->x * 0xc);
            pCVar8 = (CVector3i *)&pCVar8->y;
          } while (iVar9 < vertex_count);
        }
      }
      else if ((_DAT_01c51d18 == 6) && (iVar9 = 0, pCVar8 = vertex_indices, 0 < vertex_count)) {
        do {
          apuStack_78[0] = (uint *)0x1;
          iVar9 = iVar9 + 1;
          engine_prim_c_replaceWWithDepth_FUN_0053dd20(&DAT_00629014 + pCVar8->x * 0xc);
          pCVar8 = (CVector3i *)&pCVar8->y;
        } while (iVar9 < vertex_count);
      }
    }
    _DAT_01bc0784 = 0;
    _DAT_01bc0c8c = 0;
    local_2c = 0;
    _DAT_01bc0c88 = 0x4b0;
    if (0 < vertex_count) {
      local_30 = vertex_indices;
      do {
        iVar9 = local_2c + 1;
        if (vertex_count <= iVar9) {
          iVar9 = 0;
        }
        iVar3 = (&vertex_indices->x)[iVar9] * 0x30;
        local_20 = &DAT_00629014 + (&vertex_indices->x)[iVar9] * 0xc;
        iVar4 = local_30->x * 0x30;
        local_24 = &DAT_00629014 + local_30->x * 0xc;
        iVar5 = *(int *)(&DAT_00629028 + iVar4) >> 0x10;
        iVar9 = *(int *)(&DAT_00629028 + iVar3) >> 0x10;
        local_28 = local_20;
        if (iVar5 != iVar9) {
          iVar6 = iVar5;
          puVar10 = local_24;
          if (*(int *)(&DAT_00629028 + iVar3) < *(int *)(&DAT_00629028 + iVar4)) {
            iVar6 = iVar9;
            iVar9 = iVar5;
            puVar10 = local_20;
            local_28 = local_24;
          }
          iVar4 = _DAT_01bc0784 * 0x50;
          *(int *)(&DAT_01bc0788 + iVar4) = iVar6;
          iVar3 = _DAT_01bc0c88;
          *(int *)(iVar4 + 0x1bc078c) = iVar9;
          if (iVar6 < iVar3) {
            _DAT_01bc0c88 = iVar6;
          }
          if (_DAT_01bc0c8c < iVar9) {
            _DAT_01bc0c8c = iVar9;
          }
          if ((uint)(local_28[5] - puVar10[5]) < 0x10000) {
            iVar9 = 0;
          }
          else {
            iVar9 = (int)(0xffffffff / (ulonglong)(uint)(local_28[5] - puVar10[5]));
          }
          lVar1 = (longlong)iVar9 * (longlong)(int)(local_28[4] - puVar10[4]);
          *(uint *)(iVar4 + 0x1bc0794) =
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          lVar1 = (longlong)iVar9 * (longlong)((local_28[2] - puVar10[2]) * 0x100);
          *(uint *)(iVar4 + 0x1bc07b4) =
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          uVar7 = (uint)(ushort)((ushort)puVar10[5] ^ 0xffff);
          lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar4 + 0x1bc0794);
          local_34 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1bc0790) = puVar10[4] + local_34;
          lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar4 + 0x1bc07b4);
          _DAT_01bc0784 = _DAT_01bc0784 + 1;
          *(uint *)(iVar4 + 0x1bc07b0) =
               (puVar10[2] * 0x100 - _DAT_01bc0cd0) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        }
        local_30 = (CVector3i *)&local_30->y;
        local_2c = local_2c + 1;
      } while (local_2c < vertex_count);
    }
    iVar9 = 0;
    _DAT_01bc123c = 0;
    local_14 = (int *)&DAT_01bc0788;
    if (0 < _DAT_01bc0784) {
      do {
        if ((_DAT_01bc0c88 == *local_14) && (local_14 != (int *)0x0)) goto LAB_0047acf4;
        iVar9 = iVar9 + 1;
        local_14 = local_14 + 0x14;
      } while (iVar9 < _DAT_01bc0784);
    }
    local_14 = (int *)0x0;
LAB_0047acf4:
    if (local_14 != (int *)0x0) {
      local_18 = (int *)&DAT_01bc0788;
      iVar9 = 0;
      if (0 < _DAT_01bc0784) {
        do {
          if ((_DAT_01bc0c88 == *local_18) && (local_18 != local_14)) goto LAB_0047ad2d;
          iVar9 = iVar9 + 1;
          local_18 = local_18 + 0x14;
        } while (iVar9 < _DAT_01bc0784);
      }
      local_18 = (int *)0x0;
LAB_0047ad2d:
      local_1c = _DAT_01bc0c88;
      if (local_18 != (int *)0x0) {
        do {
          if (local_14[1] <= local_1c) {
            *local_14 = -1;
            local_14 = (int *)&DAT_01bc0788;
            iVar9 = 0;
            if (0 < _DAT_01bc0784) {
              do {
                if ((local_1c == *local_14) && (local_14 != local_18)) goto LAB_0047ad88;
                iVar9 = iVar9 + 1;
                local_14 = local_14 + 0x14;
              } while (iVar9 < _DAT_01bc0784);
            }
            local_14 = (int *)0x0;
LAB_0047ad88:
            if (local_14 == (int *)0x0) {
              return;
            }
          }
          if (local_18[1] <= local_1c) {
            *local_18 = -1;
            local_18 = (int *)&DAT_01bc0788;
            iVar9 = 0;
            if (0 < _DAT_01bc0784) {
              do {
                if ((local_1c == *local_18) && (local_18 != local_14)) goto LAB_0047add8;
                iVar9 = iVar9 + 1;
                local_18 = local_18 + 0x14;
              } while (iVar9 < _DAT_01bc0784);
            }
            local_18 = (int *)0x0;
LAB_0047add8:
            if (local_18 == (int *)0x0) {
              return;
            }
          }
          apuStack_78[0] = (uint *)0x47adfb;
          engine_special_cpp_FUN_00580127();
          if (_DAT_01bc123c != 0) {
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
      iVar9 = 0;
      do {
        piVar2 = &vertex_indices->x;
        iVar9 = iVar9 + 1;
        vertex_indices = (CVector3i *)&vertex_indices->y;
        apuStack_78[iVar9] = &DAT_00629014 + *piVar2 * 0xc;
      } while (iVar9 < vertex_count);
    }
    apuStack_78[0] = _DAT_01c51d14;
    engine_special_cpp_drawPolygon2_FUN_00582370(apuStack_78 + 1,vertex_count);
  }
  return;
}
