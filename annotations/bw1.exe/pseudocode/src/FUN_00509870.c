// Name: FUN_00509870
// Address: 00509870
// Address Range: [[00509870, 005098c3]]
// Convention: unknown
// Signature: void FUN_00509870(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00509870(int param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  FUN_0040aa60(param_1,param_2,param_3,param_4);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0xec))(param_1);
  *(uint *)(param_3 + 4) = uVar1;
  *(uint *)(param_3 + 0x2c) = *(uint *)(param_1 + 0x584);
  *(uint *)(param_3 + 0x28) = *(uint *)(param_1 + 0x59c);
  return;
}
