// Name: FUN_00589ae0
// Address: 00589ae0
// Address Range: [[00589ae0, 00589b4e]]
// Convention: unknown
// Signature: int FUN_00589ae0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00589ae0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005fe070);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  *(byte **)(param_1 + 0x2b0) = &DAT_005fdf64;
  iVar1 = FUN_005b1c70(param_1 + 0x464,0);
  iVar1 = FUN_00408930(iVar1 + -0x464,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
