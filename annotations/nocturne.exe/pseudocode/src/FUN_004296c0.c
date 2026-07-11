// Name: FUN_004296c0
// Address: 004296c0
// Address Range: [[004296c0, 00429728]]
// Convention: unknown
// Signature: void FUN_004296c0(int param_1)

#include "nocturne.h"

void FUN_004296c0(int param_1)

{
  uint *puVar1;
  byte auStack_1c [24];
  
  if (*(char *)(param_1 + 0x23b0) != '\0') {
    puVar1 = (uint *)FUN_0051ef40(param_1 + 0x150,auStack_1c);
    if ((uint *)(param_1 + 0x25f0) != puVar1) {
      *(uint *)(param_1 + 0x25f0) = *puVar1;
      *(uint *)(param_1 + 0x25f4) = puVar1[1];
      *(uint *)(param_1 + 0x25f8) = puVar1[2];
    }
    if ((uint *)(param_1 + 0x25fc) != puVar1 + 3) {
      *(uint *)(param_1 + 0x25fc) = puVar1[3];
      *(uint *)(param_1 + 0x2600) = puVar1[4];
      *(uint *)(param_1 + 0x2604) = puVar1[5];
      return;
    }
  }
  return;
}
