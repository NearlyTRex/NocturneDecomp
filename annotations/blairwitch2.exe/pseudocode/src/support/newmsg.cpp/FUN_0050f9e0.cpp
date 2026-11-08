// Name: FUN_0050f9e0
// Address: 0050f9e0
// Address Range: [[0050f9e0, 0050fd9b]]
// Convention: unknown
// Signature: void FUN_0050f9e0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050f9e0(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  char local_31c [256];
  byte local_21c [256];
  char local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  
  bVar11 = 0;
  local_1c = 0;
  iVar3 = FUN_00460aa0(&DAT_005e129d,param_1);
  if ((iVar3 < 1) || (iVar4 = FUN_00460c70(&DAT_005e12a1,param_1,&DAT_005e129e), iVar4 == 0)) {
    return;
  }
  local_18 = FUN_005baab0(iVar4);
  local_18 = iVar3 + local_18;
  FUN_005b9600(local_21c,0xff,iVar4);
  FUN_005b8100(iVar4,&DAT_005e12a2,&local_1c);
  FUN_005b9600(local_21c,0xff,iVar4);
  FUN_005b8100(iVar4,&DAT_005e12a6,&DAT_01d63250);
  if (local_1c != 0) {
    _DAT_01d046a0 = "..\\support\\newmsg.cpp";
    _DAT_01d046a4 = 0x57;
    FUN_004e4500("Unknown message file version");
  }
  FUN_005b9600(local_21c,0xff,iVar4);
  FUN_005b8100(iVar4,"\"%[^\"]\"\n",&DAT_0061b190);
  do {
    FUN_005b8100(iVar4,&DAT_005e12e6);
    iVar3 = FUN_005baab0(iVar4);
    if (local_18 <= iVar3) {
      FUN_005b89c0(iVar4);
      if (0 < _DAT_01d63258) {
        iVar3 = _DAT_01d63258 * 4;
        iVar4 = 0;
        do {
          iVar5 = iVar4 + 4;
          *(uint *)(iVar4 + 0x1d6325c) = *(uint *)(iVar4 + 0x1d641fc);
          *(uint *)(iVar4 + 0x1d63a2c) = *(uint *)(iVar4 + 0x1d649cc);
          iVar4 = iVar5;
        } while (iVar5 < iVar3);
      }
      local_14 = 0;
      for (iVar3 = 0; iVar4 = local_14, iVar3 < _DAT_01d63258 + -1; iVar3 = iVar3 + 1) {
        iVar5 = iVar3 + 1;
        if (iVar5 < _DAT_01d63258) {
          iVar8 = iVar5 * 4;
          do {
            iVar6 = FUN_005b8c30(*(uint *)(iVar4 + 0x1d6325c),
                                 *(uint *)(iVar8 + 0x1d6325c));
            if (0 < iVar6) {
              uVar2 = *(uint *)(iVar4 + 0x1d6325c);
              *(uint *)(iVar4 + 0x1d6325c) = *(uint *)(iVar8 + 0x1d6325c);
              *(uint *)(iVar8 + 0x1d6325c) = uVar2;
              uVar2 = *(uint *)(iVar4 + 0x1d63a2c);
              *(uint *)(iVar4 + 0x1d63a2c) = *(uint *)(iVar8 + 0x1d63a2c);
              *(uint *)(iVar8 + 0x1d63a2c) = uVar2;
            }
            iVar5 = iVar5 + 1;
            iVar8 = iVar8 + 4;
          } while (iVar5 < _DAT_01d63258);
        }
        local_14 = local_14 + 4;
      }
      _DAT_01d63254 = 1;
      return;
    }
    iVar3 = FUN_005b8100(iVar4,"\"%[^\"]\", \"%[^\"]\"\n",local_11c,local_31c);
    if (iVar3 != 2) {
      _DAT_01d046a0 = "..\\support\\newmsg.cpp";
      _DAT_01d046a4 = 0x68;
      FUN_004e4500("Error reading %s",param_1);
    }
    if (499 < _DAT_01d63258) {
      _DAT_01d046a0 = "..\\support\\newmsg.cpp";
      _DAT_01d046a4 = 0x6d;
      FUN_004e4500("Too many messages in %s",param_1);
    }
    uVar7 = 0xffffffff;
    pcVar9 = local_11c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_005b8580(~uVar7);
    *(int *)(_DAT_01d63258 * 4 + 0x1d641fc) = iVar3;
    if (iVar3 == 0) {
      _DAT_01d046a0 = "..\\support\\newmsg.cpp";
      _DAT_01d046a4 = 0x70;
      FUN_004e4500("Out of memory mallocing message tag : %s",local_11c);
    }
    uVar7 = 0xffffffff;
    pcVar9 = local_31c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_005b8580(~uVar7);
    *(int *)(_DAT_01d63258 * 4 + 0x1d649cc) = iVar3;
    if (iVar3 == 0) {
      _DAT_01d046a0 = "..\\support\\newmsg.cpp";
      _DAT_01d046a4 = 0x73;
      FUN_004e4500("Out of memory mallocing message tag : %s",local_31c);
    }
    pcVar9 = local_11c;
    pcVar10 = *(char **)(_DAT_01d63258 * 4 + 0x1d641fc);
    do {
      cVar1 = *pcVar9;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    pcVar9 = *(char **)(_DAT_01d63258 * 4 + 0x1d649cc);
    pcVar10 = local_31c;
    do {
      cVar1 = *pcVar10;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    _DAT_01d63258 = _DAT_01d63258 + 1;
  } while( true );
}
