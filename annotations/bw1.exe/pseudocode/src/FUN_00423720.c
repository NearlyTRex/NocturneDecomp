// Name: FUN_00423720
// Address: 00423720
// Address Range: [[00423720, 00423794]]
// Convention: unknown
// Signature: int FUN_00423720(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00423720(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_005fd030);
    FUN_005c0336(uVar2);
    return param_1;
  }
  iVar1 = FUN_00462530(param_1 + 0x67c,0);
  iVar1 = FUN_0041dab0(iVar1 + -0x2e8,0);
  iVar1 = FUN_00408730(iVar1 + -0x394,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
