// Name: FUN_004bad40
// Address: 004bad40
// Address Range: [[004bad40, 004badbd]]
// Convention: unknown
// Signature: int FUN_004bad40(int param_1,byte param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004bad40(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _DAT_01cc4200;
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_00600a40);
    FUN_005c0336(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x14) = &PTR_FUN_00600964;
  if (param_1 == iVar1) {
    _DAT_01cc4200 = 0;
  }
  iVar1 = FUN_004bf6c0(param_1 + 0xdc,0);
  iVar1 = FUN_004ba760(iVar1 + -0xdc,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
