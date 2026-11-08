// Name: FUN_00415740
// Address: 00415740
// Address Range: [[00415740, 004157aa]]
// Convention: unknown
// Signature: void FUN_00415740(int param_1,int param_2)

#include "nocturne.h"

void FUN_00415740(int param_1,int param_2)

{
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  *(uint *)(param_1 + 0xf2c) = 0;
  FUN_00416970(param_1);
  if (param_2 == 0) {
    *(uint *)(param_1 + 0xcbc) = 0x41200000;
    return;
  }
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0x4116cbe4;
  FUN_0041d790(param_1 + 0xcd0,param_2,&uStack_10);
  *(uint *)(param_1 + 0xcbc) = 0x41200000;
  return;
}
