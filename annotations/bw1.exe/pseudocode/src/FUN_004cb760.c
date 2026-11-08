// Name: FUN_004cb760
// Address: 004cb760
// Address Range: [[004cb760, 004cb7c4]]
// Convention: unknown
// Signature: int FUN_004cb760(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004cb760(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_00600f10);
    FUN_005c0336(uVar2);
    return param_1;
  }
  iVar1 = FUN_0043e620(param_1 + 0x1ffec,0);
  iVar1 = FUN_004ea980(iVar1 + -0x1ffec,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
