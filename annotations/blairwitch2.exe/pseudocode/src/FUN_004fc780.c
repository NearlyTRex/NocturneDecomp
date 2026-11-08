// Name: FUN_004fc780
// Address: 004fc780
// Address Range: [[004fc780, 004fc7ab]]
// Convention: unknown
// Signature: void FUN_004fc780(int param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_004fc780(int param_1,uint *param_2)

{
  *(uint *)(param_1 + 0x111c) = *param_2;
  *(uint *)(param_1 + 0x1120) = param_2[1];
  *(uint *)(param_1 + 0x1124) = param_2[2];
  *(uint *)(param_1 + 0x1128) = param_2[3];
  return;
}
