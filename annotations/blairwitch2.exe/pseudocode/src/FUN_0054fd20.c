// Name: FUN_0054fd20
// Address: 0054fd20
// Address Range: [[0054fd20, 0054fd64]]
// Convention: unknown
// Signature: double FUN_0054fd20(int param_1)

#include "nocturne.h"

double FUN_0054fd20(int param_1)

{
  if (0 < *(int *)(param_1 + 0x10c)) {
    return (double)*(int *)(param_1 + 0x110) / (double)*(int *)(param_1 + 0x10c);
  }
  return 0.0;
}
