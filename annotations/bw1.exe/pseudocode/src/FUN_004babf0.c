// Name: FUN_004babf0
// Address: 004babf0
// Address Range: [[004babf0, 004bac44]]
// Convention: unknown
// Signature: int FUN_004babf0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004babf0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_00600a20);
    FUN_005c0336(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x14) = &PTR_FUN_00600954;
  iVar1 = FUN_004baad0(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
