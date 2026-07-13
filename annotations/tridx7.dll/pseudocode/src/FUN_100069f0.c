// Name: FUN_100069f0
// Address: 100069f0
// Address Range: [[100069f0, 100069fe]]
// Convention: unknown
// Signature: undefined4 FUN_100069f0(int *param_1)

#include "nocturne.h"

uint FUN_100069f0(int *param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  return *puVar1;
}
