// Name: FUN_004ca120
// Address: 004ca120
// Address Range: [[004ca120, 004ca1a3]]
// Convention: unknown
// Signature: int FUN_004ca120(undefined4 param_1)

#include "nocturne.h"

int FUN_004ca120(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  iVar1 = FUN_0044fc80(iVar1 + 0x2b4);
  *(uint *)(iVar1 + -4) = 0x5f7cb4;
  FUN_0044fd70(iVar1,0x5d95af);
  *(uint *)(iVar1 + 0x17c) = 0;
  *(uint *)(iVar1 + 0x180) = 0x41f00000;
  *(uint *)(iVar1 + 0x184) = 0;
  *(uint *)(iVar1 + 0x188) = 0;
  *(uint *)(iVar1 + 0x18c) = 1;
  *(byte *)(iVar1 + 400) = 0;
  *(byte *)(iVar1 + 500) = 0;
  return iVar1 + -0x2b4;
}
