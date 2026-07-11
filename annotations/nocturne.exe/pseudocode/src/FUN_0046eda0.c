// Name: FUN_0046eda0
// Address: 0046eda0
// Address Range: [[0046eda0, 0046edb6]]
// Convention: unknown
// Signature: bool FUN_0046eda0(int param_1)

#include "nocturne.h"

bool FUN_0046eda0(int param_1)

{
  return (*(uint *)(param_1 + 0x570) & 0x7fffffff) == 0;
}
