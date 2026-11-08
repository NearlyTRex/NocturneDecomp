// Name: FUN_00410460
// Address: 00410460
// Address Range: [[00410460, 004104b3]]
// Convention: unknown
// Signature: void FUN_00410460(undefined4 param_1)

#include "nocturne.h"

void FUN_00410460(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005ad4c0(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5fbc34;
  *(uint *)(iVar1 + 0x2e0) = 8;
  *(uint *)(iVar1 + 0x2e4) = 0;
  *(uint *)(iVar1 + 0x2e8) = 0x43480000;
  *(uint *)(iVar1 + 0x2ec) = 0;
  *(uint *)(iVar1 + 0x2f0) = 0;
  *(uint *)(iVar1 + 0x578) = 0;
  return;
}
