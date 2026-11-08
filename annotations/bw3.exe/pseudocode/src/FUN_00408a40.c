// Name: FUN_00408a40
// Address: 00408a40
// Address Range: [[00408a40, 00408afb]]
// Convention: unknown
// Signature: undefined4 FUN_00408a40(int param_1,undefined4 param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00408a40(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_0053e870(0x01ED78C8);
  FUN_0053ec10(0x01ED78C8,param_1);
  FUN_0053ec80(0x01ED78C8);
  uVar2 = FUN_0053bc80(0x01ED78C8,param_1 + 0x20,param_2);
  uVar3 = FUN_0040c840(*(uint *)(0x01ED78C8 + 0x14d144),_DAT_01ed2aec);
  *(uint *)(param_1 + 0xdc) = uVar3;
  iVar1 = 0x01ED78C8;
  if (param_3 != (uint *)0x0) {
    if (param_3 != (uint *)(0x01ED78C8 + 0x14d128)) {
      *param_3 = *(uint *)(0x01ED78C8 + 0x14d128);
      param_3[1] = *(uint *)(iVar1 + 0x14d12c);
      param_3[2] = *(uint *)(iVar1 + 0x14d130);
    }
  }
  FUN_0053ea20(0x01ED78C8);
  return uVar2;
}
