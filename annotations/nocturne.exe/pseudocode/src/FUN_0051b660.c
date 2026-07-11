// Name: FUN_0051b660
// Address: 0051b660
// Address Range: [[0051b660, 0051b6d8]]
// Convention: unknown
// Signature: void FUN_0051b660(undefined4 param_1)

#include "nocturne.h"

void FUN_0051b660(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004e1120(param_1);
  iVar1 = FUN_005644a7(iVar1 + 0x58,100,&DAT_005993b0);
  *(byte ***)(iVar1 + -8) = &PTR_FUN_005a1ed4;
  *(byte *)(iVar1 + 0x2208) = 0;
  *(uint *)(iVar1 + 0x2258) = 0;
  *(uint *)(iVar1 + 0x21dc) = 0;
  *(uint *)(iVar1 + 0x21d8) = 0xffffffff;
  *(uint *)(iVar1 + 0x21f8) = 0;
  *(uint *)(iVar1 + 0x2204) = 0;
  *(uint *)(iVar1 + 0x2200) = *(uint *)(iVar1 + 0x2204);
  *(uint *)(iVar1 + 0x21fc) = *(uint *)(iVar1 + 0x2200);
  *(uint *)(iVar1 + -4) = 0x3f800000;
  return;
}
