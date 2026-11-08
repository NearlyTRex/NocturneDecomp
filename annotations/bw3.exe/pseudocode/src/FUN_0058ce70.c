// Name: FUN_0058ce70
// Address: 0058ce70
// Address Range: [[0058ce70, 0058cec5]]
// Convention: unknown
// Signature: int FUN_0058ce70(undefined4 param_1)

#include "nocturne.h"

int FUN_0058ce70(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005888d0(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005e6cd4;
  FUN_0054eae0(iVar1 + 0x158,"Bwp3_indzombie2.dfm");
  *(uint *)(iVar1 + 0xd140) = 4;
  *(uint *)(iVar1 + 0x2538) = 0x42200000;
  *(uint *)(iVar1 + 0xce5c) = 0x41700000;
  *(uint *)(iVar1 + 0xce60) = 0x41700000;
  return iVar1;
}
