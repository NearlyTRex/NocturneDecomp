// Name: FUN_0051b700
// Address: 0051b700
// Address Range: [[0051b700, 0051b730]]
// Convention: unknown
// Signature: void FUN_0051b700(int param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_0051b700(int param_1,uint *param_2)

{
  *(uint *)(param_1 + 0x1120) = *param_2;
  *(uint *)(param_1 + 0x1124) = param_2[1];
  *(uint *)(param_1 + 0x1128) = param_2[2];
  *(uint *)(param_1 + 0x112c) = param_2[3];
  *(uint *)(param_1 + 0x1014) = 1;
  return;
}
