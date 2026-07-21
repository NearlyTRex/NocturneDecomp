// Name: FUN_00514470
// Address: 00514470
// Address Range: [[00514470, 005144d5]]
// Convention: unknown
// Signature: void FUN_00514470(int param_1)

#include "nocturne.h"

void FUN_00514470(int param_1)

{
  FUN_00514430(param_1);
  memset(param_1,0,0x1a0);
  *(uint *)(param_1 + 0x140) = 0x41e00000;
  *(uint *)(param_1 + 0x17c) = 0xc3960000;
  *(uint *)(param_1 + 0x180) = 0;
  *(uint *)(param_1 + 0x18c) = 0x43960000;
  *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x17c);
  *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x18c);
  *(uint *)(param_1 + 0x184) = *(uint *)(param_1 + 0x18c);
  return;
}
