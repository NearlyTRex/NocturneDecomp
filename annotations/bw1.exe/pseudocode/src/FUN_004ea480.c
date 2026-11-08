// Name: FUN_004ea480
// Address: 004ea480
// Address Range: [[004ea480, 004ea4ff]]
// Convention: unknown
// Signature: void FUN_004ea480(int param_1)

#include "nocturne.h"

void FUN_004ea480(int param_1)

{
  byte auStack_104 [256];
  
  FUN_0040c040(param_1);
  FUN_0040b770(param_1 + 0x158,"modelName");
  FUN_0040b670(param_1 + 0x2d4,"useCount");
  FUN_0040b5f0(param_1 + 0x2d8,"hpRestored");
  if (0x00000003 != 2) {
    return;
  }
  FUN_0040b560(auStack_104,"descriptiveName");
  return;
}
