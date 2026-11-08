// Name: FUN_004cc5f0
// Address: 004cc5f0
// Address Range: [[004cc5f0, 004cc654]]
// Convention: unknown
// Signature: int FUN_004cc5f0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004cc5f0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005e0cc0);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  iVar1 = FUN_004f3fe0(param_1 + 0x21c,0);
  iVar1 = FUN_00408770(iVar1 + -0x21c,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
