// Name: FUN_004dff60
// Address: 004dff60
// Address Range: [[004dff60, 004e0005]]
// Convention: unknown
// Signature: int FUN_004dff60(undefined4 param_1)

#include "nocturne.h"

int FUN_004dff60(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  iVar1 = FUN_0044fc80(iVar1 + 0x2b4);
  *(uint *)(iVar1 + -4) = 0x5f9194;
  FUN_0044fd70(iVar1,0x5dbd56);
  *(uint *)(iVar1 + 0x17c) = 0x40000000;
  *(uint *)(iVar1 + 0x180) = 0x41200000;
  *(uint *)(iVar1 + 0x184) = 0;
  *(uint *)(iVar1 + 0x188) = 0;
  *(uint *)(iVar1 + 0x194) = 0;
  *(uint *)(iVar1 + 400) = *(uint *)(iVar1 + 0x194);
  *(uint *)(iVar1 + 0x18c) = *(uint *)(iVar1 + 400);
  *(uint *)(iVar1 + 0x1a0) = 0;
  *(uint *)(iVar1 + 0x19c) = *(uint *)(iVar1 + 0x1a0);
  *(uint *)(iVar1 + 0x198) = *(uint *)(iVar1 + 0x19c);
  *(uint *)(iVar1 + 0x1a4) = 0;
  return iVar1 + -0x2b4;
}
