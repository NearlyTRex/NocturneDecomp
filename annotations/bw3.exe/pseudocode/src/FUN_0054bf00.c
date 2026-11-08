// Name: FUN_0054bf00
// Address: 0054bf00
// Address Range: [[0054bf00, 0054bf78]]
// Convention: unknown
// Signature: void FUN_0054bf00(undefined4 param_1)

#include "nocturne.h"

void FUN_0054bf00(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004fbad0(param_1);
  iVar1 = FUN_005a30d7(iVar1 + 0x58,100,&DAT_005db0f0);
  *(byte ***)(iVar1 + -8) = &PTR_FUN_005e4784;
  *(byte *)(iVar1 + 0x22f8) = 0;
  *(uint *)(iVar1 + 0x2348) = 0;
  *(uint *)(iVar1 + 0x22cc) = 0;
  *(uint *)(iVar1 + 0x22c8) = 0xffffffff;
  *(uint *)(iVar1 + 0x22e8) = 0;
  *(uint *)(iVar1 + 0x22f4) = 0;
  *(uint *)(iVar1 + 0x22f0) = *(uint *)(iVar1 + 0x22f4);
  *(uint *)(iVar1 + 0x22ec) = *(uint *)(iVar1 + 0x22f0);
  *(uint *)(iVar1 + -4) = 0x3f800000;
  return;
}
