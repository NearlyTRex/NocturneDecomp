// Name: FUN_005558e0
// Address: 005558e0
// Address Range: [[005558e0, 005558ff]]
// Convention: unknown
// Signature: int FUN_005558e0(int param_1,int param_2)

#include "nocturne.h"

int FUN_005558e0(int param_1,int param_2)

{
  return (param_2 << 3) / (*(int *)(param_1 + 0x108) * *(int *)(param_1 + 0x104));
}
