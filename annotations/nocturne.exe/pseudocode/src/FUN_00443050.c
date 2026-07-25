// Name: FUN_00443050
// Address: 00443050
// Address Range: [[00443050, 004430fa]]
// Convention: unknown
// Signature: void FUN_00443050(int param_1)

#include "nocturne.h"

void FUN_00443050(int param_1)

{
  *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x148c);
  *(uint *)(param_1 + 0x170) = *(uint *)(param_1 + 0x1490);
  *(uint *)(param_1 + 0x174) = *(uint *)(param_1 + 0x1494);
  if ((uint *)(param_1 + 0x104) != (uint *)(param_1 + 0x1498)) {
    *(uint *)(param_1 + 0x104) = *(uint *)(param_1 + 0x1498);
    *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x149c);
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x14a0);
  }
  *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x14a4);
  *(uint *)(param_1 + 0x17c) = *(uint *)(param_1 + 0x14a8);
  *(uint *)(param_1 + 0x180) = *(uint *)(param_1 + 0x14ac);
  *(uint *)(param_1 + 0x184) = *(uint *)(param_1 + 0x14b0);
  *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x14b4);
  *(uint *)(param_1 + 0x18c) = *(uint *)(param_1 + 0x14b8);
  *(uint *)(param_1 + 400) = *(uint *)(param_1 + 0x14bc);
  *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x14c0);
  *(uint *)(param_1 + 0x198) = *(uint *)(param_1 + 0x14c4);
  return;
}
