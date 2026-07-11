// Name: FUN_00484c90
// Address: 00484c90
// Address Range: [[00484c90, 00484caf]]
// Convention: unknown
// Signature: undefined4 FUN_00484c90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

uint FUN_00484c90(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x44) = param_4;
  uVar1 = FUN_004ef040(param_1,param_2,param_3);
  return uVar1;
}
