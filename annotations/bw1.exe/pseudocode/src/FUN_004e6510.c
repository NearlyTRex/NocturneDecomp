// Name: FUN_004e6510
// Address: 004e6510
// Address Range: [[004e6510, 004e6586]]
// Convention: unknown
// Signature: void FUN_004e6510(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e6510(uint param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01cf6efc + 1;
  iVar1 = _DAT_01cf6efc * 0x40;
  _DAT_01cf6efc = iVar2;
  if (999 < iVar2) {
    _DAT_01cf6efc = 0;
  }
  if (_DAT_01cf6f00 < 1000) {
    _DAT_01cf6f00 = _DAT_01cf6f00 + 1;
  }
  FUN_004e56e0(iVar1 + 0x1cf6f04,param_2,param_3,param_4 == 0xb,param_5,param_6);
  return;
}
