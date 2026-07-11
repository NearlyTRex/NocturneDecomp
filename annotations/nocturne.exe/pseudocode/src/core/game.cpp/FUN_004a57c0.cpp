// Name: FUN_004a57c0
// Address: 004a57c0
// Address Range: [[004a57c0, 004a5d87]]
// Convention: unknown
// Signature: void FUN_004a57c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a57c0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar9;
  uint auStack_a30 [256];
  byte local_630 [768];
  ushort auStack_330 [256];
  char local_130 [256];
  uint local_30;
  uint local_2c;
  ushort *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  char *pcVar8;
  
  bVar9 = 0;
  if (*(char *)(param_1 + 0x8b4) == '\0') {
    return;
  }
  iVar4 = param_1 + 0x8b4;
  *(uint *)(param_1 + 0xcc) = 0;
  iVar2 = FUN_004568c0(&DAT_0058437c,iVar4);
  if (iVar2 < 0) {
    FUN_0046fcd0(0x01BCD074,"Can't open %s",iVar4);
    *(byte *)(param_1 + 0x8b4) = 0;
    return;
  }
  iVar3 = *(int *)(param_1 + 0x9b4) * *(int *)(param_1 + 0x9b8);
  if (iVar2 != iVar3) {
    FUN_0046fcd0(0x01BCD074,"%s is %d bytes, but expected %dx%d=%d byte file",iVar4,
                 *(uint *)(param_1 + 0x9b4),*(int *)(param_1 + 0x9b8),iVar3);
    *(byte *)(param_1 + 0x8b4) = 0;
    return;
  }
  FUN_00566498(iVar4,0,0,local_130,0);
  pcVar6 = &DAT_005843be;
  iVar4 = -1;
  pcVar8 = local_130;
  do {
    pcVar7 = pcVar8;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
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
  iVar4 = FUN_00456a60(&DAT_005843c6,local_130,&DAT_005843c3);
  if (iVar4 == 0) {
    FUN_0046fcd0(0x01BCD074,"Can't open %s",local_130);
  }
  else {
    FUN_005636d0(local_630,1,0x300,iVar4);
    FUN_00563380(iVar4);
    iVar4 = 0;
    iVar2 = 0;
    local_20 = 0;
    do {
      if (DAT_005b7624 == 0x10) {
        local_30 = (uint)local_630[iVar4 + 1];
        local_30 = local_630[iVar4 + 1] / _DAT_01c00634;
        local_2c = local_630[iVar4 + 2] / _DAT_01c00640;
        *(ushort *)((int)auStack_330 + iVar2) =
             (ushort)(local_630[iVar4 + 2] / _DAT_01c00640 << (DAT_01c0063c & 0x1f)) |
             (ushort)(local_630[iVar4] / _DAT_01c00628 << (DAT_01c00624 & 0x1f)) |
             (ushort)(local_30 << (DAT_01c00630 & 0x1f));
      }
      else if (DAT_005b7624 == 0x20) {
        *(uint *)((int)auStack_a30 + local_20) =
             (uint)local_630[iVar4] << (DAT_01c00624 & 0x1f) |
             (uint)local_630[iVar4 + 1] << (DAT_01c00630 & 0x1f) |
             (uint)local_630[iVar4 + 2] << (DAT_01c0063c & 0x1f);
      }
      else {
        *(uint *)((int)auStack_a30 + local_20) =
             (uint)local_630[iVar4 + 1] << 8 | (uint)local_630[iVar4] << 0x10 |
             (uint)local_630[iVar4 + 2];
      }
      iVar2 = iVar2 + 2;
      iVar4 = iVar4 + 3;
      local_20 = local_20 + 4;
    } while (iVar2 != 0x200);
    FUN_00553470();
    FUN_005322e0();
    FUN_0052ee70();
    FUN_00532320();
    FUN_00553520();
    FUN_00553910();
    local_18 = FUN_005635b0(*(int *)(param_1 + 0x9b4) * *(int *)(param_1 + 0x9b8));
    if (local_18 != 0) {
      iVar4 = FUN_00456a60(&DAT_005843db,param_1 + 0x8b4,&DAT_005843d8);
      if (iVar4 == 0) {
        _DAT_01cc4800 = "..\\core\\game.cpp";
        _DAT_01cc4804 = 0x1028;
        FUN_004c8440("Can't open %s",param_1 + 0x8b4);
      }
      FUN_005636d0(local_18,*(uint *)(param_1 + 0x9b4),*(uint *)(param_1 + 0x9b8),iVar4)
      ;
      FUN_00563380(iVar4);
      local_1c = 0;
      if (0 < DAT_005b7620) {
        local_24 = 0;
        do {
          local_14 = *(int *)(param_1 + 0x9b4) *
                     ((local_1c * *(int *)(param_1 + 0x9b8)) / DAT_005b7620);
          iVar4 = 0;
          if (0 < DAT_005b761c) {
            iVar2 = 0;
            iVar3 = 0;
            do {
              pbVar5 = (byte *)(local_18 +
                               (*(int *)(param_1 + 0x9b4) * iVar4) / DAT_005b761c + local_14);
              if (DAT_005b7624 == 0x10) {
                local_28 = (ushort *)(*(int *)(&DAT_01bd2fa0 + local_24) + iVar3);
                *(ushort *)(*(int *)(&DAT_01bd2fa0 + local_24) + iVar3) = auStack_330[*pbVar5];
              }
              else {
                *(uint *)(iVar2 + *(int *)(&DAT_01bd2fa0 + local_24)) = auStack_a30[*pbVar5];
              }
              iVar2 = iVar2 + 4;
              iVar4 = iVar4 + 1;
              iVar3 = iVar3 + 2;
            } while (iVar4 < DAT_005b761c);
          }
          local_1c = local_1c + 1;
          local_24 = local_24 + 4;
        } while (local_1c < DAT_005b7620);
      }
      FUN_00403f50();
      FUN_0049f8c0(param_1);
      do {
        FUN_00553910();
        if (*(int *)(param_1 + 0xbc) == 2) {
          FUN_0049e8b0(param_1);
        }
        iVar4 = FUN_00558b70();
      } while (((iVar4 == 0) &&
               (iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,*(uint *)(param_1 + 0x48)),
               iVar4 == 0)) && (_DAT_01bd1d94 == 0));
      while ((_DAT_01bd1d94 != 0 ||
             (iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,*(uint *)(param_1 + 0x48)),
             iVar4 != 0))) {
        if (*(int *)(param_1 + 0xbc) == 2) {
          FUN_0049e8b0(param_1);
          FUN_00553910();
        }
        else {
          FUN_00553910();
        }
      }
      FUN_00403f50();
      FUN_0049f8c0(param_1);
      FUN_0049a890(param_1);
      *(byte *)(param_1 + 0x8b4) = 0;
      FUN_005638d0(local_18);
      return;
    }
  }
  *(byte *)(param_1 + 0x8b4) = 0;
  return;
}
