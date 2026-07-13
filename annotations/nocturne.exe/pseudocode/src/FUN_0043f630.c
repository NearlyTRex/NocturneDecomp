// Name: FUN_0043f630
// Address: 0043f630
// Address Range: [[0043f630, 0043f63f]]
// Convention: unknown
// Signature: undefined4 FUN_0043f630(int param_1)

#include "nocturne.h"

uint FUN_0043f630(int param_1)

{
  uint uVar1;
  
  if (65000 < *(int *)(param_1 + 0x174)) {
    return 0;
  }
  uVar1 = FUN_0043f330(param_1);
  return uVar1;
}
