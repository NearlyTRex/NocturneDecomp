// Name: crt_unknown.c_FUN_005c4f0a
// Address: 005c4f0a
// Address Range: [[005c4f0a, 005c4f0e]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c4f0a(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_005c4f0a(uint param_1,uint param_2,int param_3,int *param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = FUN_005cccc0();
  uVar1 = FUN_005ccccc(param_1,param_2,param_3,param_4,param_5,0x46,uVar1);
  FUN_005ca82a(uVar1,param_3 + *param_4);
  return;
}
