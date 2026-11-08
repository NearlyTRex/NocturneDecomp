// Name: FUN_004dea10
// Address: 004dea10
// Address Range: [[004dea10, 004dea7b]]
// Convention: unknown
// Signature: void FUN_004dea10(int param_1)

#include "nocturne.h"

void FUN_004dea10(int param_1)

{
  byte auStack_104 [256];
  
  FUN_0040c280(param_1);
  FUN_0040b9b0(param_1 + 0x158,"@modelName" + 1);
  FUN_0040b8b0(param_1 + 0x2d4,"keyMask");
  if (0x00000003 != 2) {
    return;
  }
  FUN_0040b7a0(auStack_104,"descriptiveName");
  return;
}
