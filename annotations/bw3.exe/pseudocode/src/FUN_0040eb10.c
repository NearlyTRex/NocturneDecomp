// Name: FUN_0040eb10
// Address: 0040eb10
// Address Range: [[0040eb10, 0040eb3a]]
// Convention: unknown
// Signature: void FUN_0040eb10(int param_1)

#include "nocturne.h"

void FUN_0040eb10(int param_1)

{
  uint uVar1;
  
  FUN_00408890(param_1);
  uVar1 = *(uint *)(0x01D81080 + 0x1008);
  *(uint *)(param_1 + 0xf8) = 0;
  *(uint *)(param_1 + 0xfc) = uVar1;
  return;
}
