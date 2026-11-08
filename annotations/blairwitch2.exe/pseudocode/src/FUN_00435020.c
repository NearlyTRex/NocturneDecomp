// Name: FUN_00435020
// Address: 00435020
// Address Range: [[00435020, 0043505b]]
// Convention: unknown
// Signature: uint FUN_00435020(int param_1)

#include "nocturne.h"

uint FUN_00435020(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x18) <= *(int *)(param_1 + 0x1c)) {
    uVar1 = FUN_00435300(param_1);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  return (uint)*(byte *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c));
}
