// Name: FUN_005347b0
// Address: 005347b0
// Address Range: [[005347b0, 00534812]]
// Convention: unknown
// Signature: int FUN_005347b0(undefined4 param_1)

#include "nocturne.h"

int FUN_005347b0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00409d30(param_1);
  iVar1 = FUN_005644a7(iVar1 + 0x168,0x28,&DAT_0059c080);
  *(byte ***)(iVar1 + -0x1c) = &PTR_FUN_005a24b4;
  *(uint *)(iVar1 + -0x18) = 0x3f800000;
  *(uint *)(iVar1 + -0x14) = 0x3f800000;
  *(uint *)(iVar1 + -0x10) = 0x40400000;
  *(uint *)(iVar1 + -4) = 5;
  *(uint *)(iVar1 + -0xc) = 0x3f000000;
  *(uint *)(iVar1 + -8) = 0x3e99999a;
  *(uint *)(iVar1 + 0x8c0) = 0;
  return iVar1 + -0x168;
}
