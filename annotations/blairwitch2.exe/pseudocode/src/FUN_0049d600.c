// Name: FUN_0049d600
// Address: 0049d600
// Address Range: [[0049d600, 0049d695]]
// Convention: unknown
// Signature: void FUN_0049d600(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d600(uint param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c950d8 + 1;
  iVar1 = _DAT_01c950d8 * 0x54;
  _DAT_01c950d8 = iVar2;
  if (0x3f < iVar2) {
    _DAT_01c950d8 = 0;
  }
  if (param_4 == 0) {
    iVar2 = FUN_005b849c();
    param_4 = FUN_0044fd20((iVar2 % 4) * 0x17c + 0x1c3e4e8);
  }
  FUN_00496750(iVar1 + 0x1c950dc,param_2,param_3,param_4,param_5);
  return;
}
