// Name: FUN_004f1980
// Address: 004f1980
// Address Range: [[004f1980, 004f19a7]]
// Convention: unknown
// Signature: undefined4 FUN_004f1980(int param_1)

#include "nocturne.h"

uint FUN_004f1980(int param_1)

{
  if (*(int *)(param_1 + 0x1ffcc) == 0) {
    return 0;
  }
  FUN_005247c0(param_1 + 0x158,0x16,1);
  return 1;
}
