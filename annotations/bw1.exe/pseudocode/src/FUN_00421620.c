// Name: FUN_00421620
// Address: 00421620
// Address Range: [[00421620, 00421666]]
// Convention: unknown
// Signature: undefined4 FUN_00421620(int param_1)

#include "nocturne.h"

uint FUN_00421620(int param_1)

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
