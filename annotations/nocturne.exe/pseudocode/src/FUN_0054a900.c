// Name: FUN_0054a900
// Address: 0054a900
// Address Range: [[0054a900, 0054a91b]]
// Convention: unknown
// Signature: void FUN_0054a900(int param_1,int param_2)

#include "nocturne.h"

void FUN_0054a900(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x854)) {
    return;
  }
  *(uint *)(param_1 + 0x854) = 0;
  return;
}
