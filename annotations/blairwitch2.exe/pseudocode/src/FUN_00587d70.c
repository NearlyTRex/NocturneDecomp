// Name: FUN_00587d70
// Address: 00587d70
// Address Range: [[00587d70, 00587db9]]
// Convention: unknown
// Signature: void FUN_00587d70(undefined4 param_1)

#include "nocturne.h"

void FUN_00587d70(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005776f0(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5fde34;
  *(uint *)(iVar1 + 700) = 0x3f000000;
  *(uint *)(iVar1 + 0x2c0) = 0x3f800000;
  *(uint *)(iVar1 + 0x2c4) = 0x3f000000;
  *(uint *)(iVar1 + 0x4d0) = 0;
  *(uint *)(iVar1 + 0x6b8) = 0;
  return;
}
