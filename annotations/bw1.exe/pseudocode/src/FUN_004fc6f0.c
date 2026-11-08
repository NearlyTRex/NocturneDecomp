// Name: FUN_004fc6f0
// Address: 004fc6f0
// Address Range: [[004fc6f0, 004fc75b]]
// Convention: unknown
// Signature: void FUN_004fc6f0(int param_1)

#include "nocturne.h"

void FUN_004fc6f0(int param_1)

{
  byte auStack_104 [256];
  
  FUN_0040c040(param_1);
  FUN_0040b770(param_1 + 0x158,"modelName");
  FUN_0040b670(param_1 + 0x2d4,"keyMask");
  if (0x00000003 != 2) {
    return;
  }
  FUN_0040b560(auStack_104,"descriptiveName");
  return;
}
