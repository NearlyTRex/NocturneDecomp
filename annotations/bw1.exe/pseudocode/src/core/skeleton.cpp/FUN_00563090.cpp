// Name: FUN_00563090
// Address: 00563090
// Address Range: [[00563090, 005634e7]]
// Convention: unknown
// Signature: void FUN_00563090(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00563090(int param_1,int param_2)

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
  
  FUN_00562f70(param_1,1);
  local_24 = -1;
  do {
    iVar1 = FUN_005c0530(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  FUN_005c04b0(param_2,&DAT_005f1b7e,&local_24);
  if (local_24 < 1) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x119;
    FUN_005030e0("Invalid skeleton version");
  }
  if (local_24 < 2) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x11a;
    FUN_005030e0("Old skeleton version %d not supported",local_24);
  }
  if (0x00000004 < local_24) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x11b;
    FUN_005030e0("Skeleton version %d is newer than .EXE, which can only process up to version %d",local_24,0x00000004);
  }
  do {
    iVar1 = FUN_005c0530(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  FUN_005c04b0(param_2,"%d,%d\n",&local_20,&local_1c);
  FUN_00562e60(param_1,local_20,local_1c);
  do {
    iVar1 = FUN_005c0530(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x1de78)) {
    iVar3 = param_1 + 0x1de9c;
    do {
      FUN_005c04b0(param_2,"\"%[^\"]\",%d\n",iVar1 * 0x24 + param_1 + 0x1de7c,iVar3);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar1 < *(int *)(param_1 + 0x1de78));
  }
  do {
    iVar1 = FUN_005c0530(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  if (local_24 < 4) {
    local_18 = 0;
    iVar1 = *(int *)(param_1 + 0x1ec90);
    if (0 < *(int *)(param_1 + 0x1ec8c)) {
      do {
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x1de78)) {
          iVar2 = iVar1 + 4;
          local_14 = iVar1 + 8;
          iVar4 = iVar1 + 0xc;
          do {
            iVar3 = iVar3 + 1;
            FUN_005c04b0(param_2,"%f,%f,%f,%f\n",iVar1,iVar2,local_14,iVar4);
            iVar2 = iVar2 + 0x10;
            iVar1 = iVar1 + 0x10;
            local_14 = local_14 + 0x10;
            iVar4 = iVar4 + 0x10;
          } while (iVar3 < *(int *)(param_1 + 0x1de78));
        }
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)(param_1 + 0x1ec8c));
    }
  }
  else {
    iVar1 = FUN_005c0b10(*(uint *)(param_1 + 0x1ec90),
                         *(int *)(param_1 + 0x1ec8c) * *(int *)(param_1 + 0x1de78) * 0x10,1,param_2)
    ;
    if (iVar1 != 1) {
      _DAT_01d1d400 = "..\\core\\skeleton.cpp";
      _DAT_01d1d404 = 0x137;
      FUN_005030e0("Skeleton file corrupt");
    }
    do {
      iVar1 = FUN_005c0530(param_2);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
  }
  do {
    iVar1 = FUN_005c0530(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x1ec8c)) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x1ec94) + iVar3;
      FUN_005c04b0(param_2,"%f,%f,%f\n",iVar2,iVar2 + 4,iVar2 + 8);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar1 < *(int *)(param_1 + 0x1ec8c));
  }
  do {
    iVar1 = FUN_005c0530(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x1ec8c)) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x1ec98) + iVar3;
      FUN_005c04b0(param_2,"%f,%f,%f\n",iVar2,iVar2 + 4,iVar2 + 8);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar1 < *(int *)(param_1 + 0x1ec8c));
  }
  if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x159;
    FUN_005030e0("CSkeleton::loadStream - error reading file.");
  }
  FUN_00523980(param_1,param_2);
  if (2 < local_24) {
    do {
      iVar1 = FUN_005c0530(param_2);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x1de78)) {
LAB_0056339e:
      do {
        iVar3 = FUN_005c0530(param_2);
        if (-1 < iVar3) {
          if (iVar3 != 10) goto LAB_0056339e;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x1de78));
    }
  }
  if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x174;
    FUN_005030e0("CSkeleton::loadStream - error reading file.");
    return;
  }
  return;
}
