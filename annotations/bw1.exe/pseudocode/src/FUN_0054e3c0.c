// Name: FUN_0054e3c0
// Address: 0054e3c0
// Address Range: [[0054e3c0, 0054e694]]
// Convention: unknown
// Signature: void FUN_0054e3c0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054e3c0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_00483a20(DAT_00612560,&DAT_00622c1c);
  FUN_004839f0(DAT_00612560,0x3e800000);
  if ((param_3 == 0) || (*(int *)(param_1 + 0x15aeb8) < 0)) {
LAB_0054e5a1:
    if (param_3 == 1) {
      uVar2 = 1;
      goto LAB_0054e42b;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x15aeb8) * 0x1a4 + param_1;
    iVar3 = *(int *)(iVar1 + 0x198);
    if ((0 < iVar3) && (iVar1 = *(int *)(iVar1 + 0x19c), iVar1 != 0)) {
      FUN_0048e4e0(&DAT_01fe5c1c,iVar3,iVar1);
      goto LAB_0054e5a1;
    }
    param_3 = 2;
  }
  uVar2 = 0;
LAB_0054e42b:
  FUN_0048d4f0(&DAT_01fe5c1c,param_2,uVar2);
  if (param_3 == 2) {
    iVar3 = *(int *)(param_1 + 0x15aeb8) * 0x1a4 + param_1 + 4;
    FUN_0048e640(&DAT_01fe5c1c,iVar3 + 0x194,iVar3 + 0x198);
  }
  iVar3 = FUN_00483e60(DAT_00612560);
  if (iVar3 == 0) {
    if (_DAT_01c50948 == 0) {
      FUN_00555610(param_1);
    }
    if (_DAT_01c50948 == 0) {
      if (*(int *)(param_1 + 0x15aca4) != 0) {
        local_1c = _DAT_01c50948;
        local_18 = _DAT_01c50948;
        local_14 = _DAT_01c50948;
        FUN_004837b0(DAT_00612560,&local_1c);
        FUN_00467270(0x1fe5fac,0,0,0xffffffff);
      }
      if ((*(int *)(param_1 + 0x15aca0) == 0) && (*(int *)(param_1 + 0x161640) != 0)) {
        FUN_00486900(0x01BEEFBC,param_1 + 0x161644,*(uint *)(param_1 + 0x161664));
      }
      if ((*(int *)(param_1 + 0x15ac9c) == 0) && (FUN_005a9a40(0x02C8AFB0), *0x02C8AFB0 == 0)) {
        FUN_005a9f10(0x02C8AFB0,1);
      }
      if (*(int *)(param_1 + 0x15acb8) != 0) {
        FUN_0059f3e0(0x02C8AE68,1);
      }
    }
    iVar1 = 0;
    iVar3 = param_1;
    if (0 < *(int *)(param_1 + 0x15acc8)) {
      do {
        FUN_00519e40(*(int *)(iVar3 + 0x15accc) + 0x1ec);
        if (*(int *)(*(int *)(iVar3 + 0x15accc) + 0x180) != 0) {
          FUN_004e1db0(*(int *)(iVar3 + 0x15accc));
        }
        FUN_00555460(param_1,iVar1,1);
        FUN_0048d4f0(&DAT_01fe5c1c,param_2,0);
        iVar1 = iVar1 + 1;
        FUN_00555590(param_1);
        iVar3 = iVar3 + 4;
      } while (iVar1 < *(int *)(param_1 + 0x15acc8));
    }
  }
  else if ((DAT_00622c28 != 0) && (iVar1 = 0, iVar3 = param_1, 0 < *(int *)(param_1 + 0x15acc8))) {
    do {
      FUN_00519e40(*(int *)(iVar3 + 0x15accc) + 0x1ec);
      if (*(int *)(*(int *)(iVar3 + 0x15accc) + 0x180) != 0) {
        FUN_004e1db0(*(int *)(iVar3 + 0x15accc));
      }
      FUN_00555460(param_1,iVar1,0);
      FUN_0048d4f0(&DAT_01fe5c1c,param_2,0);
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 1;
      FUN_00555590(param_1);
    } while (iVar1 < *(int *)(param_1 + 0x15acc8));
  }
  return;
}
