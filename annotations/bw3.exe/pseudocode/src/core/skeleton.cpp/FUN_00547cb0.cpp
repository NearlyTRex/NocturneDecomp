// Name: FUN_00547cb0
// Address: 00547cb0
// Address Range: [[00547cb0, 00548083]]
// Convention: unknown
// Signature: void FUN_00547cb0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00547cb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  FUN_00547b90(param_1,1);
  local_24 = -1;
  do {
    iVar1 = FUN_005a32b0(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  FUN_005a3230(param_2,&DAT_005d16a9,&local_24);
  if (local_24 < 1) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x119;
    FUN_004e4330("Invalid skeleton version");
  }
  if (local_24 < 2) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x11a;
    FUN_004e4330("Old skeleton version %d not supported",local_24);
  }
  if (0x00000003 < local_24) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x11b;
    FUN_004e4330("Skeleton version %d is newer than .EXE, which can only process up to version %d",local_24,0x00000003);
  }
  do {
    iVar1 = FUN_005a32b0(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  FUN_005a3230(param_2,"%d,%d\n",&local_20,&local_1c);
  FUN_00547a80(param_1,local_20,local_1c);
  do {
    iVar1 = FUN_005a32b0(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x1de78)) {
    iVar3 = param_1 + 0x1de9c;
    do {
      FUN_005a3230(param_2,"\"%[^\"]\",%d\n",iVar1 * 0x24 + param_1 + 0x1de7c,iVar3);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar1 < *(int *)(param_1 + 0x1de78));
  }
  do {
    iVar1 = FUN_005a32b0(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  local_18 = 0;
  iVar1 = *(int *)(param_1 + 0x1ec90);
  if (0 < *(int *)(param_1 + 0x1ec8c)) {
    do {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x1de78)) {
        local_14 = iVar1 + 4;
        iVar4 = iVar1 + 8;
        iVar2 = iVar1 + 0xc;
        do {
          iVar3 = iVar3 + 1;
          FUN_005a3230(param_2,"%f,%f,%f,%f\n",iVar1,local_14,iVar4,iVar2);
          iVar4 = iVar4 + 0x10;
          iVar1 = iVar1 + 0x10;
          local_14 = local_14 + 0x10;
          iVar2 = iVar2 + 0x10;
        } while (iVar3 < *(int *)(param_1 + 0x1de78));
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x1ec8c));
  }
  do {
    iVar1 = FUN_005a32b0(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x1ec8c)) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x1ec94) + iVar3;
      FUN_005a3230(param_2,"%f,%f,%f\n",iVar4,iVar4 + 4,iVar4 + 8);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar1 < *(int *)(param_1 + 0x1ec8c));
  }
  do {
    iVar1 = FUN_005a32b0(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x1ec8c)) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x1ec98) + iVar3;
      FUN_005a3230(param_2,"%f,%f,%f\n",iVar4,iVar4 + 4,iVar4 + 8);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar1 < *(int *)(param_1 + 0x1ec8c));
  }
  if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x150;
    FUN_004e4330("CSkeleton::loadStream - error reading file.");
  }
  FUN_004fb280(param_1,param_2);
  if (2 < local_24) {
    do {
      iVar1 = FUN_005a32b0(param_2);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x1de78)) {
LAB_00547ffe:
      do {
        iVar3 = FUN_005a32b0(param_2);
        if (-1 < iVar3) {
          if (iVar3 != 10) goto LAB_00547ffe;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x1de78));
    }
  }
  if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x16b;
    FUN_004e4330("CSkeleton::loadStream - error reading file.");
    return;
  }
  return;
}
