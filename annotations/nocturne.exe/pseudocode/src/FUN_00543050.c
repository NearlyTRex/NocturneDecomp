// Name: FUN_00543050
// Address: 00543050
// Address Range: [[00543050, 005430c4]]
// Convention: unknown
// Signature: int FUN_00543050(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00543050(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_0056445f(param_1,&DAT_005a2bc0);
    FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = FUN_00435160(param_1 + 0x5a574,0);
  iVar1 = FUN_00435160(iVar1 + -0x3ab30,0);
  iVar1 = FUN_004b4800(iVar1 + -0x1fa44,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
