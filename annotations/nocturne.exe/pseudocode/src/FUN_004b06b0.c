// Name: FUN_004b06b0
// Address: 004b06b0
// Address Range: [[004b06b0, 004b0726]]
// Convention: unknown
// Signature: void FUN_004b06b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b06b0(uint param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c9e53c + 1;
  iVar1 = _DAT_01c9e53c * 0x40;
  _DAT_01c9e53c = iVar2;
  if (999 < iVar2) {
    _DAT_01c9e53c = 0;
  }
  if (_DAT_01c9e540 < 1000) {
    _DAT_01c9e540 = _DAT_01c9e540 + 1;
  }
  FUN_004af8a0(iVar1 + 0x1c9e544,param_2,param_3,param_4 == 0xb,param_5,param_6);
  return;
}
