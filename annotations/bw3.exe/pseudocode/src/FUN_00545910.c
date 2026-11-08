// Name: FUN_00545910
// Address: 00545910
// Address Range: [[00545910, 005459a1]]
// Convention: unknown
// Signature: void FUN_00545910(int param_1)

#include "nocturne.h"

void FUN_00545910(int param_1)

{
  FUN_00489120(param_1);
  FUN_0040b830(param_1 + 0xcdcc,"@speed" + 1);
  FUN_0040ba30(param_1 + 0x158,"modelName");
  FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  FUN_0040bab0(param_1 + 0x158,"motion state");
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040b8b0(param_1 + 0xd074,"lightUpEyes");
  FUN_0040b8b0(param_1 + 0xd0e0,"scaredByLight");
  return;
}
