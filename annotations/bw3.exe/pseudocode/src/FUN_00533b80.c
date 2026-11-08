// Name: FUN_00533b80
// Address: 00533b80
// Address Range: [[00533b80, 00533e54]]
// Convention: unknown
// Signature: void FUN_00533b80(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00533b80(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_0046d100(DAT_005f2afc,&DAT_00603b2c);
  FUN_0046d0d0(DAT_005f2afc,0x3e800000);
  if ((param_3 == 0) || (*(int *)(param_1 + 0x15aeb8) < 0)) {
LAB_00533d61:
    if (param_3 == 1) {
      uVar2 = 1;
      goto LAB_00533beb;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x15aeb8) * 0x1a4 + param_1;
    iVar3 = *(int *)(iVar1 + 0x198);
    if ((0 < iVar3) && (iVar1 = *(int *)(iVar1 + 0x19c), iVar1 != 0)) {
      FUN_00477060(&DAT_0203b37c,iVar3,iVar1);
      goto LAB_00533d61;
    }
    param_3 = 2;
  }
  uVar2 = 0;
LAB_00533beb:
  FUN_00476070(&DAT_0203b37c,param_2,uVar2);
  if (param_3 == 2) {
    iVar3 = *(int *)(param_1 + 0x15aeb8) * 0x1a4 + param_1 + 4;
    FUN_004771c0(&DAT_0203b37c,iVar3 + 0x194,iVar3 + 0x198);
  }
  iVar3 = FUN_0046d540(DAT_005f2afc);
  if (iVar3 == 0) {
    if (_DAT_01c6cee8 == 0) {
      FUN_0053afa0(param_1);
    }
    if (_DAT_01c6cee8 == 0) {
      if (*(int *)(param_1 + 0x15aca4) != 0) {
        local_1c = _DAT_01c6cee8;
        local_18 = _DAT_01c6cee8;
        local_14 = _DAT_01c6cee8;
        FUN_0046ce90(DAT_005f2afc,&local_1c);
        FUN_00460f20(0x203b70c,0,0,0xffffffff);
      }
      if ((*(int *)(param_1 + 0x15aca0) == 0) && (*(int *)(param_1 + 0x161640) != 0)) {
        FUN_0046f480(0x01C0B558,param_1 + 0x161644,*(uint *)(param_1 + 0x161664));
      }
      if ((*(int *)(param_1 + 0x15ac9c) == 0) && (FUN_00577290(0x02CFD950), *0x02CFD950 == 0)) {
        FUN_00577760(0x02CFD950,1);
      }
      if (*(int *)(param_1 + 0x15acb8) != 0) {
        FUN_005723d0(0x02CFD8B8,1);
      }
    }
    iVar1 = 0;
    iVar3 = param_1;
    if (0 < *(int *)(param_1 + 0x15acc8)) {
      do {
        FUN_004f5610(*(int *)(iVar3 + 0x15accc) + 0x21c);
        if (*(int *)(*(int *)(iVar3 + 0x15accc) + 0x1b0) != 0) {
          FUN_004ca940(*(int *)(iVar3 + 0x15accc));
        }
        FUN_0053adf0(param_1,iVar1,1);
        FUN_00476070(&DAT_0203b37c,param_2,0);
        iVar1 = iVar1 + 1;
        FUN_0053af20(param_1);
        iVar3 = iVar3 + 4;
      } while (iVar1 < *(int *)(param_1 + 0x15acc8));
    }
  }
  else if ((DAT_00603b38 != 0) && (iVar1 = 0, iVar3 = param_1, 0 < *(int *)(param_1 + 0x15acc8))) {
    do {
      FUN_004f5610(*(int *)(iVar3 + 0x15accc) + 0x21c);
      if (*(int *)(*(int *)(iVar3 + 0x15accc) + 0x1b0) != 0) {
        FUN_004ca940(*(int *)(iVar3 + 0x15accc));
      }
      FUN_0053adf0(param_1,iVar1,0);
      FUN_00476070(&DAT_0203b37c,param_2,0);
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 1;
      FUN_0053af20(param_1);
    } while (iVar1 < *(int *)(param_1 + 0x15acc8));
  }
  return;
}
