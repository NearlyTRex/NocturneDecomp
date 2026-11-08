// Name: FUN_004ad7b0
// Address: 004ad7b0
// Address Range: [[004ad7b0, 004ad865]]
// Convention: unknown
// Signature: int FUN_004ad7b0(undefined4 param_1)

#include "nocturne.h"

int FUN_004ad7b0(uint param_1)

{
  int iVar1;
  uint local_c [3];
  
  iVar1 = FUN_00408600(param_1);
  iVar1 = FUN_005a30d7(iVar1 + 0x168,200,&DAT_005e0500);
  *(byte ***)(iVar1 + -0x14) = &PTR_FUN_005e0424;
  *(uint *)(iVar1 + -4) = 0x14;
  if ((uint *)(iVar1 + -0x10) != local_c) {
    *(uint *)(iVar1 + -0x10) = 0x40a00000;
    *(uint *)(iVar1 + -0xc) = 0x40a00000;
    *(uint *)(iVar1 + -8) = 0x40a00000;
  }
  *(uint *)(iVar1 + 0x28ac) = 0;
  *(uint *)(iVar1 + 0x28a8) = 0;
  *(uint *)(iVar1 + 0x28a0) = 0;
  *(uint *)(iVar1 + 0x28b0) = 0;
  *(uint *)(iVar1 + 0x28b4) = 1;
  *(uint *)(iVar1 + 0x28a4) = 0;
  return iVar1 + -0x168;
}
