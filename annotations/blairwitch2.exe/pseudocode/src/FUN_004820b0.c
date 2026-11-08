// Name: FUN_004820b0
// Address: 004820b0
// Address Range: [[004820b0, 00482142]]
// Convention: unknown
// Signature: int FUN_004820b0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004820b0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f5db0);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0xc) = &PTR_FUN_005f5d34;
  FUN_00483d10(param_1);
  iVar1 = FUN_00484e50(param_1 + 0x2d8,0);
  iVar1 = FUN_00484e50(iVar1 + -0xe4,0);
  iVar1 = FUN_00484350(iVar1 + -0x38,0);
  iVar1 = FUN_00480d40(iVar1 + -0x1bc,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
