// Name: FUN_00422c60
// Address: 00422c60
// Address Range: [[00422c60, 00422c6e]]
// Convention: unknown
// Signature: void FUN_00422c60(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00422c60(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x318) = param_2;
  return;
}
