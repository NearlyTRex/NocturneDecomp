// Name: FUN_00408a00
// Address: 00408a00
// Address Range: [[00408a00, 00408abb]]
// Convention: unknown
// Signature: undefined4 FUN_00408a00(int param_1,undefined4 param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00408a00(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_00558eb0(0x01E82168);
  FUN_00559250(0x01E82168,param_1);
  FUN_005592c0(0x01E82168);
  uVar2 = FUN_005562c0(0x01E82168,param_1 + 0x20,param_2);
  uVar3 = FUN_0040c600(*(uint *)(0x01E82168 + 0x14d144),_DAT_01e7d41c);
  *(uint *)(param_1 + 0xdc) = uVar3;
  iVar1 = 0x01E82168;
  if (param_3 != (uint *)0x0) {
    if (param_3 != (uint *)(0x01E82168 + 0x14d128)) {
      *param_3 = *(uint *)(0x01E82168 + 0x14d128);
      param_3[1] = *(uint *)(iVar1 + 0x14d12c);
      param_3[2] = *(uint *)(iVar1 + 0x14d130);
    }
  }
  FUN_00559060(0x01E82168);
  return uVar2;
}
