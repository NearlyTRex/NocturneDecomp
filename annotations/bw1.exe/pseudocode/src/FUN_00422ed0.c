// Name: FUN_00422ed0
// Address: 00422ed0
// Address Range: [[00422ed0, 00422f52]]
// Convention: unknown
// Signature: void FUN_00422ed0(undefined4 param_1)

#include "nocturne.h"

void FUN_00422ed0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00421ca0(param_1);
  iVar1 = FUN_00462470(iVar1 + 0x67c,0x100,0x100);
  *(uint *)(iVar1 + -0x528) = 0x5fcf34;
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
