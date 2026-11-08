// Name: FUN_00420db0
// Address: 00420db0
// Address Range: [[00420db0, 00420e14]]
// Convention: unknown
// Signature: int FUN_00420db0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00420db0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005dcb90);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  iVar1 = FUN_0041adf0(param_1 + 0x394,0);
  iVar1 = FUN_00408770(iVar1 + -0x394,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
