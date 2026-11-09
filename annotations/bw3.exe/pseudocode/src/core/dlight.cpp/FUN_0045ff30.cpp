// Name: core_dlight.cpp_FUN_0045ff30
// Address: 0045ff30
// Address Range: [[0045ff30, 0046026a]]
// Convention: unknown
// Signature: void core_dlight_cpp_FUN_0045ff30(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dlight_cpp_FUN_0045ff30(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  ushort *local_18;
  int local_14;
  
  engine_special_cpp_clearScreen_FUN_00560d70();
  if (DAT_005fba20 == 0x20) {
    local_28 = 0;
    if (0 < *(int *)(param_1 + 0x1cc4)) {
      do {
        iVar3 = local_28;
        if (0xf0 < DAT_005fba1c) {
          iVar3 = local_28 * 2;
        }
        iVar3 = iVar3 + param_3;
        if ((-1 < iVar3) && (iVar3 < DAT_005fba1c)) {
          local_24 = 0;
          puVar7 = (uint *)(*(int *)(&DAT_01c5faec + iVar3 * 4) + param_2 * 4);
          puVar4 = (ushort *)
                   (*(int *)(param_1 + 0x2f94) + local_28 * *(int *)(param_1 + 0x1cc0) * 2);
          iVar3 = 0;
          if (0 < *(int *)(param_1 + 0x1cc0)) {
            do {
              iVar1 = DAT_005fba18;
              if (*puVar4 != 0) {
                uVar6 = (uint)(*puVar4 >> 6);
                if (0x7f < uVar6) {
                  uVar6 = 0x7f;
                }
                uVar6 = uVar6 ^ 0x7f;
                if ((0 < param_4) && (uVar6 = uVar6 + param_4, 0xff < uVar6)) {
                  uVar6 = 0xff;
                }
                uVar6 = uVar6 + local_24;
                local_24 = uVar6 >> 1;
                iVar5 = (int)(local_24 * 3 + 0x96) >> 1;
                uVar6 = uVar6 >> 2;
                if (DAT_005fba20 == 0x20) {
                  uVar6 = uVar6 << (DAT_01c6af8c & 0x1f) |
                          iVar5 << (DAT_01c6af74 & 0x1f) | uVar6 << (DAT_01c6af80 & 0x1f);
                }
                else {
                  uVar6 = iVar5 << 0x10 | uVar6 << 8 | uVar6;
                }
                *puVar7 = uVar6;
                if (0x140 < iVar1) {
                  puVar7[1] = uVar6;
                }
              }
              puVar4 = puVar4 + 1;
              if (DAT_005fba18 < 0x141) {
                puVar7 = puVar7 + 1;
              }
              else {
                puVar7 = puVar7 + 2;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_1 + 0x1cc0));
          }
        }
        local_28 = local_28 + 1;
      } while (local_28 < *(int *)(param_1 + 0x1cc4));
    }
  }
  else {
    local_2c = 0;
    if (0 < *(int *)(param_1 + 0x1cc4)) {
      do {
        iVar3 = local_2c;
        if (0xf0 < DAT_005fba1c) {
          iVar3 = local_2c * 2;
        }
        iVar3 = iVar3 + param_3;
        if ((-1 < iVar3) && (iVar3 < DAT_005fba1c)) {
          puVar4 = (ushort *)(*(int *)(&DAT_01c5faec + iVar3 * 4) + param_2 * 2);
          local_18 = (ushort *)
                     (*(int *)(param_1 + 0x2f94) + local_2c * *(int *)(param_1 + 0x1cc0) * 2);
          local_20 = 0;
          local_14 = 0;
          if (0 < *(int *)(param_1 + 0x1cc0)) {
            do {
              iVar3 = DAT_005fba18;
              if (*local_18 != 0) {
                uVar6 = (uint)(*local_18 >> 6);
                if (0x7f < uVar6) {
                  uVar6 = 0x7f;
                }
                uVar6 = uVar6 ^ 0x7f;
                if ((0 < param_4) && (uVar6 = uVar6 + param_4, 0xff < uVar6)) {
                  uVar6 = 0xff;
                }
                local_20 = uVar6 + local_20 >> 1;
                uVar6 = local_20 * 3 >> 2;
                uVar2 = (ushort)(local_20 / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f)) |
                        (ushort)(uVar6 / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f)) |
                        (ushort)(uVar6 / _DAT_01c6af78 << (DAT_01c6af74 & 0x1f));
                *puVar4 = uVar2;
                if (0x140 < iVar3) {
                  puVar4[1] = uVar2;
                }
              }
              local_18 = local_18 + 1;
              if (DAT_005fba18 < 0x141) {
                puVar4 = puVar4 + 1;
              }
              else {
                puVar4 = puVar4 + 2;
              }
              local_14 = local_14 + 1;
            } while (local_14 < *(int *)(param_1 + 0x1cc0));
          }
        }
        local_2c = local_2c + 1;
      } while (local_2c < *(int *)(param_1 + 0x1cc4));
    }
  }
  return;
}
