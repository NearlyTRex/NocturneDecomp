// Name: FUN_0056fe10
// Address: 0056fe10
// Address Range: [[0056fe10, 0056fe76]]
// Convention: unknown
// Signature: int FUN_0056fe10(undefined4 param_1)

#include "nocturne.h"

int FUN_0056fe10(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00572340(param_1);
  iVar1 = FUN_005a08d0(iVar1 + 0x17c);
  *(uint *)(iVar1 + -0x5c) = 0;
  *(uint *)(iVar1 + -0x28) = 0;
  *(uint *)(iVar1 + -0x24) = 0;
  *(uint *)(iVar1 + -0x2c) = 0;
  *(uint *)(iVar1 + -0x20) = 0;
  *(uint *)(iVar1 + -0x1c) = 0xffffffff;
  *(uint *)(iVar1 + -8) = 0;
  *(uint *)(iVar1 + 0x30) = 0;
  *(uint *)(iVar1 + -0x18) = 0;
  *(uint *)(iVar1 + -0x14) = 0;
  return iVar1 + -0x17c;
}
