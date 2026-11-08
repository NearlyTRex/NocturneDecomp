// Name: FUN_004f2730
// Address: 004f2730
// Address Range: [[004f2730, 004f273e]]
// Convention: unknown
// Signature: void FUN_004f2730(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004f2730(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x1ffac) = param_2;
  return;
}
