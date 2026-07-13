// Name: FUN_00439c70
// Address: 00439c70
// Address Range: [[00439c70, 00439cce]]
// Convention: unknown
// Signature: int FUN_00439c70(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00439c70(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_0056445f(param_1,&DAT_0059b530);
    FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = FUN_00439370(param_1 + 4,0);
  iVar1 = FUN_00438f30(iVar1 + -4,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
