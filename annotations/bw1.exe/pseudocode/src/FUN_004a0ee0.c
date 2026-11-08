// Name: FUN_004a0ee0
// Address: 004a0ee0
// Address Range: [[004a0ee0, 004a0ef8]]
// Convention: unknown
// Signature: void FUN_004a0ee0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004a0ee0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xc1ec) = 0;
  *(uint *)(param_1 + 0xc260) = param_2;
  return;
}
