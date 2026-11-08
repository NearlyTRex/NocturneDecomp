// Name: FUN_00408c30
// Address: 00408c30
// Address Range: [[00408c30, 00408ceb]]
// Convention: unknown
// Signature: undefined4 FUN_00408c30(int param_1,undefined4 param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00408c30(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_00537a90(0x01E661B8);
  FUN_00537e30(0x01E661B8,param_1);
  FUN_00537ea0(0x01E661B8);
  uVar2 = FUN_00534ea0(0x01E661B8,param_1 + 0x20,param_2);
  uVar3 = FUN_0040c8f0(*(uint *)(0x01E661B8 + 0x14d144),_DAT_01e614ac);
  *(uint *)(param_1 + 0xdc) = uVar3;
  iVar1 = 0x01E661B8;
  if (param_3 != (uint *)0x0) {
    if (param_3 != (uint *)(0x01E661B8 + 0x14d128)) {
      *param_3 = *(uint *)(0x01E661B8 + 0x14d128);
      param_3[1] = *(uint *)(iVar1 + 0x14d12c);
      param_3[2] = *(uint *)(iVar1 + 0x14d130);
    }
  }
  FUN_00537c40(0x01E661B8);
  return uVar2;
}
