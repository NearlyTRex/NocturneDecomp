// Name: FUN_004f6ed0
// Address: 004f6ed0
// Address Range: [[004f6ed0, 004f6f00]]
// Convention: unknown
// Signature: void FUN_004f6ed0(int param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_004f6ed0(int param_1,uint *param_2)

{
  *(uint *)(param_1 + 0x1444) = *param_2;
  *(uint *)(param_1 + 0x1448) = param_2[1];
  *(uint *)(param_1 + 0x144c) = param_2[2];
  *(uint *)(param_1 + 0x1450) = param_2[3];
  *(uint *)(param_1 + 0x1014) = 1;
  return;
}
