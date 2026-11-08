// Name: FUN_005a35f0
// Address: 005a35f0
// Address Range: [[005a35f0, 005a35ff]]
// Convention: unknown
// Signature: void FUN_005a35f0(undefined4 param_1)

#include "nocturne.h"

void FUN_005a35f0(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_005a35c0();
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_1;
  }
  return;
}
