// Name: FUN_004881b0
// Address: 004881b0
// Address Range: [[004881b0, 00488247]]
// Convention: unknown
// Signature: undefined4 FUN_004881b0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004881b0(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  float10 fVar2;
  byte local_20 [12];
  int iStack_14;
  
  iVar1 = *(int *)(param_1 + 0x10a78);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x10c))(iVar1,param_2,param_3,param_4,local_20);
    if (0.0 < *(float *)(param_4 + 4)) {
      fVar2 = (float10)*(float *)(param_4 + 4) * (float10)_DAT_005d2db9 * (float10)_DAT_005d2dc1;
      FUN_005b7ff0(0);
      iStack_14 = (int)ROUND(fVar2);
      FUN_004c9850(0x01CB8284,local_20,0,iStack_14);
      return 1;
    }
  }
  return 0;
}
