// Name: FUN_00523100
// Address: 00523100
// Address Range: [[00523100, 00523139]]
// Convention: unknown
// Signature: void FUN_00523100(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00523100(int param_1,int param_2,uint param_3,uint param_4)

{
  param_1 = param_1 + param_2 * 0x608;
  FUN_00522170(param_1);
  FUN_005224f0(param_1,param_3,param_4);
  return;
}
