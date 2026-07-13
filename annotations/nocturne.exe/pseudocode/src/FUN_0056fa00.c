// Name: FUN_0056fa00
// Address: 0056fa00
// Address Range: [[0056fa00, 0056fa32]]
// Convention: unknown
// Signature: void FUN_0056fa00(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_0056fa00(uint param_1,uint param_2,int param_3,int *param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = FUN_00571bd0();
  uVar1 = FUN_00571bdc(param_1,param_2,param_3,param_4,param_5,0x46,uVar1);
  FUN_0056f986(uVar1,param_3 + *param_4);
  return;
}
