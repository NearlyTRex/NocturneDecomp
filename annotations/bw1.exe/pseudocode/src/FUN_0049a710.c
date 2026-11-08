// Name: FUN_0049a710
// Address: 0049a710
// Address Range: [[0049a710, 0049a7a2]]
// Convention: unknown
// Signature: int FUN_0049a710(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0049a710(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_005ff8b0);
    FUN_005c0336(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0xc) = &PTR_FUN_005ff834;
  FUN_0049c370(param_1);
  iVar1 = FUN_0049d4b0(param_1 + 0x2d8,0);
  iVar1 = FUN_0049d4b0(iVar1 + -0xe4,0);
  iVar1 = FUN_0049c9b0(iVar1 + -0x38,0);
  iVar1 = FUN_004993a0(iVar1 + -0x1bc,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
