// Name: FUN_004ac1a0
// Address: 004ac1a0
// Address Range: [[004ac1a0, 004ac209]]
// Convention: unknown
// Signature: int FUN_004ac1a0(undefined4 param_1)

#include "nocturne.h"

int FUN_004ac1a0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  iVar1 = FUN_0044fc80(iVar1 + 0x2e0);
  iVar1 = FUN_00438a50(iVar1 + 0x17c);
  iVar1 = FUN_0044fc80(iVar1 + 0xc);
  *(uint *)(iVar1 + -0x1b8) = 0x5f7204;
  *(uint *)(iVar1 + -0x1b0) = 0;
  *(byte *)(iVar1 + -0x1ac) = 0;
  *(uint *)(iVar1 + -0x18c) = 0;
  *(uint *)(iVar1 + 0x180) = 0;
  return iVar1 + -0x468;
}
