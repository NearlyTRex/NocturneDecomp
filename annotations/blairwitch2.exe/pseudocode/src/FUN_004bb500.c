// Name: FUN_004bb500
// Address: 004bb500
// Address Range: [[004bb500, 004bb54a]]
// Convention: unknown
// Signature: void FUN_004bb500(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

#include "nocturne.h"

void FUN_004bb500(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8)

{
  *(uint *)(param_1 + 0xaf8) = param_2;
  *(uint *)(param_1 + 0xafc) = param_3;
  *(uint *)(param_1 + 0xb00) = param_4;
  *(uint *)(param_1 + 0xb08) = param_5;
  *(uint *)(param_1 + 0xb0c) = param_6;
  *(uint *)(param_1 + 0xb10) = param_7;
  *(uint *)(param_1 + 0xb18) = param_8;
  return;
}
