// Name: FUN_00439120
// Address: 00439120
// Address Range: [[00439120, 004391a4]]
// Convention: unknown
// Signature: undefined4 FUN_00439120(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

uint FUN_00439120(int *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  byte local_94 [72];
  byte local_4c [60];
  
  FUN_00564f32(local_94,0,param_2,*param_3);
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_4c,param_3,param_4,param_5,param_6);
  FUN_00564fd8(local_94,0);
  return uVar1;
}
