// Name: FUN_0041cd00
// Address: 0041cd00
// Address Range: [[0041cd00, 0041cd56]]
// Convention: unknown
// Signature: void FUN_0041cd00(int param_1,int param_2)

#include "nocturne.h"

void FUN_0041cd00(int param_1,int param_2)

{
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  *(uint *)(param_1 + 0x474) = 0;
  FUN_0041bf10(param_1);
  if (param_2 == 0) {
    return;
  }
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0x4116cbe4;
  FUN_005b4610(param_1 + 0x4f0,param_2,&uStack_10);
  return;
}
