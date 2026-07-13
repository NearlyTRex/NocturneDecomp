// Name: FUN_0043d870
// Address: 0043d870
// Address Range: [[0043d870, 0043d8d4]]
// Convention: unknown
// Signature: int FUN_0043d870(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0043d870(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_0056445f(param_1,&DAT_0059bc50);
    FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = FUN_00409ea0(param_1 + 0x574,1);
  iVar1 = FUN_00553ea0(iVar1 + -0x574,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
