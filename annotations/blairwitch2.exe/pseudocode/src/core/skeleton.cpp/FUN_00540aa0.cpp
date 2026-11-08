// Name: FUN_00540aa0
// Address: 00540aa0
// Address Range: [[00540aa0, 00540e73]]
// Convention: unknown
// Signature: void FUN_00540aa0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00540aa0(int param_1,int param_2)

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
  
  FUN_00540980(param_1,1);
  local_24 = -1;
  do {
    iVar1 = FUN_005b8180(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  FUN_005b8100(param_2,&DAT_005e69ac,&local_24);
  if (local_24 < 1) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0x118;
    FUN_004e4500("Invalid skeleton version");
  }
  if (local_24 < 2) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0x119;
    FUN_004e4500("Old skeleton version %d not supported",local_24);
  }
  if (0x00000003 < local_24) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0x11a;
    FUN_004e4500("Skeleton version %d is newer than .EXE, which can only process up to version %d",local_24,0x00000003);
  }
  do {
    iVar1 = FUN_005b8180(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  FUN_005b8100(param_2,"%d,%d\n",&local_20,&local_1c);
  FUN_00540870(param_1,local_20,local_1c);
  do {
    iVar1 = FUN_005b8180(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x1d1f8)) {
    iVar3 = param_1 + 0x1d21c;
    do {
      FUN_005b8100(param_2,"\"%[^\"]\",%d\n",iVar1 * 0x24 + param_1 + 0x1d1fc,iVar3);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar1 < *(int *)(param_1 + 0x1d1f8));
  }
  do {
    iVar1 = FUN_005b8180(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  local_18 = 0;
  iVar1 = *(int *)(param_1 + 0x1e010);
  if (0 < *(int *)(param_1 + 0x1e00c)) {
    do {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x1d1f8)) {
        local_14 = iVar1 + 4;
        iVar4 = iVar1 + 8;
        iVar2 = iVar1 + 0xc;
        do {
          iVar3 = iVar3 + 1;
          FUN_005b8100(param_2,"%f,%f,%f,%f\n",iVar1,local_14,iVar4,iVar2);
          iVar4 = iVar4 + 0x10;
          iVar1 = iVar1 + 0x10;
          local_14 = local_14 + 0x10;
          iVar2 = iVar2 + 0x10;
        } while (iVar3 < *(int *)(param_1 + 0x1d1f8));
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x1e00c));
  }
  do {
    iVar1 = FUN_005b8180(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x1e00c)) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x1e014) + iVar3;
      FUN_005b8100(param_2,"%f,%f,%f\n",iVar4,iVar4 + 4,iVar4 + 8);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar1 < *(int *)(param_1 + 0x1e00c));
  }
  do {
    iVar1 = FUN_005b8180(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x1e00c)) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x1e018) + iVar3;
      FUN_005b8100(param_2,"%f,%f,%f\n",iVar4,iVar4 + 4,iVar4 + 8);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar1 < *(int *)(param_1 + 0x1e00c));
  }
  if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0x14f;
    FUN_004e4500("CSkeleton::loadStream - error reading file.");
  }
  FUN_00502820(param_1,param_2);
  if (2 < local_24) {
    do {
      iVar1 = FUN_005b8180(param_2);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x1d1f8)) {
LAB_00540dee:
      do {
        iVar3 = FUN_005b8180(param_2);
        if (-1 < iVar3) {
          if (iVar3 != 10) goto LAB_00540dee;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x1d1f8));
    }
  }
  if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0x16a;
    FUN_004e4500("CSkeleton::loadStream - error reading file.");
    return;
  }
  return;
}
