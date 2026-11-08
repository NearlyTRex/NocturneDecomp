// Name: FUN_00466220
// Address: 00466220
// Address Range: [[00466220, 004665b5]]
// Convention: unknown
// Signature: void FUN_00466220(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466220(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  ushort *puVar8;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  ushort *local_1c;
  int local_18;
  int local_14;
  
  FUN_0057dc40();
  if (DAT_0061b4a0 == 0x20) {
    local_28 = 0;
    if (0 < *(int *)(param_1 + 0x1cc4)) {
      do {
        iVar2 = local_28;
        if (0xf0 < DAT_0061b49c) {
          iVar2 = local_28 * 2;
        }
        iVar2 = iVar2 + param_3;
        if ((-1 < iVar2) && (iVar2 < DAT_0061b49c)) {
          puVar8 = (ushort *)
                   (*(int *)(param_1 + 0x2f94) + local_28 * *(int *)(param_1 + 0x1cc0) * 2);
          local_24 = 0;
          local_14 = 0;
          puVar7 = (uint *)(*(int *)(&DAT_01c4354c + iVar2 * 4) + param_2 * 4);
          if (0 < *(int *)(param_1 + 0x1cc0)) {
            do {
              iVar2 = DAT_0061b498;
              if (*puVar8 != 0) {
                uVar6 = (uint)(*puVar8 >> 6);
                if (0x7f < uVar6) {
                  uVar6 = 0x7f;
                }
                uVar6 = uVar6 ^ 0x7f;
                if ((0 < param_4) && (uVar6 = uVar6 + param_4, 0xff < uVar6)) {
                  uVar6 = 0xff;
                }
                uVar6 = uVar6 + local_24;
                local_24 = uVar6 >> 1;
                uVar6 = uVar6 >> 2;
                uVar5 = (int)(local_24 * 3 + 0x96) >> 1;
                uVar3 = uVar5;
                uVar4 = uVar6;
                if ((param_5 != 0) && (uVar3 = uVar6, uVar4 = uVar5, param_5 == 1)) {
                  uVar6 = (int)(local_24 * 3) >> 1;
                  uVar3 = uVar6;
                  uVar4 = uVar6;
                }
                if (DAT_0061b4a0 == 0x20) {
                  uVar6 = uVar6 << (DAT_01c4e9ec & 0x1f) |
                          uVar4 << (DAT_01c4e9e0 & 0x1f) | uVar3 << (DAT_01c4e9d4 & 0x1f);
                }
                else {
                  uVar6 = uVar3 << 0x10 | uVar4 << 8 | uVar6;
                }
                *puVar7 = uVar6;
                if (0x140 < iVar2) {
                  puVar7[1] = uVar6;
                }
              }
              puVar8 = puVar8 + 1;
              if (DAT_0061b498 < 0x141) {
                puVar7 = puVar7 + 1;
              }
              else {
                puVar7 = puVar7 + 2;
              }
              local_14 = local_14 + 1;
            } while (local_14 < *(int *)(param_1 + 0x1cc0));
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
        iVar2 = local_2c;
        if (0xf0 < DAT_0061b49c) {
          iVar2 = local_2c * 2;
        }
        iVar2 = iVar2 + param_3;
        if ((-1 < iVar2) && (iVar2 < DAT_0061b49c)) {
          local_1c = (ushort *)
                     (*(int *)(param_1 + 0x2f94) + local_2c * *(int *)(param_1 + 0x1cc0) * 2);
          local_20 = 0;
          local_18 = 0;
          puVar8 = (ushort *)(*(int *)(&DAT_01c4354c + iVar2 * 4) + param_2 * 2);
          if (0 < *(int *)(param_1 + 0x1cc0)) {
            do {
              iVar2 = DAT_0061b498;
              if (*local_1c != 0) {
                uVar6 = (uint)(*local_1c >> 6);
                if (0x7f < uVar6) {
                  uVar6 = 0x7f;
                }
                uVar6 = uVar6 ^ 0x7f;
                if ((0 < param_4) && (uVar6 = uVar6 + param_4, 0xff < uVar6)) {
                  uVar6 = 0xff;
                }
                uVar6 = uVar6 + local_20;
                local_20 = uVar6 >> 1;
                uVar6 = uVar6 >> 2;
                uVar5 = (int)(local_20 * 3 + 0x96) >> 1;
                uVar3 = uVar5;
                uVar4 = uVar6;
                if ((param_5 != 0) && (uVar3 = uVar6, uVar4 = uVar5, param_5 == 1)) {
                  uVar6 = (int)(local_20 * 3) >> 1;
                  uVar3 = uVar6;
                  uVar4 = uVar6;
                }
                uVar1 = (ushort)(uVar6 / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f)) |
                        (ushort)(uVar4 / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f)) |
                        (ushort)(uVar3 / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f));
                *puVar8 = uVar1;
                if (0x140 < iVar2) {
                  puVar8[1] = uVar1;
                }
              }
              local_1c = local_1c + 1;
              if (DAT_0061b498 < 0x141) {
                puVar8 = puVar8 + 1;
              }
              else {
                puVar8 = puVar8 + 2;
              }
              local_18 = local_18 + 1;
            } while (local_18 < *(int *)(param_1 + 0x1cc0));
          }
        }
        local_2c = local_2c + 1;
      } while (local_2c < *(int *)(param_1 + 0x1cc4));
    }
  }
  return;
}
