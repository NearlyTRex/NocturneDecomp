// Name: FUN_00424840
// Address: 00424840
// Address Range: [[00424840, 004248c7]]
// Convention: unknown
// Signature: void FUN_00424840(int param_1)

#include "nocturne.h"

void FUN_00424840(int param_1)

{
  FUN_004a0520(param_1);
  if (0x00000004 < 2) {
    FUN_0040b5f0(param_1 + 0xc1d0,"@speed" + 1);
  }
  FUN_0040b7f0(param_1 + 0x158,"modelName");
  if ((1 < 0x00000004) && (0x00000004 < 4)) {
    FUN_0040b5f0(param_1 + 0xc1e0,"guardDistance");
  }
  if (0x00000004 < 3) {
    return;
  }
  FUN_0040b870(param_1 + 0x158,"state");
  return;
}
