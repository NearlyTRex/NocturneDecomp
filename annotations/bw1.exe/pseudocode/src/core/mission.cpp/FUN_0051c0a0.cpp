// Name: FUN_0051c0a0
// Address: 0051c0a0
// Address Range: [[0051c0a0, 0051c232]]
// Convention: unknown
// Signature: undefined4 FUN_0051c0a0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0051c0a0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar2 = iVar4 + 4;
    *(uint *)(iVar4 + 0x1d06aa4) = 0;
    iVar4 = iVar2;
  } while (iVar2 != 0x10);
  if (*0x01D51C20 == 0) {
    _DAT_01d06aa0 = 1;
    _DAT_01d06ab4 = *0x01D51C20;
    iVar4 = FUN_0051bf30(param_1,0,*(uint *)(0x01CCF390 + 0xd4),param_2);
    if (iVar4 == 0) {
      return 0;
    }
    *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae4) =
         *(uint *)(0x01CCF390 + 0xd8);
  }
  else {
    _DAT_01d06aa0 = 0x01D51C20[7];
    if (3 < _DAT_01d06aa0) {
      _DAT_01d1d400 = "..\\core\\mission.cpp";
      _DAT_01d1d404 = 0x698;
      FUN_005030e0("CDemonMission::createHeros - too many network players for MAX_HERO");
    }
    iVar4 = 0;
    if (0 < _DAT_01d06aa0) {
      iVar3 = 0;
      iVar2 = 0;
      do {
        iVar1 = FUN_0051bf30(param_1,iVar4,*(uint *)(iVar3 + 0x34 + (int)0x01D51C20),0);
        if (iVar1 == 0) {
          return 0;
        }
        *(uint *)(*(int *)(iVar2 + 0x1d06aa4) + 0xc1d4) = 1;
        iVar4 = iVar4 + 1;
        *(uint *)(*(int *)(iVar2 + 0x1d06aa4) + 0x1fae4) =
             *(uint *)((int)0x01D51C20 + iVar3 + 0x38);
        iVar3 = iVar3 + 0x7c;
        iVar2 = iVar2 + 4;
      } while (iVar4 < _DAT_01d06aa0);
    }
    _DAT_01d06ab4 = 0x01D51C20[0x47];
  }
  *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0xc1d4) = 0;
  iVar4 = *(int *)(param_1 + 0x1118);
  while (iVar4 != 0) {
    iVar2 = FUN_0040c550(iVar4,"CHeroPlaceholder");
    if (iVar2 == 0) {
      iVar4 = *(int *)(iVar4 + 0x14c);
    }
    else {
      FUN_0051b4d0(param_1,iVar4,1);
      iVar4 = *(int *)(param_1 + 0x1118);
    }
  }
  FUN_0051b420(param_1);
  return 1;
}
