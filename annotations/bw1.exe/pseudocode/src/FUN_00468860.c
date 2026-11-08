// Name: FUN_00468860
// Address: 00468860
// Address Range: [[00468860, 0046887f]]
// Convention: unknown
// Signature: int FUN_00468860(int param_1)

#include "nocturne.h"

int FUN_00468860(int param_1)

{
  *(byte *)(param_1 + 0x78) = 0;
  *(uint *)(param_1 + 0x178) = 0;
  FUN_00468880(param_1);
  return param_1;
}
