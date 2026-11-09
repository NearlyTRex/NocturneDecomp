// Name: engine_fpoly.c_rasterizePolygonHardware_FUN_004abdd0
// Address: 004abdd0
// Address Range: [[004abdd0, 004ac133]]
// Convention: __cdecl
// Signature: void __cdecl engine_fpoly_c_rasterizePolygonHardware_FUN_004abdd0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_fpoly_c_rasterizePolygonHardware_FUN_004abdd0(int *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  
  _DAT_01cb0258 = 0;
  _DAT_01cb05dc = DAT_006141bc;
  _DAT_01cb05e0 = 0;
  local_20 = 0;
  if (0 < param_2) {
    local_24 = param_1;
    do {
      iVar2 = local_20 + 1;
      if (param_2 <= iVar2) {
        iVar2 = 0;
      }
      iVar2 = param_1[iVar2];
      iVar8 = *local_24;
      iVar3 = *(int *)(iVar2 + 0x14) >> 0x10;
      iVar5 = *(int *)(iVar8 + 0x14) >> 0x10;
      if (iVar5 != iVar3) {
        iVar4 = iVar3;
        iVar6 = iVar8;
        if (*(int *)(iVar2 + 0x14) < *(int *)(iVar8 + 0x14)) {
          iVar4 = iVar5;
          iVar5 = iVar3;
          iVar6 = iVar2;
          iVar2 = iVar8;
        }
        iVar3 = _DAT_01cb0258 * 0x38;
        *(int *)(&DAT_01cb025c + iVar3) = iVar5;
        iVar8 = _DAT_01cb05dc;
        *(int *)(iVar3 + 0x1cb0260) = iVar4;
        if (iVar5 < iVar8) {
          _DAT_01cb05dc = iVar5;
        }
        if (_DAT_01cb05e0 < iVar4) {
          _DAT_01cb05e0 = iVar4;
        }
        *(uint *)(iVar3 + 0x1cb0264) = *(uint *)(iVar6 + 0x10);
        *(uint *)(iVar3 + 0x1cb0274) = *(uint *)(iVar6 + 0x18);
        *(uint *)(iVar3 + 0x1cb027c) = *(uint *)(iVar6 + 0x1c);
        uVar7 = *(int *)(iVar2 + 0x14) - *(int *)(iVar6 + 0x14);
        if (uVar7 < 0x10000) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)(0xffffffff / (ulonglong)uVar7);
        }
        lVar1 = (longlong)iVar8 * (longlong)(*(int *)(iVar2 + 0x10) - *(int *)(iVar6 + 0x10));
        *(uint *)(iVar3 + 0x1cb0268) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        lVar1 = (longlong)iVar8 * (longlong)(*(int *)(iVar2 + 0x18) - *(int *)(iVar6 + 0x18));
        *(uint *)(iVar3 + 0x1cb0278) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        lVar1 = (longlong)iVar8 * (longlong)(*(int *)(iVar2 + 0x1c) - *(int *)(iVar6 + 0x1c));
        *(uint *)(iVar3 + 0x1cb0280) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        uVar7 = (uint)(ushort)((ushort)*(uint *)(iVar6 + 0x14) ^ 0xffff);
        lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar3 + 0x1cb0268);
        *(int *)(iVar3 + 0x1cb0264) =
             *(int *)(iVar3 + 0x1cb0264) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar3 + 0x1cb0278);
        *(uint *)(iVar3 + 0x1cb0274) =
             *(int *)(iVar3 + 0x1cb0274) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar3 + 0x1cb0280);
        _DAT_01cb0258 = _DAT_01cb0258 + 1;
        *(uint *)(iVar3 + 0x1cb027c) =
             *(int *)(iVar3 + 0x1cb027c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
    } while (local_20 < param_2);
  }
  local_18 = (int *)&DAT_01cb025c;
  iVar2 = 0;
  if (0 < _DAT_01cb0258) {
    do {
      if ((_DAT_01cb05dc == *local_18) && (local_18 != (int *)0x0)) goto LAB_004abe70;
      iVar2 = iVar2 + 1;
      local_18 = local_18 + 0xe;
    } while (iVar2 < _DAT_01cb0258);
  }
  local_18 = (int *)0x0;
LAB_004abe70:
  if (local_18 != (int *)0x0) {
    iVar2 = 0;
    local_14 = (int *)&DAT_01cb025c;
    if (0 < _DAT_01cb0258) {
      do {
        if ((_DAT_01cb05dc == *local_14) && (local_14 != local_18)) goto LAB_004abea9;
        iVar2 = iVar2 + 1;
        local_14 = local_14 + 0xe;
      } while (iVar2 < _DAT_01cb0258);
    }
    local_14 = (int *)0x0;
LAB_004abea9:
    if (local_14 != (int *)0x0) {
      local_1c = _DAT_01cb05dc;
      do {
        if (local_18[1] <= local_1c) {
          *local_18 = -1;
          local_18 = (int *)&DAT_01cb025c;
          iVar2 = 0;
          if (0 < _DAT_01cb0258) {
            do {
              if ((local_1c == *local_18) && (local_18 != local_14)) goto LAB_004abf02;
              iVar2 = iVar2 + 1;
              local_18 = local_18 + 0xe;
            } while (iVar2 < _DAT_01cb0258);
          }
          local_18 = (int *)0x0;
LAB_004abf02:
          if (local_18 == (int *)0x0) {
            return;
          }
        }
        if (local_14[1] <= local_1c) {
          *local_14 = -1;
          local_14 = (int *)&DAT_01cb025c;
          iVar2 = 0;
          if (0 < _DAT_01cb0258) {
            do {
              if ((local_1c == *local_14) && (local_14 != local_18)) goto LAB_004abf52;
              iVar2 = iVar2 + 1;
              local_14 = local_14 + 0xe;
            } while (iVar2 < _DAT_01cb0258);
          }
          local_14 = (int *)0x0;
LAB_004abf52:
          if (local_14 == (int *)0x0) {
            return;
          }
        }
        engine_special_cpp_FUN_0055d6d7();
        local_18[2] = local_18[2] + local_18[3];
        local_18[6] = local_18[6] + local_18[7];
        local_18[8] = local_18[8] + local_18[9];
        local_1c = local_1c + 1;
        local_14[2] = local_14[2] + local_14[3];
        local_14[6] = local_14[6] + local_14[7];
        local_14[8] = local_14[8] + local_14[9];
      } while( true );
    }
  }
  return;
}
