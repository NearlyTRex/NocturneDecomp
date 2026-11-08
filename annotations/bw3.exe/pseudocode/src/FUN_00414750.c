// Name: FUN_00414750
// Address: 00414750
// Address Range: [[00414750, 00414870]]
// Convention: unknown
// Signature: void FUN_00414750(undefined4 param_1)

#include "nocturne.h"

void FUN_00414750(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  iVar1 = FUN_005a30d7(iVar1 + 0x290,3,&DAT_005dc0c0);
  iVar1 = FUN_005a30d7(iVar1 + 0x4c0,2,&DAT_005dc0e0);
  iVar1 = FUN_0041ad40(iVar1 + 0x580);
  *(byte ***)(iVar1 + -0xb7c) = &PTR_FUN_005dbfe4;
  *(uint *)(iVar1 + 0x25c) = 0;
  *(uint *)(iVar1 + -0xb5c) = 0;
  *(uint *)(iVar1 + -0xb58) = 0;
  *(uint *)(iVar1 + -0xb54) = 0;
  *(uint *)(iVar1 + -0xb50) = 0;
  *(uint *)(iVar1 + -0xb4c) = 0;
  *(uint *)(iVar1 + -0xb48) = 0;
  *(uint *)(iVar1 + -0xb44) = 0;
  *(uint *)(iVar1 + -0xb78) = 0;
  *(uint *)(iVar1 + -0xa48) = 0;
  *(uint *)(iVar1 + -0xa4c) = *(uint *)(iVar1 + -0xa48);
  *(uint *)(iVar1 + -0xa50) = *(uint *)(iVar1 + -0xa4c);
  *(uint *)(iVar1 + -0x584) = 0;
  *(uint *)(iVar1 + -0xa44) = 0;
  *(uint *)(iVar1 + -0x14) = 0x40a00000;
  *(uint *)(iVar1 + -0x18) = 0;
  *(uint *)(iVar1 + -0x10) = 0xffff;
  *(uint *)(iVar1 + 0x260) = 0;
  *(uint *)(iVar1 + -0xc) = 0;
  *(uint *)(iVar1 + -8) = 0;
  *(uint *)(iVar1 + -4) = 0;
  return;
}
