// Name: FUN_00452110
// Address: 00452110
// Address Range: [[00452110, 004524fe]]
// Convention: unknown
// Signature: void FUN_00452110(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452110(int param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ushort *puVar8;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  ushort *local_18;
  ushort *local_14;
  
  _DAT_01abb4c4 = 0;
  iVar6 = 0;
  do {
    uVar3 = FUN_0056488c();
    iVar5 = iVar6 + 4;
    *(uint *)(&DAT_01abb4c8 + iVar6) = (uVar3 & 0x1f) - 0x10;
    iVar6 = iVar5;
  } while (iVar5 != 400);
  iVar6 = 0;
  if (0 < DAT_005b7620) {
    iVar5 = 0;
    do {
      iVar4 = DAT_005b761c * DAT_005b7624 >> 0x1f;
      puVar1 = (uint *)(&DAT_01bd2fa0 + iVar5);
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 1;
      FUN_00563cc0(*puVar1,0,
                   (int)((DAT_005b761c * DAT_005b7624 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3);
    } while (iVar6 < DAT_005b7620);
  }
  if (DAT_005b7624 == 0x20) {
    local_30 = 0;
    if (0 < *(int *)(param_1 + 0x1cc4)) {
      do {
        iVar6 = local_30;
        if (0xf0 < DAT_005b7620) {
          iVar6 = local_30 * 2;
        }
        iVar6 = iVar6 + param_3;
        if ((-1 < iVar6) && (iVar6 < DAT_005b7620)) {
          puVar7 = (uint *)(*(int *)(&DAT_01bd2fa0 + iVar6 * 4) + param_2 * 4);
          local_18 = (ushort *)
                     (*(int *)(param_1 + 0x2f94) + local_30 * *(int *)(param_1 + 0x1cc0) * 2);
          local_24 = 0;
          local_20 = 0;
          if (0 < *(int *)(param_1 + 0x1cc0)) {
            do {
              iVar6 = DAT_005b761c;
              if (*local_18 != 0) {
                iVar5 = _DAT_01abb4c4 * 4;
                _DAT_01abb4c4 = _DAT_01abb4c4 + 1;
                uVar3 = (uint)(*local_18 >> 6) + *(int *)(&DAT_01abb4c8 + iVar5);
                if (99 < _DAT_01abb4c4) {
                  _DAT_01abb4c4 = 0;
                }
                if (0x7f < uVar3) {
                  uVar3 = 0x7f;
                }
                uVar3 = uVar3 ^ 0x7f;
                if ((0 < param_4) && (uVar3 = uVar3 + param_4, 0xff < uVar3)) {
                  uVar3 = 0xff;
                }
                local_24 = uVar3 + local_24 >> 1;
                uVar3 = local_24 * 3 >> 2;
                if (DAT_005b7624 == 0x20) {
                  uVar3 = local_24 << (DAT_01c0063c & 0x1f) |
                          uVar3 << (DAT_01c00630 & 0x1f) | uVar3 << (DAT_01c00624 & 0x1f);
                }
                else {
                  uVar3 = uVar3 << 0x10 | uVar3 << 8 | local_24;
                }
                *puVar7 = uVar3;
                if (0x140 < iVar6) {
                  puVar7[1] = uVar3;
                }
              }
              local_18 = local_18 + 1;
              if (DAT_005b761c < 0x141) {
                puVar7 = puVar7 + 1;
              }
              else {
                puVar7 = puVar7 + 2;
              }
              local_20 = local_20 + 1;
            } while (local_20 < *(int *)(param_1 + 0x1cc0));
          }
        }
        local_30 = local_30 + 1;
      } while (local_30 < *(int *)(param_1 + 0x1cc4));
    }
  }
  else {
    local_2c = 0;
    if (0 < *(int *)(param_1 + 0x1cc4)) {
      do {
        iVar6 = local_2c;
        if (0xf0 < DAT_005b7620) {
          iVar6 = local_2c * 2;
        }
        iVar6 = iVar6 + param_3;
        if ((-1 < iVar6) && (iVar6 < DAT_005b7620)) {
          puVar8 = (ushort *)(*(int *)(&DAT_01bd2fa0 + iVar6 * 4) + param_2 * 2);
          local_14 = (ushort *)
                     (*(int *)(param_1 + 0x2f94) + local_2c * *(int *)(param_1 + 0x1cc0) * 2);
          local_28 = 0;
          local_1c = 0;
          if (0 < *(int *)(param_1 + 0x1cc0)) {
            do {
              if (*local_14 != 0) {
                iVar6 = _DAT_01abb4c4 * 4;
                _DAT_01abb4c4 = _DAT_01abb4c4 + 1;
                uVar3 = (uint)(*local_14 >> 6) + *(int *)(&DAT_01abb4c8 + iVar6);
                if (99 < _DAT_01abb4c4) {
                  _DAT_01abb4c4 = 0;
                }
                if (0x7f < uVar3) {
                  uVar3 = 0x7f;
                }
                uVar3 = uVar3 ^ 0x7f;
                if ((0 < param_4) && (uVar3 = uVar3 + param_4, 0xff < uVar3)) {
                  uVar3 = 0xff;
                }
                local_28 = uVar3 + local_28 >> 1;
                uVar3 = local_28 * 3 >> 2;
                uVar2 = (ushort)(local_28 / _DAT_01c00640 << (DAT_01c0063c & 0x1f)) |
                        (ushort)(uVar3 / _DAT_01c00628 << (DAT_01c00624 & 0x1f)) |
                        (ushort)(uVar3 / _DAT_01c00634 << (DAT_01c00630 & 0x1f));
                *puVar8 = uVar2;
                if (0x140 < DAT_005b761c) {
                  puVar8[1] = uVar2;
                }
              }
              local_14 = local_14 + 1;
              if (DAT_005b761c < 0x141) {
                puVar8 = puVar8 + 1;
              }
              else {
                puVar8 = puVar8 + 2;
              }
              local_1c = local_1c + 1;
            } while (local_1c < *(int *)(param_1 + 0x1cc0));
          }
        }
        local_2c = local_2c + 1;
      } while (local_2c < *(int *)(param_1 + 0x1cc4));
    }
  }
  return;
}
