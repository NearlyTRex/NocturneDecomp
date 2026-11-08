// Name: FUN_004ad050
// Address: 004ad050
// Address Range: [[004ad050, 004ad0b4]]
// Convention: unknown
// Signature: int FUN_004ad050(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004ad050(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f72f0);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  iVar1 = FUN_00438a70(param_1 + 0x45c,0);
  iVar1 = FUN_00408930(iVar1 + -0x45c,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
