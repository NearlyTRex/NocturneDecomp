// Name: FUN_00525bc0
// Address: 00525bc0
// Address Range: [[00525bc0, 00525c04]]
// Convention: unknown
// Signature: double FUN_00525bc0(int param_1)

#include "nocturne.h"

double FUN_00525bc0(int param_1)

{
  if (0 < *(int *)(param_1 + 0x10c)) {
    return (double)*(int *)(param_1 + 0x110) / (double)*(int *)(param_1 + 0x10c);
  }
  return 0.0;
}
