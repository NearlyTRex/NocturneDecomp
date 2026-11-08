// Name: FUN_004a8560
// Address: 004a8560
// Address Range: [[004a8560, 004a859a]]
// Convention: unknown
// Signature: void FUN_004a8560(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

void FUN_004a8560(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7)

{
  FUN_004a8850(param_1);
  *(uint *)(param_1 + 0x4208) = param_7;
  FUN_004a7d00(param_1,param_2,param_3,param_4,param_5);
  return;
}
