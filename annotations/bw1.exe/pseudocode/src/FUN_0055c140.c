// Name: FUN_0055c140
// Address: 0055c140
// Address Range: [[0055c140, 0055c1af]]
// Convention: unknown
// Signature: void FUN_0055c140(int param_1)

#include "nocturne.h"

void FUN_0055c140(int param_1)

{
  FUN_0055c100(param_1);
  FUN_005bfb70(param_1,0,0x1a4);
  *(uint *)(param_1 + 0x144) = 0x41e00000;
  *(uint *)(param_1 + 0x180) = 0xc3960000;
  *(uint *)(param_1 + 0x184) = 0;
  *(uint *)(param_1 + 400) = 0x43960000;
  *(uint *)(param_1 + 0x140) = 0;
  *(uint *)(param_1 + 0x17c) = *(uint *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x18c) = *(uint *)(param_1 + 400);
  *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 400);
  return;
}
