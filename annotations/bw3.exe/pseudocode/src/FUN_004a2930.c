// Name: FUN_004a2930
// Address: 004a2930
// Address Range: [[004a2930, 004a29c5]]
// Convention: unknown
// Signature: void FUN_004a2930(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a2930(uint param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01cf3b84 + 1;
  iVar1 = _DAT_01cf3b84 * 0x54;
  _DAT_01cf3b84 = iVar2;
  if (0x3f < iVar2) {
    _DAT_01cf3b84 = 0;
  }
  if (param_4 == 0) {
    iVar2 = FUN_005a35cc();
    param_4 = FUN_004625a0((iVar2 % 4) * 0x17c + 0x1c73c88);
  }
  FUN_0049a140(iVar1 + 0x1cf3b88,param_2,param_3,param_4,param_5);
  return;
}
