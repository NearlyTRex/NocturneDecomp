// Name: FUN_0044ed50
// Address: 0044ed50
// Address Range: [[0044ed50, 0044ed7c]]
// Convention: unknown
// Signature: void FUN_0044ed50(int param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_0044ed50(int param_1,int param_2,int param_3)

{
  *(int *)(*(int *)(&DAT_01bd2fa0 + param_2 * 4) + param_1 * 4) = param_3 * 0x10101;
  return;
}
