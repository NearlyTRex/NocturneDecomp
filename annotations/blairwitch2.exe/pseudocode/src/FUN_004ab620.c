// Name: FUN_004ab620
// Address: 004ab620
// Address Range: [[004ab620, 004ab62e]]
// Convention: unknown
// Signature: void FUN_004ab620(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004ab620(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x4204) = param_2;
  return;
}
