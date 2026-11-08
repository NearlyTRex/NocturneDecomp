// Name: FUN_004f7880
// Address: 004f7880
// Address Range: [[004f7880, 004f7a15]]
// Convention: unknown
// Signature: undefined4 FUN_004f7880(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004f7880(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar2 = iVar4 + 4;
    *(uint *)(iVar4 + 0x1d5ba04) = 0;
    iVar4 = iVar2;
  } while (iVar2 != 0x10);
  if (*0x01DA62F0 == 0) {
    _DAT_01d5ba00 = 1;
    _DAT_01d5ba14 = *0x01DA62F0;
    iVar4 = FUN_004f7710(param_1,0,*(uint *)(0x01D2130C + 0xd8),param_2);
    if (iVar4 == 0) {
      return 0;
    }
    *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e4) =
         *(uint *)(0x01D2130C + 0xdc);
  }
  else {
    _DAT_01d5ba00 = 0x01DA62F0[7];
    if (3 < _DAT_01d5ba00) {
      _DAT_01d71de0 = "..\\core\\mission.cpp";
      _DAT_01d71de4 = 0x69a;
      FUN_004e4330("CDemonMission::createHeros - too many network players for MAX_HERO");
    }
    iVar4 = 0;
    if (0 < _DAT_01d5ba00) {
      iVar3 = 0;
      iVar2 = 0;
      do {
        iVar1 = FUN_004f7710(param_1,iVar4,*(uint *)(iVar3 + 0x34 + (int)0x01DA62F0),0);
        if (iVar1 == 0) {
          return 0;
        }
        *(uint *)(*(int *)(iVar2 + 0x1d5ba04) + 0xcdd0) = 1;
        iVar4 = iVar4 + 1;
        *(uint *)(*(int *)(iVar2 + 0x1d5ba04) + 0x206e4) =
             *(uint *)((int)0x01DA62F0 + iVar3 + 0x38);
        iVar3 = iVar3 + 0x80;
        iVar2 = iVar2 + 4;
      } while (iVar4 < _DAT_01d5ba00);
    }
    _DAT_01d5ba14 = 0x01DA62F0[0x49];
  }
  *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0xcdd0) = 0;
  iVar4 = *(int *)(param_1 + 0x143c);
  while (iVar4 != 0) {
    iVar2 = FUN_0040c790(iVar4,"CHeroPlaceholder");
    if (iVar2 == 0) {
      iVar4 = *(int *)(iVar4 + 0x14c);
    }
    else {
      FUN_004f6ca0(param_1,iVar4,1);
      iVar4 = *(int *)(param_1 + 0x143c);
    }
  }
  FUN_004f6bf0(param_1);
  return 1;
}
