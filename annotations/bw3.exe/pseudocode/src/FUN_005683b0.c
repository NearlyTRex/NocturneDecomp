// Name: FUN_005683b0
// Address: 005683b0
// Address Range: [[005683b0, 00568412]]
// Convention: unknown
// Signature: int FUN_005683b0(undefined4 param_1)

#include "nocturne.h"

int FUN_005683b0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  iVar1 = FUN_005a30d7(iVar1 + 0x170,0x28,0x5dee90);
  *(uint *)(iVar1 + -0x1c) = 0x5e4dd4;
  *(uint *)(iVar1 + -0x18) = 0x3f800000;
  *(uint *)(iVar1 + -0x14) = 0x3f800000;
  *(uint *)(iVar1 + -0x10) = 0x40400000;
  *(uint *)(iVar1 + -4) = 5;
  *(uint *)(iVar1 + -0xc) = 0x3f000000;
  *(uint *)(iVar1 + -8) = 0x3e99999a;
  *(uint *)(iVar1 + 0x8c0) = 0;
  return iVar1 + -0x170;
}
