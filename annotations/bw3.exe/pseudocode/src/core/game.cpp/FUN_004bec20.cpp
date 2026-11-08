// Name: FUN_004bec20
// Address: 004bec20
// Address Range: [[004bec20, 004bf22b]]
// Convention: unknown
// Signature: void FUN_004bec20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bec20(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar9;
  uint auStack_a2c [256];
  byte local_62c [768];
  ushort auStack_32c [256];
  char local_12c [256];
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  char *pcVar8;
  
  bVar9 = 0;
  if (*(char *)(param_1 + 0x968) == '\0') {
    return;
  }
  iVar5 = param_1 + 0x968;
  *(uint *)(param_1 + 0xe8) = 0;
  iVar2 = FUN_004657f0(&DAT_005c38a8,iVar5);
  if (iVar2 < 0) {
    FUN_0047cf40(0x01C5B0E4,"Can't open %s",iVar5);
    *(byte *)(param_1 + 0x968) = 0;
    return;
  }
  iVar3 = *(int *)(param_1 + 0xa68) * *(int *)(param_1 + 0xa6c);
  if (iVar2 != iVar3) {
    FUN_0047cf40(0x01C5B0E4,"%s is %d bytes, but expected %dx%d=%d byte file",iVar5,
                 *(uint *)(param_1 + 0xa68),*(int *)(param_1 + 0xa6c),iVar3);
    *(byte *)(param_1 + 0x968) = 0;
    return;
  }
  FUN_005a5128(iVar5,0,0,local_12c,0);
  pcVar6 = &DAT_005c38ea;
  iVar5 = -1;
  pcVar8 = local_12c;
  do {
    pcVar7 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7 = pcVar8 + (uint)bVar9 * -2 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar5 = FUN_004659c0(&DAT_005c38f2,local_12c,&DAT_005c38ef);
  if (iVar5 == 0) {
    FUN_0047cf40(0x01C5B0E4,"Can't open %s",local_12c);
  }
  else {
    FUN_005a3890(local_62c,1,0x300,iVar5);
    FUN_005a3a90(iVar5);
    iVar5 = 0;
    iVar2 = 0;
    local_1c = 0;
    do {
      if (DAT_005fba20 == 0x10) {
        local_2c = (uint)local_62c[iVar5];
        local_2c = local_62c[iVar5] / _DAT_01c6af78;
        local_28 = local_62c[iVar5 + 2] / _DAT_01c6af90;
        *(ushort *)((int)auStack_32c + iVar2) =
             (ushort)(local_62c[iVar5 + 2] / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f)) |
             (ushort)(local_62c[iVar5 + 1] / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f)) |
             (ushort)(local_2c << (DAT_01c6af74 & 0x1f));
      }
      else if (DAT_005fba20 == 0x20) {
        *(uint *)((int)auStack_a2c + local_1c) =
             (uint)local_62c[iVar5] << (DAT_01c6af74 & 0x1f) |
             (uint)local_62c[iVar5 + 1] << (DAT_01c6af80 & 0x1f) |
             (uint)local_62c[iVar5 + 2] << (DAT_01c6af8c & 0x1f);
      }
      else {
        *(uint *)((int)auStack_a2c + local_1c) =
             (uint)local_62c[iVar5] << 0x10 | (uint)local_62c[iVar5 + 1] << 8 |
             (uint)local_62c[iVar5 + 2];
      }
      iVar2 = iVar2 + 2;
      iVar5 = iVar5 + 3;
      local_1c = local_1c + 4;
    } while (iVar2 != 0x200);
    FUN_0057a3c0();
    FUN_00565820();
    FUN_00560d70();
    FUN_00565870(0);
    FUN_0057a4b0();
    FUN_0057a8a0();
    local_18 = FUN_005a3650(*(int *)(param_1 + 0xa68) * *(int *)(param_1 + 0xa6c));
    if (local_18 != 0) {
      iVar5 = FUN_004659c0(&DAT_005c3907,param_1 + 0x968,&DAT_005c3904);
      if (iVar5 == 0) {
        _DAT_01d71de0 = "..\\core\\game.cpp";
        _DAT_01d71de4 = 0x1287;
        FUN_004e4330("Can't open %s",param_1 + 0x968);
      }
      FUN_005a3890(local_18,*(uint *)(param_1 + 0xa68),*(uint *)(param_1 + 0xa6c),iVar5)
      ;
      FUN_005a3a90(iVar5);
      local_24 = 0;
      if (0 < DAT_005fba1c) {
        local_20 = 0;
        do {
          local_14 = *(int *)(param_1 + 0xa68) *
                     ((local_24 * *(int *)(param_1 + 0xa6c)) / DAT_005fba1c);
          iVar5 = 0;
          if (0 < DAT_005fba18) {
            iVar3 = 0;
            iVar2 = 0;
            do {
              pbVar4 = (byte *)((*(int *)(param_1 + 0xa68) * iVar5) / DAT_005fba18 + local_14 +
                               local_18);
              if (DAT_005fba20 == 0x10) {
                *(ushort *)(*(int *)(&DAT_01c5faec + local_20) + iVar2) = auStack_32c[*pbVar4];
              }
              else {
                *(uint *)(*(int *)(&DAT_01c5faec + local_20) + iVar3) = auStack_a2c[*pbVar4];
              }
              iVar3 = iVar3 + 4;
              iVar5 = iVar5 + 1;
              iVar2 = iVar2 + 2;
            } while (iVar5 < DAT_005fba18);
          }
          local_24 = local_24 + 1;
          local_20 = local_20 + 4;
        } while (local_24 < DAT_005fba1c);
      }
      FUN_004032b0();
      FUN_004ba490(param_1);
      while( true ) {
        FUN_0057a8a0();
        if (*(int *)(param_1 + 0xd4) == 2) {
          FUN_004b93e0(param_1);
        }
        iVar5 = FUN_00580800();
        if ((((iVar5 != 0) ||
             (iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,*(uint *)(param_1 + 0x48)),
             iVar5 != 0)) || (_DAT_01c5fae4 != 0)) ||
           ((_DAT_01d22b44 != 1 && (*(float *)(param_1 + 0x438) < 0.0)))) break;
        FUN_004b4440(0x01D2130C);
        *(float *)(param_1 + 0x438) = *(float *)(param_1 + 0x438) - *(float *)(0x01D2130C + 0x314)
        ;
      }
      while ((_DAT_01c5fae4 != 0 ||
             (iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,*(uint *)(param_1 + 0x48)),
             iVar5 != 0))) {
        if (*(int *)(param_1 + 0xd4) == 2) {
          FUN_004b93e0(param_1);
          FUN_0057a8a0();
        }
        else {
          FUN_0057a8a0();
        }
      }
      FUN_004032b0();
      FUN_004ba490(param_1);
      FUN_004b4430(param_1);
      *(byte *)(param_1 + 0x968) = 0;
      FUN_005a3770(local_18);
      return;
    }
  }
  *(byte *)(param_1 + 0x968) = 0;
  return;
}
