// Name: FUN_00412110
// Address: 00412110
// Address Range: [[00412110, 00412157]]
// Convention: unknown
// Signature: void FUN_00412110(int param_1)

#include "nocturne.h"

void FUN_00412110(int param_1)

{
  FUN_004a0520(param_1);
  FUN_0040b5f0(param_1 + 0xc1d0,"@speed" + 1);
  FUN_0040b7f0(param_1 + 0x158,"modelName");
  FUN_0040b870(param_1 + 0x158,"motion state");
  return;
}
