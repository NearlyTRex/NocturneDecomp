// Name: FUN_00476ff0
// Address: 00476ff0
// Address Range: [[00476ff0, 0047705c]]
// Convention: unknown
// Signature: void FUN_00476ff0(int param_1)

#include "nocturne.h"

void FUN_00476ff0(int param_1)

{
  FUN_004a0520(param_1);
  FUN_0040b5f0(param_1 + 0xc1d0,"?speed" + 1);
  FUN_0040b7f0(param_1 + 0x158,"modelName");
  if (0x00000002 < 2) {
    FUN_0040b5f0(param_1 + 0xc1e0,"guardDistance");
  }
  FUN_0040b870(param_1 + 0x158,"motion state");
  return;
}
