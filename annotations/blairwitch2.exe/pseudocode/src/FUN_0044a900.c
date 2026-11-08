// Name: FUN_0044a900
// Address: 0044a900
// Address Range: [[0044a900, 0044a92c]]
// Convention: unknown
// Signature: void FUN_0044a900(int param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_0044a900(int param_1,int param_2,int param_3)

{
  *(int *)(*(int *)(&DAT_01c2a38c + param_2 * 4) + param_1 * 4) = param_3 * 0x10101;
  return;
}
