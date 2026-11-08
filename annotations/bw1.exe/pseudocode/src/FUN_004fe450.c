// Name: FUN_004fe450
// Address: 004fe450
// Address Range: [[004fe450, 004fe4bc]]
// Convention: unknown
// Signature: void FUN_004fe450(int param_1)

#include "nocturne.h"

void FUN_004fe450(int param_1)

{
  FUN_004a0520(param_1);
  FUN_0040b5f0(param_1 + 0xc1d0,"speed");
  FUN_0040b7f0(param_1 + 0x158,"modelName");
  if (0x00000002 < 2) {
    FUN_0040b5f0(param_1 + 0xc1e0,"guardDistance");
  }
  FUN_0040b870(param_1 + 0x158,"motion state");
  return;
}
