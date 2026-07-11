// Name: FUN_00415d20
// Address: 00415d20
// Address Range: [[00415d20, 00415e36]]
// Convention: unknown
// Signature: void FUN_00415d20(undefined4 param_1)

#include "nocturne.h"

void FUN_00415d20(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00409d30(param_1);
  iVar1 = FUN_005644a7(iVar1 + 0x288,3,&DAT_0059a820);
  iVar1 = FUN_005644a7(iVar1 + 0x4c0,2,&DAT_0059a840);
  iVar1 = FUN_0041a610(iVar1 + 0x56c);
  *(byte ***)(iVar1 + -0xb68) = &PTR_LAB_0059a744;
  *(uint *)(iVar1 + 0x25c) = 0;
  *(uint *)(iVar1 + -0xb48) = 0;
  *(uint *)(iVar1 + -0xb44) = 0;
  *(uint *)(iVar1 + -0xb40) = 0;
  *(uint *)(iVar1 + -0xb3c) = 0;
  *(uint *)(iVar1 + -0xb38) = 0;
  *(uint *)(iVar1 + -0xb34) = 0;
  *(uint *)(iVar1 + -0xb30) = 0;
  *(uint *)(iVar1 + -0xb64) = 0;
  *(uint *)(iVar1 + -0xa34) = 0;
  *(uint *)(iVar1 + -0xa38) = *(uint *)(iVar1 + -0xa34);
  *(uint *)(iVar1 + -0xa3c) = *(uint *)(iVar1 + -0xa38);
  *(uint *)(iVar1 + -0x570) = 0;
  *(uint *)(iVar1 + -0xa30) = 0;
  *(uint *)(iVar1 + -0x10) = 0x40a00000;
  *(uint *)(iVar1 + -0x14) = 0;
  *(uint *)(iVar1 + -0xc) = 0xffff;
  *(uint *)(iVar1 + 0x260) = 0;
  *(uint *)(iVar1 + -8) = 0;
  *(uint *)(iVar1 + -4) = 0;
  return;
}
