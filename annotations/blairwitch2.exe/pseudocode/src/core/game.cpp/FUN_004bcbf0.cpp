// Name: FUN_004bcbf0
// Address: 004bcbf0
// Address Range: [[004bcbf0, 004bd2ec]]
// Convention: unknown
// Signature: void FUN_004bcbf0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bcbf0(int param_1)

{
  float *pfVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar10;
  uint auStack_a44 [256];
  byte local_644 [768];
  ushort auStack_344 [256];
  char local_144 [256];
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int iStack_20;
  int local_1c;
  int local_18;
  int local_14;
  char *pcVar9;
  
  bVar10 = 0;
  if (*(char *)(param_1 + 0x8d8) == '\0') {
    return;
  }
  iVar5 = param_1 + 0x8d8;
  *(uint *)(param_1 + 0xe0) = 0;
  iVar3 = FUN_00460aa0(&DAT_005d8748,iVar5);
  if (iVar3 < 0) {
    FUN_0047be40(0x01C25594,"Can't open %s",iVar5);
    *(byte *)(param_1 + 0x8d8) = 0;
    return;
  }
  iVar6 = *(int *)(param_1 + 0x9d8) * *(int *)(param_1 + 0x9dc);
  if (iVar3 != iVar6) {
    FUN_0047be40(0x01C25594,"%s is %d bytes, but expected %dx%d=%d byte file",iVar5,
                 *(uint *)(param_1 + 0x9d8),*(int *)(param_1 + 0x9dc),iVar6);
    *(byte *)(param_1 + 0x8d8) = 0;
    return;
  }
  FUN_005b9e58(iVar5,0,0,local_144,0);
  pcVar7 = &DAT_005d878a;
  iVar5 = -1;
  pcVar9 = local_144;
  do {
    pcVar8 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar8 = pcVar9 + (uint)bVar10 * -2 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar2 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar2 = *pcVar7;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  iVar5 = FUN_00460c70(&DAT_005d8792,local_144,&DAT_005d878f);
  if (iVar5 == 0) {
    FUN_0047be40(0x01C25594,"Can't open %s",local_144);
  }
  else {
    FUN_005b87c0(local_644,1,0x300,iVar5);
    FUN_005b89c0(iVar5);
    iVar5 = 0;
    iVar3 = 0;
    local_24 = 0;
    do {
      if (DAT_006141c0 == 0x10) {
        local_44 = (uint)local_644[iVar5 + 1];
        local_40 = local_44;
        local_40 = local_44 / _DAT_01c35824;
        local_3c = local_644[iVar5 + 2] / _DAT_01c35830;
        *(ushort *)((int)auStack_344 + iVar3) =
             (ushort)(local_644[iVar5 + 2] / _DAT_01c35830 << (DAT_01c3582c & 0x1f)) |
             (ushort)(local_644[iVar5] / _DAT_01c35818 << (DAT_01c35814 & 0x1f)) |
             (ushort)(local_44 / _DAT_01c35824 << (DAT_01c35820 & 0x1f));
      }
      else {
        local_30 = (uint)local_644[iVar5 + 2];
        if (DAT_006141c0 == 0x20) {
          *(uint *)((int)auStack_a44 + local_24) =
               local_30 << (DAT_01c3582c & 0x1f) |
               (uint)local_644[iVar5] << (DAT_01c35814 & 0x1f) |
               (uint)local_644[iVar5 + 1] << (DAT_01c35820 & 0x1f);
        }
        else {
          *(uint *)((int)auStack_a44 + local_24) =
               (uint)local_644[iVar5] << 0x10 | (uint)local_644[iVar5 + 1] << 8 | local_30;
        }
      }
      iVar3 = iVar3 + 2;
      iVar5 = iVar5 + 3;
      local_24 = local_24 + 4;
    } while (iVar3 != 0x200);
    FUN_005890c0();
    FUN_0055f500();
    FUN_0055b1f0();
    FUN_0055f550(0);
    FUN_00589170();
    FUN_00589560();
    local_18 = FUN_005b8580(*(int *)(param_1 + 0x9d8) * *(int *)(param_1 + 0x9dc));
    if (local_18 != 0) {
      iVar5 = FUN_00460c70(&DAT_005d87a7,param_1 + 0x8d8,&DAT_005d87a4);
      if (iVar5 == 0) {
        _DAT_01d046a0 = "..\\core\\game.cpp";
        _DAT_01d046a4 = 0x1275;
        FUN_004e4500("Can't open %s",param_1 + 0x8d8);
      }
      FUN_005b87c0(local_18,*(uint *)(param_1 + 0x9d8),*(uint *)(param_1 + 0x9dc),iVar5)
      ;
      FUN_005b89c0(iVar5);
      local_1c = 0;
      if (0 < DAT_006141bc) {
        local_28 = 0;
        do {
          local_14 = *(int *)(param_1 + 0x9d8) *
                     ((local_1c * *(int *)(param_1 + 0x9dc)) / DAT_006141bc);
          iVar5 = 0;
          if (0 < DAT_006141b8) {
            iVar3 = 0;
            iVar6 = 0;
            do {
              pbVar4 = (byte *)((*(int *)(param_1 + 0x9d8) * iVar5) / DAT_006141b8 + local_14 +
                               local_18);
              if (DAT_006141c0 == 0x10) {
                *(ushort *)(*(int *)(&DAT_01c2a38c + local_28) + iVar6) = auStack_344[*pbVar4];
              }
              else {
                *(uint *)(*(int *)(&DAT_01c2a38c + local_28) + iVar3) = auStack_a44[*pbVar4];
              }
              iVar3 = iVar3 + 4;
              iVar5 = iVar5 + 1;
              iVar6 = iVar6 + 2;
            } while (iVar5 < DAT_006141b8);
          }
          local_1c = local_1c + 1;
          local_28 = local_28 + 4;
        } while (local_1c < DAT_006141bc);
      }
      FUN_004032b0();
      FUN_004b8250(param_1);
      pfVar1 = (float *)(param_1 + 0x3a8);
      while( true ) {
        FUN_00589560();
        if (*(int *)(param_1 + 0xd0) == 2) {
          FUN_004b7140(param_1);
        }
        iVar5 = FUN_0058eb40();
        if (((iVar5 != 0) ||
            (iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,*(uint *)(param_1 + 0x48)),
            iVar5 != 0)) || (_DAT_01c2a384 != 0)) break;
        if (_DAT_01cb80cc == 1) {
          *pfVar1 = *pfVar1 - *(float *)(0x01CB6900 + 0x284);
        }
        else {
          if (*(float *)(param_1 + 0x3a8) < 0.0) break;
          *pfVar1 = *pfVar1 - *(float *)(0x01CB6900 + 0x284);
        }
      }
      do {
        if (_DAT_01c2a384 == 0) {
          iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,*(uint *)(param_1 + 0x48));
          if (iVar5 == 0) {
            FUN_004032b0();
            FUN_004b8250(param_1);
            FUN_004b3000(param_1);
            *(byte *)(param_1 + 0x8d8) = 0;
            FUN_005b86a0(local_18);
            iStack_20 = 0;
            if (DAT_006141bc < 1) {
              return;
            }
            iStack_2c = 0;
            do {
              iVar5 = 0;
              if (0 < DAT_006141b8) {
                iVar6 = 0;
                iVar3 = 0;
                do {
                  if (DAT_006141c0 == 0x10) {
                    *(ushort *)(*(int *)(&DAT_01c2a38c + iStack_2c) + iVar3) = auStack_344[0];
                  }
                  else {
                    *(uint *)(*(int *)(&DAT_01c2a38c + iStack_2c) + iVar6) = auStack_a44[0];
                  }
                  iVar6 = iVar6 + 4;
                  iVar5 = iVar5 + 1;
                  iVar3 = iVar3 + 2;
                } while (iVar5 < DAT_006141b8);
              }
              iStack_2c = iStack_2c + 4;
              iStack_20 = iStack_20 + 1;
            } while (iStack_20 < DAT_006141bc);
            return;
          }
        }
        if (*(int *)(param_1 + 0xd0) == 2) {
          FUN_004b7140(param_1);
          FUN_00589560();
        }
        else {
          FUN_00589560();
        }
      } while( true );
    }
  }
  *(byte *)(param_1 + 0x8d8) = 0;
  return;
}
