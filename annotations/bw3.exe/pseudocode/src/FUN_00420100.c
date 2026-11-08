// Name: FUN_00420100
// Address: 00420100
// Address Range: [[00420100, 00420156]]
// Convention: unknown
// Signature: void FUN_00420100(int param_1,int param_2)

#include "nocturne.h"

void FUN_00420100(int param_1,int param_2)

{
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  *(uint *)(param_1 + 0x318) = 0;
  FUN_0041f1e0(param_1);
  if (param_2 == 0) {
    return;
  }
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0x4116cbe4;
  FUN_0041d790(param_1 + 0x394,param_2,&uStack_10);
  return;
}
