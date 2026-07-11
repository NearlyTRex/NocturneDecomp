// Name: FUN_00524410
// Address: 00524410
// Address Range: [[00524410, 005244aa]]
// Convention: unknown
// Signature: void FUN_00524410(int param_1)

#include "nocturne.h"

void FUN_00524410(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 1) {
    *(double *)(param_1 + 4) = (double)**(float **)(param_1 + 0x1c);
    *(double *)(param_1 + 0xc) = (double)*(float *)(*(int *)(param_1 + 0x1c) + 4);
    *(double *)(param_1 + 0x14) = (double)*(float *)(*(int *)(param_1 + 0x1c) + 8);
  }
  else if (*(int *)(param_1 + 0x20) == 2) {
    *(ulonglong *)(param_1 + 4) = **(ulonglong **)(param_1 + 0x1c);
    *(ulonglong *)(param_1 + 0xc) = *(ulonglong *)(*(int *)(param_1 + 0x1c) + 8);
    *(uint *)(param_1 + 0x14) = *(uint *)(*(int *)(param_1 + 0x1c) + 0x10);
    *(uint *)(param_1 + 0x18) = *(uint *)(*(int *)(param_1 + 0x1c) + 0x14);
  }
  if (*(int *)(param_1 + 0x40) != 1) {
    if (*(int *)(param_1 + 0x40) != 2) {
      return;
    }
    *(ulonglong *)(param_1 + 0x24) = **(ulonglong **)(param_1 + 0x3c);
    *(ulonglong *)(param_1 + 0x2c) = *(ulonglong *)(*(int *)(param_1 + 0x3c) + 8);
    *(uint *)(param_1 + 0x34) = *(uint *)(*(int *)(param_1 + 0x3c) + 0x10);
    *(uint *)(param_1 + 0x38) = *(uint *)(*(int *)(param_1 + 0x3c) + 0x14);
    return;
  }
  *(double *)(param_1 + 0x24) = (double)**(float **)(param_1 + 0x3c);
  *(double *)(param_1 + 0x2c) = (double)*(float *)(*(int *)(param_1 + 0x3c) + 4);
  *(double *)(param_1 + 0x34) = (double)*(float *)(*(int *)(param_1 + 0x3c) + 8);
  return;
}
