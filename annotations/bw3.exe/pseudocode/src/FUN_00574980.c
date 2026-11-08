// Name: FUN_00574980
// Address: 00574980
// Address Range: [[00574980, 0057499a]]
// Convention: unknown
// Signature: bool FUN_00574980(int param_1)

#include "nocturne.h"

bool FUN_00574980(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return false;
  }
  return (*(byte *)(*(int *)(param_1 + 4) + 0xc) & 0x20) == 0;
}
