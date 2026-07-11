// Name: FUN_00456c00
// Address: 00456c00
// Address Range: [[00456c00, 00456c1b]]
// Convention: unknown
// Signature: int FUN_00456c00(int param_1)

#include "nocturne.h"

int FUN_00456c00(int param_1)

{
  *(uint *)(param_1 + 0x10c) = 0;
  FUN_00456d80(param_1);
  return param_1;
}
