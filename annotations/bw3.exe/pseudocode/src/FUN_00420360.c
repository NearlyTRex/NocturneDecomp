// Name: FUN_00420360
// Address: 00420360
// Address Range: [[00420360, 004203e2]]
// Convention: unknown
// Signature: void FUN_00420360(undefined4 param_1)

#include "nocturne.h"

void FUN_00420360(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041efe0(param_1);
  iVar1 = FUN_0045c180(iVar1 + 0x6ec,0x100,0x100);
  *(uint *)(iVar1 + -0x598) = 0x5dca74;
  *(uint *)(iVar1 + 0x1cb4) = 1;
  *(uint *)(iVar1 + 0x2fb4) = 0;
  *(uint *)(iVar1 + 0x2fb0) = *(uint *)(iVar1 + 0x2fb4);
  *(uint *)(iVar1 + 0x2fac) = *(uint *)(iVar1 + 0x2fb0);
  *(uint *)(iVar1 + 0x2fc0) = 0;
  *(uint *)(iVar1 + 0x2fbc) = *(uint *)(iVar1 + 0x2fc0);
  *(uint *)(iVar1 + 0x2fb8) = *(uint *)(iVar1 + 0x2fbc);
  *(uint *)(iVar1 + 0x2fc4) = 0;
  *(uint *)(iVar1 + -4) = 1;
  return;
}
