// Name: FUN_0052d0e0
// Address: 0052d0e0
// Address Range: [[0052d0e0, 0052d3b4]]
// Convention: unknown
// Signature: void FUN_0052d0e0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052d0e0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_0046b520(DAT_0060b280,&DAT_0061b5ac);
  FUN_0046b4f0(DAT_0060b280,0x3e800000);
  if ((param_3 == 0) || (*(int *)(param_1 + 0x15aeb8) < 0)) {
LAB_0052d2c1:
    if (param_3 == 1) {
      uVar2 = 1;
      goto LAB_0052d14b;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x15aeb8) * 0x1a4 + param_1;
    iVar3 = *(int *)(iVar1 + 0x198);
    if ((0 < iVar3) && (iVar1 = *(int *)(iVar1 + 0x19c), iVar1 != 0)) {
      FUN_00475ff0(&DAT_01fc9c68,iVar3,iVar1);
      goto LAB_0052d2c1;
    }
    param_3 = 2;
  }
  uVar2 = 0;
LAB_0052d14b:
  FUN_00475000(&DAT_01fc9c68,param_2,uVar2);
  if (param_3 == 2) {
    iVar3 = *(int *)(param_1 + 0x15aeb8) * 0x1a4 + param_1 + 4;
    FUN_00476150(&DAT_01fc9c68,iVar3 + 0x194,iVar3 + 0x198);
  }
  iVar3 = FUN_0046b960(DAT_0060b280);
  if (iVar3 == 0) {
    if (_DAT_01c37788 == 0) {
      FUN_00534360(param_1);
    }
    if (_DAT_01c37788 == 0) {
      if (*(int *)(param_1 + 0x15aca4) != 0) {
        local_1c = _DAT_01c37788;
        local_18 = _DAT_01c37788;
        local_14 = _DAT_01c37788;
        FUN_0046b2b0(DAT_0060b280,&local_1c);
        FUN_0044e6a0(0x1fc9ff8,0,0,0xffffffff);
      }
      if ((*(int *)(param_1 + 0x15aca0) == 0) && (*(int *)(param_1 + 0x16163c) != 0)) {
        FUN_0046e410(0x01BD3A00,param_1 + 0x161640,*(uint *)(param_1 + 0x161660));
      }
      if ((*(int *)(param_1 + 0x15ac9c) == 0) && (FUN_00585e10(0x02653790), *0x02653790 == 0)) {
        FUN_005862e0(0x02653790,1);
      }
      if (*(int *)(param_1 + 0x15acb8) != 0) {
        FUN_0057b860(0x0265364C,1);
      }
    }
    iVar1 = 0;
    iVar3 = param_1;
    if (0 < *(int *)(param_1 + 0x15acc8)) {
      do {
        FUN_004faef0(*(int *)(iVar3 + 0x15accc) + 0x348);
        if (*(int *)(*(int *)(iVar3 + 0x15accc) + 0x2dc) != 0) {
          FUN_004c5640(*(int *)(iVar3 + 0x15accc));
        }
        FUN_005341b0(param_1,iVar1,1);
        FUN_00475000(&DAT_01fc9c68,param_2,0);
        iVar1 = iVar1 + 1;
        FUN_005342e0(param_1);
        iVar3 = iVar3 + 4;
      } while (iVar1 < *(int *)(param_1 + 0x15acc8));
    }
  }
  else if ((DAT_0061b5b8 != 0) && (iVar1 = 0, iVar3 = param_1, 0 < *(int *)(param_1 + 0x15acc8))) {
    do {
      FUN_004faef0(*(int *)(iVar3 + 0x15accc) + 0x348);
      if (*(int *)(*(int *)(iVar3 + 0x15accc) + 0x2dc) != 0) {
        FUN_004c5640(*(int *)(iVar3 + 0x15accc));
      }
      FUN_005341b0(param_1,iVar1,0);
      FUN_00475000(&DAT_01fc9c68,param_2,0);
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 1;
      FUN_005342e0(param_1);
    } while (iVar1 < *(int *)(param_1 + 0x15acc8));
  }
  return;
}
