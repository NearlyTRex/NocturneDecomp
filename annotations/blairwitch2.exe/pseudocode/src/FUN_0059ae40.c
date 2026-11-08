// Name: FUN_0059ae40
// Address: 0059ae40
// Address Range: [[0059ae40, 0059af20]]
// Convention: unknown
// Signature: undefined4 FUN_0059ae40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0059ae40(int param_1)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x86c) = 3;
  *(uint *)(param_1 + 0x87c) = 2;
  *(uint *)(param_1 + 0x870) = 0x14;
  *(uint *)(param_1 + 0x880) = 6;
  *(uint *)(param_1 + 0x874) = 2;
  *(uint *)(param_1 + 0x884) = 6;
  *(uint *)(param_1 + 0x878) = 0x12;
  *(uint *)(param_1 + 0x888) = 6;
  *(uint *)(param_1 + 0x18) = 0;
  *(uint *)(param_1 + 0x30) = 1;
  *(uint *)(param_1 + 0x34) = 2;
  *(uint *)(param_1 + 0x38) = 2;
  *(uint *)(param_1 + 0x3c) = 2;
  *(uint *)(param_1 + 0x40) = 3;
  *(uint *)(param_1 + 0x44) = 1;
  *(uint *)(param_1 + 0x24) = 0;
  *(uint *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x2c) = 0;
  _DAT_026677e4 = 0xffffffff;
  FUN_0044fd70(param_1 + 0x574,"audioreel.kfm");
  uVar1 = FUN_0044fd70(param_1 + 0x6f0,"audioreelshadow.kfm");
  *(uint *)(param_1 + 0x48) = 0;
  return uVar1;
}
