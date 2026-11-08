// Name: FUN_0041b6b0
// Address: 0041b6b0
// Address Range: [[0041b6b0, 0041b6f6]]
// Convention: unknown
// Signature: undefined4 FUN_0041b6b0(int param_1)

#include "nocturne.h"

uint FUN_0041b6b0(int param_1)

{
  uint uVar1;
  
  if ((*(float *)(param_1 + 0xc) <= *(float *)(param_1 + 0x10)) ||
     (*(float *)(param_1 + 0xc) <= *(float *)(param_1 + 0x14))) {
    if (*(float *)(param_1 + 0x10) <= *(float *)(param_1 + 0x14)) {
      return *(uint *)(param_1 + 0x14);
    }
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc);
  }
  return uVar1;
}
