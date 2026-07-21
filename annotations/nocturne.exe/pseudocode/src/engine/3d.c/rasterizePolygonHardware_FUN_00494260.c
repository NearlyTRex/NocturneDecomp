// Name: engine_3d.c_rasterizePolygonHardware_FUN_00494260
// Address: 00494260
// Address Range: [[00494260, 004945c3]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_rasterizePolygonHardware_FUN_00494260(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_rasterizePolygonHardware_FUN_00494260(int *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *local_24;
  int local_20;
  int *local_18;
  int *local_14;
  
  _DAT_01c70f78 = 0;
  _DAT_01c712fc = DAT_005b7620;
  _DAT_01c71300 = 0;
  local_20 = 0;
  if (0 < param_2) {
    local_24 = param_1;
    do {
      iVar2 = local_20 + 1;
      if (param_2 <= iVar2) {
        iVar2 = 0;
      }
      iVar2 = param_1[iVar2];
      iVar6 = *local_24;
      iVar3 = *(int *)(iVar2 + 0x14) >> 0x10;
      iVar5 = *(int *)(iVar6 + 0x14) >> 0x10;
      if (iVar5 != iVar3) {
        iVar4 = iVar3;
        iVar7 = iVar6;
        if (*(int *)(iVar2 + 0x14) < *(int *)(iVar6 + 0x14)) {
          iVar4 = iVar5;
          iVar5 = iVar3;
          iVar7 = iVar2;
          iVar2 = iVar6;
        }
        iVar3 = _DAT_01c70f78 * 0x38;
        *(int *)(&DAT_01c70f7c + iVar3) = iVar5;
        iVar6 = _DAT_01c712fc;
        *(int *)(iVar3 + 0x1c70f80) = iVar4;
        if (iVar5 < iVar6) {
          _DAT_01c712fc = iVar5;
        }
        if (_DAT_01c71300 < iVar4) {
          _DAT_01c71300 = iVar4;
        }
        *(uint *)(iVar3 + 0x1c70f84) = *(uint *)(iVar7 + 0x10);
        *(uint *)(iVar3 + 0x1c70f94) = *(uint *)(iVar7 + 0x18);
        *(uint *)(iVar3 + 0x1c70f9c) = *(uint *)(iVar7 + 0x1c);
        uVar8 = *(int *)(iVar2 + 0x14) - *(int *)(iVar7 + 0x14);
        if (uVar8 < 0x10000) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)(0xffffffff / (ulonglong)uVar8);
        }
        lVar1 = (longlong)iVar6 * (longlong)(*(int *)(iVar2 + 0x10) - *(int *)(iVar7 + 0x10));
        *(uint *)(iVar3 + 0x1c70f88) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        lVar1 = (longlong)iVar6 * (longlong)(*(int *)(iVar2 + 0x18) - *(int *)(iVar7 + 0x18));
        *(uint *)(iVar3 + 0x1c70f98) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        lVar1 = (longlong)iVar6 * (longlong)(*(int *)(iVar2 + 0x1c) - *(int *)(iVar7 + 0x1c));
        *(uint *)(iVar3 + 0x1c70fa0) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        uVar8 = (uint)(ushort)((ushort)*(uint *)(iVar7 + 0x14) ^ 0xffff);
        lVar1 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar3 + 0x1c70f88);
        *(int *)(iVar3 + 0x1c70f84) =
             *(int *)(iVar3 + 0x1c70f84) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar3 + 0x1c70f98);
        *(uint *)(iVar3 + 0x1c70f94) =
             *(int *)(iVar3 + 0x1c70f94) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar3 + 0x1c70fa0);
        _DAT_01c70f78 = _DAT_01c70f78 + 1;
        *(uint *)(iVar3 + 0x1c70f9c) =
             *(int *)(iVar3 + 0x1c70f9c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
    } while (local_20 < param_2);
  }
  iVar2 = _DAT_01c712fc;
  local_18 = (int *)&DAT_01c70f7c;
  iVar6 = 0;
  if (0 < _DAT_01c70f78) {
    do {
      if ((_DAT_01c712fc == *local_18) && (local_18 != (int *)0x0)) goto LAB_00494300;
      iVar6 = iVar6 + 1;
      local_18 = local_18 + 0xe;
    } while (iVar6 < _DAT_01c70f78);
  }
  local_18 = (int *)0x0;
LAB_00494300:
  if (local_18 != (int *)0x0) {
    iVar6 = 0;
    local_14 = (int *)&DAT_01c70f7c;
    if (0 < _DAT_01c70f78) {
      do {
        if ((_DAT_01c712fc == *local_14) && (local_14 != local_18)) goto LAB_00494339;
        iVar6 = iVar6 + 1;
        local_14 = local_14 + 0xe;
      } while (iVar6 < _DAT_01c70f78);
    }
    local_14 = (int *)0x0;
LAB_00494339:
    if (local_14 != (int *)0x0) {
      do {
        if (local_18[1] <= iVar2) {
          *local_18 = -1;
          local_18 = (int *)&DAT_01c70f7c;
          iVar6 = 0;
          if (0 < _DAT_01c70f78) {
            do {
              if ((iVar2 == *local_18) && (local_18 != local_14)) goto LAB_00494392;
              iVar6 = iVar6 + 1;
              local_18 = local_18 + 0xe;
            } while (iVar6 < _DAT_01c70f78);
          }
          local_18 = (int *)0x0;
LAB_00494392:
          if (local_18 == (int *)0x0) {
            return;
          }
        }
        if (local_14[1] <= iVar2) {
          *local_14 = -1;
          local_14 = (int *)&DAT_01c70f7c;
          iVar6 = 0;
          if (0 < _DAT_01c70f78) {
            do {
              if ((iVar2 == *local_14) && (local_14 != local_18)) goto LAB_004943e2;
              iVar6 = iVar6 + 1;
              local_14 = local_14 + 0xe;
            } while (iVar6 < _DAT_01c70f78);
          }
          local_14 = (int *)0x0;
LAB_004943e2:
          if (local_14 == (int *)0x0) {
            return;
          }
        }
        wincore_windll_cpp_renderScanline_FUN_00530710(local_14,local_18,iVar2);
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + *(int *)(iVar2 + 0xc);
        *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0x1c);
        *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + *(int *)(iVar2 + 0x24);
        local_18[2] = local_18[2] + local_18[3];
        local_18[6] = local_18[6] + local_18[7];
        local_18[8] = local_18[8] + local_18[9];
      } while( true );
    }
  }
  return;
}
