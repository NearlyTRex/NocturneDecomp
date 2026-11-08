// Name: FUN_005168e0
// Address: 005168e0
// Address Range: [[005168e0, 00516950]]
// Convention: unknown
// Signature: void FUN_005168e0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

void FUN_005168e0(uint param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6)

{
  uint uVar1;
  
  FUN_00516200(param_1);
  FUN_00516270(param_1,param_2);
  uVar1 = FUN_0042c520(param_1,0,param_4 * param_3);
  FUN_00516a60(param_1,uVar1,param_3,param_4,param_5,param_3);
  FUN_005b86a0(uVar1);
  if (param_6 == 0) {
    return;
  }
  FUN_00516d60(param_1);
  return;
}
