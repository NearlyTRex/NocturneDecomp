// Name: FUN_004cee70
// Address: 004cee70
// Address Range: [[004cee70, 004ceeee]]
// Convention: unknown
// Signature: void FUN_004cee70(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cee70(uint param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01d4aec4 + 1;
  iVar1 = _DAT_01d4aec4 * 0x44;
  _DAT_01d4aec4 = iVar2;
  if (999 < iVar2) {
    _DAT_01d4aec4 = 0;
  }
  if (_DAT_01d4aec8 < 1000) {
    _DAT_01d4aec8 = _DAT_01d4aec8 + 1;
  }
  FUN_004ce170(iVar1 + 0x1d4aecc,param_2,param_3,param_4 == 0xb,param_5,param_6);
  return;
}
