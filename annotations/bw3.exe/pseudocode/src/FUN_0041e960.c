// Name: FUN_0041e960
// Address: 0041e960
// Address Range: [[0041e960, 0041e9a6]]
// Convention: unknown
// Signature: undefined4 FUN_0041e960(int param_1)

#include "nocturne.h"

uint FUN_0041e960(int param_1)

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
