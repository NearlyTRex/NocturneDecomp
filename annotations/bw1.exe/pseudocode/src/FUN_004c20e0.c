// Name: FUN_004c20e0
// Address: 004c20e0
// Address Range: [[004c20e0, 004c2144]]
// Convention: unknown
// Signature: void FUN_004c20e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

void FUN_004c20e0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7)

{
  byte auStack_1010 [4096];
  
  FUN_005bfb18(auStack_1010,param_6,param_7);
  FUN_004c2060(param_1,param_2,param_3,param_4,param_5,auStack_1010);
  return;
}
