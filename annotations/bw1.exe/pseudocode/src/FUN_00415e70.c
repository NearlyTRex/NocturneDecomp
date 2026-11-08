// Name: FUN_00415e70
// Address: 00415e70
// Address Range: [[00415e70, 00415fb0]]
// Convention: unknown
// Signature: void FUN_00415e70(int param_1)

#include "nocturne.h"

void FUN_00415e70(int param_1)

{
  *(uint *)(param_1 + 0xbf0) = 3;
  *(uint *)(param_1 + 0xc00) = 2;
  *(uint *)(param_1 + 0xbf4) = 0x14;
  *(uint *)(param_1 + 0xc04) = 6;
  *(uint *)(param_1 + 0xbf8) = 2;
  *(uint *)(param_1 + 0xc08) = 6;
  *(uint *)(param_1 + 0xbfc) = 0x12;
  *(uint *)(param_1 + 0xc0c) = 6;
  *(uint *)(param_1 + 0x18) = 0;
  *(uint *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x34) = 1;
  *(uint *)(param_1 + 0x38) = 2;
  *(uint *)(param_1 + 0x3c) = 2;
  *(uint *)(param_1 + 0x40) = 2;
  *(uint *)(param_1 + 0x44) = 3;
  *(uint *)(param_1 + 0x48) = 3;
  *(uint *)(param_1 + 0x4c) = 1;
  *(uint *)(param_1 + 0x24) = 0;
  *(uint *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x2c) = 0;
  DAT_007c397c = 0xffffffff;
  FUN_00468950(param_1 + 0x8f8,"audioreel.kfm");
  FUN_00468950(param_1 + 0xa74,"audioreelshadow.kfm");
  *(uint *)(param_1 + 0x5c) = 0;
  *(uint *)(param_1 + 0xc20) = 2;
  *(uint *)(param_1 + 0xc24) = 2;
  *(uint *)(param_1 + 0xc28) = 2;
  *(uint *)(param_1 + 0xc2c) = 2;
  *(uint *)(param_1 + 0xc30) = 2;
  *(uint *)(param_1 + 0xc10) = 0;
  *(uint *)(param_1 + 0xc34) = 0;
  *(uint *)(param_1 + 0x50) = 0;
  *(uint *)(param_1 + 0x54) = 0;
  *(uint *)(param_1 + 0x58) = 0;
  return;
}
