// Name: FUN_004832b0
// Address: 004832b0
// Address Range: [[004832b0, 00483342]]
// Convention: unknown
// Signature: int FUN_004832b0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004832b0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005df0c0);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0xc) = &PTR_FUN_005df044;
  FUN_00484f10(param_1);
  iVar1 = FUN_00486050(param_1 + 0x2d8,0);
  iVar1 = FUN_00486050(iVar1 + -0xe4,0);
  iVar1 = FUN_00485550(iVar1 + -0x38,0);
  iVar1 = FUN_00481f40(iVar1 + -0x1bc,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
