// Name: FUN_004b0d30
// Address: 004b0d30
// Address Range: [[004b0d30, 004b0d94]]
// Convention: unknown
// Signature: void FUN_004b0d30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

void FUN_004b0d30(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7)

{
  byte auStack_1010 [4096];
  
  FUN_005a2898(auStack_1010,param_6,param_7);
  FUN_004b0cb0(param_1,param_2,param_3,param_4,param_5,auStack_1010);
  return;
}
