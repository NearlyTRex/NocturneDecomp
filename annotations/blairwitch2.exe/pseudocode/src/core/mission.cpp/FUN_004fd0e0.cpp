// Name: FUN_004fd0e0
// Address: 004fd0e0
// Address Range: [[004fd0e0, 004fd275]]
// Convention: unknown
// Signature: undefined4 FUN_004fd0e0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004fd0e0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar2 = iVar4 + 4;
    *(uint *)(iVar4 + 0x1cedee4) = 0;
    iVar4 = iVar2;
  } while (iVar2 != 0x10);
  if (*0x01D34CB0 == 0) {
    _DAT_01cedee0 = 1;
    _DAT_01cedef4 = *0x01D34CB0;
    iVar4 = FUN_004fcf70(param_1,0,*(uint *)(0x01CB6900 + 0xd4),param_2);
    if (iVar4 == 0) {
      return 0;
    }
    *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x24378) =
         *(uint *)(0x01CB6900 + 0xd8);
  }
  else {
    _DAT_01cedee0 = 0x01D34CB0[7];
    if (3 < _DAT_01cedee0) {
      _DAT_01d046a0 = "..\\core\\mission.cpp";
      _DAT_01d046a4 = 0x688;
      FUN_004e4500("CDemonMission::createHeros - too many network players for MAX_HERO");
    }
    iVar4 = 0;
    if (0 < _DAT_01cedee0) {
      iVar3 = 0;
      iVar2 = 0;
      do {
        iVar1 = FUN_004fcf70(param_1,iVar4,*(uint *)(iVar3 + 0x34 + (int)0x01D34CB0),0);
        if (iVar1 == 0) {
          return 0;
        }
        *(uint *)(*(int *)(iVar2 + 0x1cedee4) + 0x10a64) = 1;
        iVar4 = iVar4 + 1;
        *(uint *)(*(int *)(iVar2 + 0x1cedee4) + 0x24378) =
             *(uint *)((int)0x01D34CB0 + iVar3 + 0x38);
        iVar3 = iVar3 + 0x80;
        iVar2 = iVar2 + 4;
      } while (iVar4 < _DAT_01cedee0);
    }
    _DAT_01cedef4 = 0x01D34CB0[0x49];
  }
  *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x10a64) = 0;
  iVar4 = *(int *)(param_1 + 0x1114);
  while (iVar4 != 0) {
    iVar2 = FUN_0040c840(iVar4,"CHeroPlaceholder");
    if (iVar2 == 0) {
      iVar4 = *(int *)(iVar4 + 0x14c);
    }
    else {
      FUN_004fc570(param_1,iVar4,1);
      iVar4 = *(int *)(param_1 + 0x1114);
    }
  }
  FUN_004fc4c0(param_1);
  return 1;
}
