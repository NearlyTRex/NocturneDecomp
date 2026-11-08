// Name: FUN_004d1fe0
// Address: 004d1fe0
// Address Range: [[004d1fe0, 004d207e]]
// Convention: unknown
// Signature: void FUN_004d1fe0(int param_1)

#include "nocturne.h"

void FUN_004d1fe0(int param_1)

{
  byte auStack_104 [256];
  
  FUN_0040c280(param_1);
  FUN_0040b9b0(param_1 + 0x158," AmodelName" + 2);
  FUN_0040b8b0(param_1 + 0x2d4,"useCount");
  FUN_0040b830(param_1 + 0x2d8,"hpRestored");
  if (0x00000004 == 2) {
    FUN_0040b7a0(auStack_104,"descriptiveName");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b8b0(param_1 + 0x2e0,"automatic_use");
  return;
}
