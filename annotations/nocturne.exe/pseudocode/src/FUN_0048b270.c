// Name: FUN_0048b270
// Address: 0048b270
// Address Range: [[0048b270, 0048b318]]
// Convention: unknown
// Signature: void FUN_0048b270(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048b270(uint param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = _DAT_01c58df8 * 0x9c;
  _DAT_01c58df8 = _DAT_01c58df8 + 1;
  if (0x3f < _DAT_01c58df8) {
    _DAT_01c58df8 = 0;
  }
  (*(code *)**(uint **)(&DAT_01c58e30 + iVar2))(iVar2 + 0x1c58dfc,param_2,param_3);
  uVar1 = FUN_0040de00(0xc000,0xffff);
  *(uint *)(iVar2 + 0x1c58e34) = uVar1;
  if (param_4 == 0) {
    *(uint *)(iVar2 + 0x1c58e38) = 0x2000;
  }
  else {
    *(uint *)(iVar2 + 0x1c58e38) = 0x8000;
  }
  *(int *)(iVar2 + 0x1c58e40) = param_4;
  *(uint *)(iVar2 + 0x1c58e3c) = 0;
  *(uint *)(iVar2 + 0x1c58e54) = param_5;
  FUN_00526ea0(param_5,iVar2 + 0x1c58dfc);
  FUN_00526ff0(*(uint *)(iVar2 + 0x1c58e54),iVar2 + 0x1c58e08);
  return;
}
