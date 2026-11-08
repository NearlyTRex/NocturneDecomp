// Name: FUN_004a9550
// Address: 004a9550
// Address Range: [[004a9550, 004a95ac]]
// Convention: unknown
// Signature: void FUN_004a9550(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void FUN_004a9550(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  byte auStack_1010 [4096];
  
  FUN_005b7768(auStack_1010,param_5,param_6);
  FUN_004a94b0(param_1,param_2,param_3,param_4,auStack_1010);
  return;
}
