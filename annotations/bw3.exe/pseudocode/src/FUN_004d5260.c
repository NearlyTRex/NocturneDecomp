// Name: FUN_004d5260
// Address: 004d5260
// Address Range: [[004d5260, 004d52d7]]
// Convention: unknown
// Signature: void FUN_004d5260(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void FUN_004d5260(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0040c840(param_4,DAT_007e2cec);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"@@IMPCT-KICK1.WAV" + 2);
    FUN_004ce9c0(0x01D22E44,param_1 + 0x20,0,4,*(uint *)(iVar1 + 0x27a0));
    return;
  }
  if (param_4 == 0) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"IMPCT-ROCK-X.WAV");
  return;
}
