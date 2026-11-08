// Name: FUN_005c0870
// Address: 005c0870
// Address Range: [[005c0870, 005c087f]]
// Convention: unknown
// Signature: void FUN_005c0870(undefined4 param_1)

#include "nocturne.h"

void FUN_005c0870(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_005c0840();
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_1;
  }
  return;
}
