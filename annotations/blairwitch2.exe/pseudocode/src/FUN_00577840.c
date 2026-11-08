// Name: FUN_00577840
// Address: 00577840
// Address Range: [[00577840, 00577897]]
// Convention: unknown
// Signature: int FUN_00577840(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00577840(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005fd310);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  *(byte **)(param_1 + 0x2b0) = &DAT_005fd224;
  iVar1 = FUN_00408930(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
