// Name: FUN_004d77d0
// Address: 004d77d0
// Address Range: [[004d77d0, 004d7ddb]]
// Convention: unknown
// Signature: void FUN_004d77d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d77d0(int param_1)

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
  if (*(char *)(param_1 + 0x8e8) == '\0') {
    return;
  }
  iVar5 = param_1 + 0x8e8;
  *(uint *)(param_1 + 0xe0) = 0;
  iVar2 = FUN_00478fb0("art",iVar5);
  if (iVar2 < 0) {
    FUN_004943a0(0x01C3EB54,"Can't open %s",iVar5);
    *(byte *)(param_1 + 0x8e8) = 0;
    return;
  }
  iVar3 = *(int *)(param_1 + 0x9e8) * *(int *)(param_1 + 0x9ec);
  if (iVar2 != iVar3) {
    FUN_004943a0(0x01C3EB54,"%s is %d bytes, but expected %dx%d=%d byte file",iVar5,
                 *(uint *)(param_1 + 0x9e8),*(int *)(param_1 + 0x9ec),iVar3);
    *(byte *)(param_1 + 0x8e8) = 0;
    return;
  }
  FUN_005c2238(iVar5,0,0,local_12c,0);
  pcVar6 = ".act";
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
  iVar5 = FUN_00479180("art",local_12c,"rb");
  if (iVar5 == 0) {
    FUN_004943a0(0x01C3EB54,"Can't open %s",local_12c);
  }
  else {
    FUN_005c0b10(local_62c,1,0x300,iVar5);
    FUN_005c0d10(iVar5);
    iVar5 = 0;
    iVar2 = 0;
    local_1c = 0;
    do {
      if (DAT_0061b4a0 == 0x10) {
        local_2c = (uint)local_62c[iVar5];
        local_2c = local_62c[iVar5] / _DAT_01c4e9d8;
        local_28 = local_62c[iVar5 + 2] / _DAT_01c4e9f0;
        *(ushort *)((int)auStack_32c + iVar2) =
             (ushort)(local_62c[iVar5 + 2] / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f)) |
             (ushort)(local_62c[iVar5 + 1] / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f)) |
             (ushort)(local_2c << (DAT_01c4e9d4 & 0x1f));
      }
      else if (DAT_0061b4a0 == 0x20) {
        *(uint *)((int)auStack_a2c + local_1c) =
             (uint)local_62c[iVar5] << (DAT_01c4e9d4 & 0x1f) |
             (uint)local_62c[iVar5 + 1] << (DAT_01c4e9e0 & 0x1f) |
             (uint)local_62c[iVar5 + 2] << (DAT_01c4e9ec & 0x1f);
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
    FUN_005acb10();
    FUN_00581f50();
    FUN_0057dc40();
    FUN_00581fa0(0);
    FUN_005acc00();
    FUN_005acff0();
    local_18 = FUN_005c08d0(*(int *)(param_1 + 0x9e8) * *(int *)(param_1 + 0x9ec));
    if (local_18 != 0) {
      iVar5 = FUN_00479180(&DAT_005e3303,param_1 + 0x8e8,&DAT_005e3300);
      if (iVar5 == 0) {
        _DAT_01d1d400 = "..\\core\\game.cpp";
        _DAT_01d1d404 = 0x1250;
        FUN_005030e0("Can't open %s",param_1 + 0x8e8);
      }
      FUN_005c0b10(local_18,*(uint *)(param_1 + 0x9e8),*(uint *)(param_1 + 0x9ec),iVar5)
      ;
      FUN_005c0d10(iVar5);
      local_24 = 0;
      if (0 < DAT_0061b49c) {
        local_20 = 0;
        do {
          local_14 = *(int *)(param_1 + 0x9e8) *
                     ((local_24 * *(int *)(param_1 + 0x9ec)) / DAT_0061b49c);
          iVar5 = 0;
          if (0 < DAT_0061b498) {
            iVar3 = 0;
            iVar2 = 0;
            do {
              pbVar4 = (byte *)((*(int *)(param_1 + 0x9e8) * iVar5) / DAT_0061b498 + local_14 +
                               local_18);
              if (DAT_0061b4a0 == 0x10) {
                *(ushort *)(*(int *)(&DAT_01c4354c + local_20) + iVar2) = auStack_32c[*pbVar4];
              }
              else {
                *(uint *)(*(int *)(&DAT_01c4354c + local_20) + iVar3) = auStack_a2c[*pbVar4];
              }
              iVar3 = iVar3 + 4;
              iVar5 = iVar5 + 1;
              iVar2 = iVar2 + 2;
            } while (iVar5 < DAT_0061b498);
          }
          local_24 = local_24 + 1;
          local_20 = local_20 + 4;
        } while (local_24 < DAT_0061b49c);
      }
      FUN_004032b0();
      FUN_004d19d0(param_1);
      while( true ) {
        FUN_005acff0();
        if (*(int *)(param_1 + 0xd0) == 2) {
          FUN_004d0960(param_1);
        }
        iVar5 = FUN_005b2580();
        if ((((iVar5 != 0) ||
             (iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,*(uint *)(param_1 + 0x48)),
             iVar5 != 0)) || (_DAT_01c43544 != 0)) ||
           ((_DAT_01cd0b3c != 1 && (*(float *)(param_1 + 0x3b8) < 0.0)))) break;
        FUN_004cbf20(0x01CCF390);
        *(float *)(param_1 + 0x3b8) = *(float *)(param_1 + 0x3b8) - *(float *)(0x01CCF390 + 0x294)
        ;
      }
      while ((_DAT_01c43544 != 0 ||
             (iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,*(uint *)(param_1 + 0x48)),
             iVar5 != 0))) {
        if (*(int *)(param_1 + 0xd0) == 2) {
          FUN_004d0960(param_1);
          FUN_005acff0();
        }
        else {
          FUN_005acff0();
        }
      }
      FUN_004032b0();
      FUN_004d19d0(param_1);
      FUN_004cbf10(param_1);
      *(byte *)(param_1 + 0x8e8) = 0;
      FUN_005c09f0(local_18);
      return;
    }
  }
  *(byte *)(param_1 + 0x8e8) = 0;
  return;
}
