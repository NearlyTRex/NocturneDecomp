// Name: FUN_004e7820
// Address: 004e7820
// Address Range: [[004e7820, 004e786e]]
// Convention: unknown
// Signature: undefined4 FUN_004e7820(int param_1)

#include "nocturne.h"

uint FUN_004e7820(int param_1)

{
  FUN_004089d0(param_1);
  *(uint *)(0x01CB6900 + 0x210) = 1;
  FUN_0044fcc0(param_1 + 0x2b4,0,0xffffffff);
  *(uint *)(0x01CB6900 + 0x210) = 0;
  FUN_00408a10(param_1);
  return 1;
}
