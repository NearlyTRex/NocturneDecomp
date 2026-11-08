// Name: FUN_00555890
// Address: 00555890
// Address Range: [[00555890, 005558d4]]
// Convention: unknown
// Signature: double FUN_00555890(int param_1)

#include "nocturne.h"

double FUN_00555890(int param_1)

{
  if (0 < *(int *)(param_1 + 0x10c)) {
    return (double)*(int *)(param_1 + 0x110) / (double)*(int *)(param_1 + 0x10c);
  }
  return 0.0;
}
