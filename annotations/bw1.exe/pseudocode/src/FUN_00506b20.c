// Name: FUN_00506b20
// Address: 00506b20
// Address Range: [[00506b20, 00506b58]]
// Convention: unknown
// Signature: void FUN_00506b20(int param_1)

#include "nocturne.h"

void FUN_00506b20(int param_1)

{
  FUN_00408850(param_1);
  FUN_00447db0(param_1 + 0x1a4,param_1 + 0x158);
  FUN_005069f0(param_1);
  *(uint *)(param_1 + 0x17c) = 0;
  return;
}
