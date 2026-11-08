// Name: FUN_004a0810
// Address: 004a0810
// Address Range: [[004a0810, 004a08a7]]
// Convention: unknown
// Signature: undefined4 FUN_004a0810(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a0810(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  float10 fVar2;
  byte local_20 [12];
  int iStack_14;
  
  iVar1 = *(int *)(param_1 + 0xc1e8);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x154) + 0x104))(iVar1,param_2,param_3,param_4,local_20);
    if (0.0 < *(float *)(param_4 + 4)) {
      fVar2 = (float10)*(float *)(param_4 + 4) * (float10)_DAT_005dcb52 * (float10)_DAT_005dcb5a;
      FUN_005c03a0(0);
      iStack_14 = (int)ROUND(fVar2);
      FUN_004e6060(0x01CD0E3C,local_20,0,iStack_14);
      return 1;
    }
  }
  return 0;
}
