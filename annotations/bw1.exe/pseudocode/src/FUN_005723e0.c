// Name: FUN_005723e0
// Address: 005723e0
// Address Range: [[005723e0, 005723ff]]
// Convention: unknown
// Signature: int FUN_005723e0(int param_1,int param_2)

#include "nocturne.h"

int FUN_005723e0(int param_1,int param_2)

{
  return (param_2 << 3) / (*(int *)(param_1 + 0x108) * *(int *)(param_1 + 0x104));
}
