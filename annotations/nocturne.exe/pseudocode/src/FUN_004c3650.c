// Name: FUN_004c3650
// Address: 004c3650
// Address Range: [[004c3650, 004c36bb]]
// Convention: unknown
// Signature: void FUN_004c3650(int param_1)

#include "nocturne.h"

void FUN_004c3650(int param_1)

{
  byte local_104 [256];
  
  FUN_0040d2d0(param_1);
  FUN_0040ca00(param_1 + 0x150,"@modelName" + 1);
  FUN_0040c900(param_1 + 0x2cc,"keyMask");
  if (0x00000003 != 2) {
    return;
  }
  FUN_0040c7f0(local_104,"descriptiveName");
  return;
}
