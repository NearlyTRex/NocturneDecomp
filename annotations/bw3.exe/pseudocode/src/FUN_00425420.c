// Name: FUN_00425420
// Address: 00425420
// Address Range: [[00425420, 00425484]]
// Convention: unknown
// Signature: int FUN_00425420(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00425420(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005dceb0);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  iVar1 = FUN_00425490(param_1 + 0x5a8,0);
  iVar1 = FUN_0057aed0(iVar1 + -0x5a8,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
