// Name: FUN_00567370
// Address: 00567370
// Address Range: [[00567370, 005673e8]]
// Convention: unknown
// Signature: void FUN_00567370(undefined4 param_1)

#include "nocturne.h"

void FUN_00567370(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005241d0(param_1);
  iVar1 = FUN_005c0357(iVar1 + 0x58,100,&DAT_005fb430);
  *(byte ***)(iVar1 + -8) = &PTR_FUN_006058b4;
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
