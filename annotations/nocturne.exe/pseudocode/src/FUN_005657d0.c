// Name: FUN_005657d0
// Address: 005657d0
// Address Range: [[005657d0, 00565813]]
// Convention: unknown
// Signature: undefined4 FUN_005657d0(int param_1,int *param_2)

#include "nocturne.h"

uint FUN_005657d0(int param_1,int *param_2)

{
  if ((param_1 <= param_2[1]) && (*(int *)(param_2[2] + 8) - *param_2 <= param_1)) {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) & 0xef;
    *param_2 = *param_2 + param_1;
    param_2[1] = param_2[1] - param_1;
    return 0;
  }
  return 1;
}
