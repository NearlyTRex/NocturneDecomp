// Name: FUN_0057bd80
// Address: 0057bd80
// Address Range: [[0057bd80, 0057bd9a]]
// Convention: unknown
// Signature: int FUN_0057bd80(int param_1)

#include "nocturne.h"

int FUN_0057bd80(int param_1)

{
  FUN_0057d050(param_1,0);
  *(uint *)(param_1 + 100) = 0;
  return param_1;
}
