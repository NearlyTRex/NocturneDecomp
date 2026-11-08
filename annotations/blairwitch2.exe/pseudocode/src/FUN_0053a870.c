// Name: FUN_0053a870
// Address: 0053a870
// Address Range: [[0053a870, 0053a8df]]
// Convention: unknown
// Signature: void FUN_0053a870(int param_1)

#include "nocturne.h"

void FUN_0053a870(int param_1)

{
  FUN_0053a830(param_1);
  FUN_005b77c0(param_1,0,0x1a4);
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
