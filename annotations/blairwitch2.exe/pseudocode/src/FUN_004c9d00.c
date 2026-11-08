// Name: FUN_004c9d00
// Address: 004c9d00
// Address Range: [[004c9d00, 004c9d76]]
// Convention: unknown
// Signature: void FUN_004c9d00(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c9d00(uint param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01cde344 + 1;
  iVar1 = _DAT_01cde344 * 0x40;
  _DAT_01cde344 = iVar2;
  if (999 < iVar2) {
    _DAT_01cde344 = 0;
  }
  if (_DAT_01cde348 < 1000) {
    _DAT_01cde348 = _DAT_01cde348 + 1;
  }
  FUN_004c8e80(iVar1 + 0x1cde34c,param_2,param_3,param_4 == 0xb,param_5,param_6);
  return;
}
