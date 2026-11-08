// Name: FUN_0058b470
// Address: 0058b470
// Address Range: [[0058b470, 0058b4e4]]
// Convention: unknown
// Signature: void FUN_0058b470(int *param_1,int param_2)

#include "nocturne.h"

void FUN_0058b470(int *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  if (param_2 == 1) {
    param_1[1] = 0x42200000;
  }
  else {
    param_1[1] = 0x40a00000;
  }
  iVar1 = FUN_0040cf60(0x41200000,0x41a00000);
  param_1[9] = 0;
  param_1[0xd] = 0x41200000;
  param_1[10] = 0;
  param_1[8] = iVar1;
  iVar1 = FUN_0040cf60(0x40000000,param_1[0xd]);
  param_1[0xb] = iVar1;
  return;
}
