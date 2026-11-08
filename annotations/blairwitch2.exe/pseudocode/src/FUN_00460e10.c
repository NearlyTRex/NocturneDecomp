// Name: FUN_00460e10
// Address: 00460e10
// Address Range: [[00460e10, 00460e2b]]
// Convention: unknown
// Signature: int FUN_00460e10(int param_1)

#include "nocturne.h"

int FUN_00460e10(int param_1)

{
  *(uint *)(param_1 + 0x10c) = 0;
  FUN_00460f90(param_1);
  return param_1;
}
