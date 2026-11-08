// Name: FUN_004c6000
// Address: 004c6000
// Address Range: [[004c6000, 004c6064]]
// Convention: unknown
// Signature: int FUN_004c6000(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004c6000(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_00600d10);
    FUN_005c0336(uVar2);
    return param_1;
  }
  iVar1 = FUN_00447d30(param_1 + 0x300,0);
  iVar1 = FUN_00408730(iVar1 + -0x300,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
