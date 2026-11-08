// Name: FUN_00537c30
// Address: 00537c30
// Address Range: [[00537c30, 00537ca0]]
// Convention: unknown
// Signature: void FUN_00537c30(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

void FUN_00537c30(uint param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6)

{
  uint uVar1;
  
  FUN_00537550(param_1);
  FUN_005375c0(param_1,param_2);
  uVar1 = FUN_0043b2e0(param_1,0,param_4 * param_3);
  FUN_00537db0(param_1,uVar1,param_3,param_4,param_5,param_3);
  FUN_005c09f0(uVar1);
  if (param_6 == 0) {
    return;
  }
  FUN_005380b0(param_1);
  return;
}
