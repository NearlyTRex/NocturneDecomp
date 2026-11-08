// Name: FUN_00544cd0
// Address: 00544cd0
// Address Range: [[00544cd0, 00544d48]]
// Convention: unknown
// Signature: void FUN_00544cd0(undefined4 param_1)

#include "nocturne.h"

void FUN_00544cd0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00503020(param_1);
  iVar1 = FUN_005b7f5f(iVar1 + 0x58,100,&DAT_005f22b0);
  *(byte ***)(iVar1 + -8) = &PTR_FUN_005fb9c4;
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
