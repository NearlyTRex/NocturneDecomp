// Name: FUN_00544d50
// Address: 00544d50
// Address Range: [[00544d50, 00544dad]]
// Convention: unknown
// Signature: int FUN_00544d50(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00544d50(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f6dc0);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x50) = &PTR_FUN_005fb9c4;
  FUN_00544e30(param_1);
  iVar1 = FUN_00503050(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
