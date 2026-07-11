// Name: FUN_0043ae00
// Address: 0043ae00
// Address Range: [[0043ae00, 0043ae3a]]
// Convention: unknown
// Signature: void FUN_0043ae00(int param_1)

#include "nocturne.h"

void FUN_0043ae00(int param_1)

{
  FUN_00563cc0(param_1 + 4,0,4000);
  *(uint *)(param_1 + 0xfa4) = 0;
  *(uint *)(param_1 + 0xfa8) = 0;
  FUN_005657c0("console.txt");
  return;
}
