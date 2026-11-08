// Name: FUN_00592c90
// Address: 00592c90
// Address Range: [[00592c90, 00592ca9]]
// Convention: unknown
// Signature: void FUN_00592c90(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_00592c90(uint param_1,int param_2)

{
  *(uint *)(param_2 + 4) = 0;
  FUN_004a0f00(param_1,param_2);
  return;
}
