// Name: FUN_004b1040
// Address: 004b1040
// Address Range: [[004b1040, 004b10ac]]
// Convention: unknown
// Signature: void FUN_004b1040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

#include "nocturne.h"

void FUN_004b1040(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8)

{
  byte local_1010 [4096];
  
  FUN_005a2898(local_1010,param_7,param_8);
  FUN_004b0fa0(param_1,param_2,param_3,param_4,param_5,param_6,local_1010);
  return;
}
