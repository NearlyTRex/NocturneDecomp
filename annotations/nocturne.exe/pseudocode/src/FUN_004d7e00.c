// Name: FUN_004d7e00
// Address: 004d7e00
// Address Range: [[004d7e00, 004d7e83]]
// Convention: unknown
// Signature: void FUN_004d7e00(int param_1)

#include "nocturne.h"

void FUN_004d7e00(int param_1)

{
  *(uint *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 0x514) = 0;
  *(uint *)(param_1 + 0x518) = 0;
  *(uint *)(param_1 + 0x528) = 0xffffffff;
  *(uint *)(param_1 + 0x524) = 0;
  *(uint *)(param_1 + 0x520) = *(uint *)(param_1 + 0x524);
  *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x520);
  *(byte *)(param_1 + 0x10) = 0;
  *(uint *)(param_1 + 0x52c) = 0;
  *(uint *)(param_1 + 0x850) = 0;
  *(uint *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0x854) = 0;
  *(uint *)(param_1 + 0x858) = 0;
  *(uint *)(param_1 + 8) = 0xffffffff;
  DAT_01ccbbf0 = 0;
  return;
}
