// Name: FUN_00523000
// Address: 00523000
// Address Range: [[00523000, 00523055]]
// Convention: unknown
// Signature: void FUN_00523000(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

#include "nocturne.h"

void FUN_00523000(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8)

{
  param_1 = param_1 + param_2 * 0x608;
  FUN_00522170(param_1);
  FUN_005221d0(param_1,param_3,param_4,param_5,param_6,0x3c,param_7,param_8);
  return;
}
