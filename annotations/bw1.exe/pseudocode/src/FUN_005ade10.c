// Name: FUN_005ade10
// Address: 005ade10
// Address Range: [[005ade10, 005ade26]]
// Convention: unknown
// Signature: bool FUN_005ade10(int param_1)

#include "nocturne.h"

bool FUN_005ade10(int param_1)

{
  return (*(uint *)(param_1 + 0x300) & 0x7fffffff) == 0;
}
