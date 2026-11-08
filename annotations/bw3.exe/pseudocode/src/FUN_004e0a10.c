// Name: FUN_004e0a10
// Address: 004e0a10
// Address Range: [[004e0a10, 004e0a23]]
// Convention: unknown
// Signature: bool FUN_004e0a10(int param_1)

#include "nocturne.h"

bool FUN_004e0a10(int param_1)

{
  return *(int *)(param_1 + 0x810) != 0;
}
