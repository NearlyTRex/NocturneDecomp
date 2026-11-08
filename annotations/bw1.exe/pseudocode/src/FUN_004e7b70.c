// Name: FUN_004e7b70
// Address: 004e7b70
// Address Range: [[004e7b70, 004e7c57]]
// Convention: unknown
// Signature: void FUN_004e7b70(int *param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_004e7b70(int *param_1,int param_2,int param_3)

{
  FUN_00596530(param_1[10],*(ushort *)(param_1[9] + 2 + (param_3 * *param_1 + param_2) * 4));
  (&DAT_0062902c)[param_1[0x14] * 0xc] = 0xf80000;
  *(uint *)(&DAT_00629030 + param_1[0x14] * 0x30) = 0xf80000;
  (&DAT_0062902c)[param_1[0x13] * 0xc] = 0x80000;
  *(uint *)(&DAT_00629030 + param_1[0x13] * 0x30) = 0xf80000;
  (&DAT_0062902c)[param_1[0x16] * 0xc] = 0x80000;
  *(uint *)(&DAT_00629030 + param_1[0x16] * 0x30) = 0x80000;
  (&DAT_0062902c)[param_1[0x15] * 0xc] = 0xf80000;
  *(uint *)(&DAT_00629030 + param_1[0x15] * 0x30) = 0x80000;
  return;
}
