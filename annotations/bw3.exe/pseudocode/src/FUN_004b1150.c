// Name: FUN_004b1150
// Address: 004b1150
// Address Range: [[004b1150, 004b11ac]]
// Convention: unknown
// Signature: void FUN_004b1150(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void FUN_004b1150(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  byte auStack_1010 [4096];
  
  FUN_005a2898(auStack_1010,param_5,param_6);
  FUN_004b10b0(param_1,param_2,param_3,param_4,auStack_1010);
  return;
}
