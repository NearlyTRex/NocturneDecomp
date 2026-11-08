// Name: FUN_00506670
// Address: 00506670
// Address Range: [[00506670, 0050668f]]
// Convention: unknown
// Signature: undefined4 FUN_00506670(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00506670(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x2d4) != 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x2d4) = param_2;
  return 1;
}
