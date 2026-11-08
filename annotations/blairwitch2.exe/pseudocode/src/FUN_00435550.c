// Name: FUN_00435550
// Address: 00435550
// Address Range: [[00435550, 004355ae]]
// Convention: unknown
// Signature: int FUN_00435550(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00435550(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f4470);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  iVar1 = FUN_00434270(param_1 + 4,0);
  iVar1 = FUN_00433e90(iVar1 + -4,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
