// Name: FUN_00471b50
// Address: 00471b50
// Address Range: [[00471b50, 004720b1]]
// Convention: unknown
// Signature: void FUN_00471b50(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,byte param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00471b50(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,byte param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  uint local_12e8 [1200];
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  uint local_14;
  
  bVar11 = 0;
  if (_DAT_01bcd070 == 0) {
    _DAT_01cc4800 = "?..\\shape\\edittool.cpp" + 1;
    _DAT_01cc4804 = 0x8b;
    FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = *(uint *)(_DAT_01bcd070 + 0x3168);
  _DAT_01bcd9bc = FUN_004930e0(_DAT_01bcd070,0x6a);
  if (4 < _DAT_01bcd07c) {
    _DAT_01cc4800 = "@..\\shape\\edittool.cpp" + 1;
    _DAT_01cc4804 = 0x674;
    FUN_004c8440("Can't open another window!");
  }
  iVar1 = _DAT_01bcd07c * 0x1d8;
  local_1c = (int *)(iVar1 + 0x1bcd080);
  local_20 = (int)((DAT_005b761c + (DAT_005b761c >> 0x1f) * -0x80) -
                  (uint)((DAT_005b761c >> 0x1f) << 6 < 0)) >> 7;
  local_24 = DAT_005b7620 / 0x60;
  _DAT_01bcd07c = _DAT_01bcd07c + 1;
  param_2 = param_2 - local_20;
  param_3 = param_3 - local_24;
  param_4 = param_4 + local_20;
  param_5 = param_5 + local_24;
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (DAT_005b761c < param_4) {
    param_4 = DAT_005b761c;
  }
  local_28 = 0;
  *(byte *)(iVar1 + 0x1bcd0b8) = 0;
  if (param_6 != 0) {
    iVar1 = FUN_00492f30(_DAT_01bcd070,param_6,0x1bcc0d0,0x14,200,
                         (param_4 - param_2) + local_20 * -2);
    iVar8 = 0;
    piVar5 = local_1c + 0xe;
    if (0 < iVar1) {
      iVar6 = 0x1bcc0d0;
      do {
        iVar8 = iVar8 + 1;
        iVar2 = FUN_00563c90(piVar5,&DAT_0057e913,iVar6);
        piVar5 = (int *)((int)piVar5 + iVar2);
        iVar6 = iVar6 + 200;
      } while (iVar8 < iVar1);
    }
    iVar8 = _DAT_01bcd070;
    if (0 < iVar1) {
      *(byte *)((int)piVar5 + -1) = 0;
      local_28 = FUN_00492e60(iVar8,local_1c + 0xe);
      local_28 = _DAT_01bcd9bc + local_28;
      param_5 = param_5 + local_28 / 2;
      param_3 = param_3 - local_28 / 2;
    }
  }
  if (param_3 < 0) {
    param_3 = 0;
  }
  if (DAT_005b7620 < param_5) {
    param_5 = DAT_005b7620;
  }
  if ((param_7 & 1) == 0) {
    if (_DAT_01c02594 != 0) {
      if (0 < DAT_005b7620) {
        iVar1 = 0;
        do {
          iVar8 = iVar1 + 4;
          *(uint *)((int)local_12e8 + iVar1) = *(uint *)(&DAT_01bd2fa0 + iVar1);
          iVar1 = iVar8;
        } while (iVar8 < DAT_005b7620 * 4);
      }
      FUN_005322e0();
      iVar1 = DAT_005b761c * DAT_005b7624 >> 0x1f;
      uVar3 = (int)((DAT_005b761c * DAT_005b7624 + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3;
      iVar1 = 0;
      if (0 < DAT_005b7620) {
        iVar8 = 0;
        do {
          puVar7 = *(uint **)(&DAT_01bd2fa0 + iVar8);
          puVar9 = *(uint **)((int)local_12e8 + iVar8);
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(byte *)puVar9 = *(byte *)puVar7;
            puVar7 = (uint *)((int)puVar7 + (uint)bVar11 * -2 + 1);
            puVar9 = (uint *)((int)puVar9 + (uint)bVar11 * -2 + 1);
          }
          iVar1 = iVar1 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar1 < DAT_005b7620);
      }
      FUN_00532320();
    }
    iVar1 = (param_4 - param_2) * DAT_005b7624;
    iVar8 = iVar1 >> 0x1f;
    local_14 = (int)((iVar1 + iVar8 * -8) - (uint)(iVar8 << 2 < 0)) >> 3;
    iVar1 = FUN_005635b0((param_5 - param_3) * local_14);
    local_1c[0x72] = iVar1;
    if (iVar1 == 0) {
      _DAT_01cc4800 = "..\\shape\\edittool.cpp";
      _DAT_01cc4804 = 0x6c4;
      FUN_004c8440("out of memory to open editor window.");
    }
    puVar7 = (uint *)local_1c[0x72];
    if (param_3 < param_5) {
      iVar1 = param_3 * 4;
      local_18 = param_5 * 4;
      do {
        iVar8 = param_2 * DAT_005b7624 >> 0x1f;
        piVar5 = (int *)(&DAT_01bd2fa0 + iVar1);
        iVar1 = iVar1 + 4;
        puVar9 = (uint *)
                 (*piVar5 +
                 ((int)((param_2 * DAT_005b7624 + iVar8 * -8) - (uint)(iVar8 << 2 < 0)) >> 3));
        puVar10 = puVar7;
        for (uVar3 = local_14 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
        }
        for (uVar3 = local_14 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(byte *)puVar10 = *(byte *)puVar9;
          puVar9 = (uint *)((int)puVar9 + (uint)bVar11 * -2 + 1);
          puVar10 = (uint *)((int)puVar10 + (uint)bVar11 * -2 + 1);
        }
        puVar7 = (uint *)((int)puVar7 + local_14);
      } while (iVar1 < local_18);
    }
  }
  else {
    local_1c[0x72] = 0;
  }
  local_1c[4] = _DAT_01c00c58;
  local_1c[5] = _DAT_01c00c5c;
  local_1c[6] = _DAT_01c00c60;
  local_1c[7] = _DAT_01c00c64;
  local_1c[8] = _DAT_01c00c48;
  local_1c[9] = _DAT_01c00c4c;
  local_1c[10] = _DAT_01c00c50;
  local_1c[0xb] = _DAT_01c00c54;
  local_1c[0xc] = _DAT_01c00c68;
  local_1c[0xd] = _DAT_01c00c6c;
  *local_1c = param_2;
  local_1c[1] = param_3;
  local_1c[2] = param_4;
  local_1c[3] = param_5;
  FUN_00401e30(param_2 + local_20,param_3 + local_24 + local_28,(param_4 - local_20) + -1,
               (param_5 - local_24) + -1);
  return;
}
