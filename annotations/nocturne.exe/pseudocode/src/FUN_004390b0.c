// Name: FUN_004390b0
// Address: 004390b0
// Address Range: [[004390b0, 0043911b]]
// Convention: unknown
// Signature: undefined4 FUN_004390b0(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

#include "nocturne.h"

uint FUN_004390b0(int *param_1,uint param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  byte local_90 [72];
  byte local_48 [60];
  
  FUN_00564f32(local_90,0,param_2,*param_3);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,local_48,param_3,param_4);
  FUN_00564fd8(local_90,0);
  return uVar1;
}
