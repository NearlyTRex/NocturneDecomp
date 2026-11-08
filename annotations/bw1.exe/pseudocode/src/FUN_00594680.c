// Name: FUN_00594680
// Address: 00594680
// Address Range: [[00594680, 005946f4]]
// Convention: unknown
// Signature: int FUN_00594680(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00594680(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_00606580);
    FUN_005c0336(uVar2);
    return param_1;
  }
  iVar1 = FUN_0043e620(param_1 + 0x5aae4,0);
  iVar1 = FUN_0043e620(iVar1 + -0x3ab30,0);
  iVar1 = FUN_004ea980(iVar1 + -0x1ffb4,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
