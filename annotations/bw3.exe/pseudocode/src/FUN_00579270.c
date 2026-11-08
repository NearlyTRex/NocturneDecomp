// Name: FUN_00579270
// Address: 00579270
// Address Range: [[00579270, 005792af]]
// Convention: unknown
// Signature: void FUN_00579270(undefined4 param_1)

#include "nocturne.h"

void FUN_00579270(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0056dfa0(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5e6124;
  *(uint *)(iVar1 + 0x160) = 0x3f000000;
  *(uint *)(iVar1 + 0x164) = 0x3f800000;
  *(uint *)(iVar1 + 0x168) = 0x3f000000;
  *(uint *)(iVar1 + 0x374) = 0;
  return;
}
