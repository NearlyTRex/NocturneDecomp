// Name: FUN_00420d30
// Address: 00420d30
// Address Range: [[00420d30, 00420da4]]
// Convention: unknown
// Signature: int FUN_00420d30(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00420d30(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005dcb70);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  iVar1 = FUN_0045c240(param_1 + 0x6ec,0);
  iVar1 = FUN_0041adf0(iVar1 + -0x358,0);
  iVar1 = FUN_00408770(iVar1 + -0x394,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
