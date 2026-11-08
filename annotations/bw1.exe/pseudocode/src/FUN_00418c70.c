// Name: FUN_00418c70
// Address: 00418c70
// Address Range: [[00418c70, 00418cfb]]
// Convention: unknown
// Signature: int FUN_00418c70(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00418c70(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_005fcbf0);
    FUN_005c0336(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x154) = &PTR_FUN_005fcad4;
  FUN_00418d00(param_1,0,0);
  iVar1 = FUN_0041dab0(param_1 + 0xcd0,0);
  iVar1 = FUN_0041b190(iVar1 + -0x580,0);
  iVar1 = FUN_00408730(iVar1 + -0x750,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
