// Name: FUN_00576980
// Address: 00576980
// Address Range: [[00576980, 00576a3e]]
// Convention: unknown
// Signature: void FUN_00576980(int param_1)

#include "nocturne.h"

void FUN_00576980(int param_1)

{
  uint uVar1;
  
  FUN_00408a80(param_1);
  FUN_0044fd00(param_1 + 0x2b4);
  *(uint *)(param_1 + 0x464) = 0;
  *(uint *)(param_1 + 0x460) = *(uint *)(param_1 + 0x464);
  *(uint *)(param_1 + 0x45c) = *(uint *)(param_1 + 0x460);
  *(uint *)(param_1 + 0x44c) = 0;
  *(uint *)(param_1 + 0x448) = *(uint *)(param_1 + 0x44c);
  *(uint *)(param_1 + 0x444) = *(uint *)(param_1 + 0x448);
  *(uint *)(param_1 + 0x43c) = 0x3f000000;
  *(uint *)(param_1 + 0x440) = 0x40000000;
  *(uint *)(param_1 + 0x468) = 0x3f800000;
  *(uint *)(param_1 + 0x46c) = 0x3f800000;
  uVar1 = FUN_0040cf60(0x40c00000,0x41a00000);
  *(uint *)(param_1 + 0x470) = uVar1;
  *(uint *)(param_1 + 0x47c) = 0;
  *(uint *)(param_1 + 0x478) = *(uint *)(param_1 + 0x47c);
  *(uint *)(param_1 + 0x474) = *(uint *)(param_1 + 0x478);
  *(uint *)(param_1 + 0x480) = 0x41000000;
  return;
}
