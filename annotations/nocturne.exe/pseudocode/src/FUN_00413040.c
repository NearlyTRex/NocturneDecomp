// Name: FUN_00413040
// Address: 00413040
// Address Range: [[00413040, 0041324c]]
// Convention: unknown
// Signature: void FUN_00413040(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00413040(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte local_3c [12];
  byte local_30 [12];
  byte local_24 [20];
  
  FUN_00527230(*(uint *)(param_1 + 0xbd64));
  FUN_00527230(*(uint *)(param_1 + 0xbd5c));
  if (*(int *)(param_2 + 0x28) == 7) {
    iVar4 = 0;
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_00578a87;
    FUN_0040a240(param_1,local_30,param_2 + 0x1c);
    do {
      iVar4 = iVar4 + 1;
      FUN_0048ae90(0x01C08D04,local_30,0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    uVar2 = FUN_0051d380(param_1 + 0x150,local_3c,0);
    FUN_0040a240(param_1,local_24,uVar2);
    FUN_00427730(param_1,local_24,0,0,0x41200000,0);
  }
  FUN_00412de0(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  iVar4 = param_1 + 0x150;
  *(float *)(param_1 + 0x2434) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar3 = FUN_004e1660(iVar4);
    if ((*(int *)(iVar3 + 0x24) != 7) && (*(int *)(iVar3 + 0x24) != 8)) {
      FUN_004e16b0(iVar4,7,1);
      FUN_00527230(*(uint *)(param_1 + 0xbd60));
      uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                        (param_1,"@batman-die.wav" + 1);
      *(uint *)(param_1 + 0xbd60) = uVar2;
      FUN_00479f70(param_1,param_2);
      return;
    }
  }
  else {
    iVar3 = FUN_0040de00(0,2);
    if (iVar3 == 0) {
      FUN_004e16b0(iVar4,4,1);
    }
    if (iVar3 == 1) {
      FUN_004e16b0(param_1 + 0x150,5,1);
    }
    if (iVar3 == 2) {
      FUN_004e16b0(param_1 + 0x150,6,1);
    }
    iVar4 = FUN_00526c50(*(uint *)(param_1 + 0xbd60));
    if (iVar4 == 0) {
      uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"batman-hurt?.wav");
      *(uint *)(param_1 + 0xbd60) = uVar2;
      FUN_00479f70(param_1,param_2);
      return;
    }
  }
  FUN_00479f70(param_1,param_2);
  return;
}
