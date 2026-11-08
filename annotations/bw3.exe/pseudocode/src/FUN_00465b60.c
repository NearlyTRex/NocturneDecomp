// Name: FUN_00465b60
// Address: 00465b60
// Address Range: [[00465b60, 00465b7b]]
// Convention: unknown
// Signature: int FUN_00465b60(int param_1)

#include "nocturne.h"

int FUN_00465b60(int param_1)

{
  *(uint *)(param_1 + 0x10c) = 0;
  FUN_00465ce0(param_1);
  return param_1;
}
