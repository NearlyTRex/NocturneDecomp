// Name: FUN_0058a2c0
// Address: 0058a2c0
// Address Range: [[0058a2c0, 0058a2d6]]
// Convention: unknown
// Signature: bool FUN_0058a2c0(int param_1)

#include "nocturne.h"

bool FUN_0058a2c0(int param_1)

{
  return (*(uint *)(param_1 + 0x45c) & 0x7fffffff) == 0;
}
