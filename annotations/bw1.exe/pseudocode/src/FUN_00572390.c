// Name: FUN_00572390
// Address: 00572390
// Address Range: [[00572390, 005723d4]]
// Convention: unknown
// Signature: double FUN_00572390(int param_1)

#include "nocturne.h"

double FUN_00572390(int param_1)

{
  if (0 < *(int *)(param_1 + 0x10c)) {
    return (double)*(int *)(param_1 + 0x110) / (double)*(int *)(param_1 + 0x10c);
  }
  return 0.0;
}
