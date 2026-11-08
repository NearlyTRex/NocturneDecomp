// Name: FUN_004c72f0
// Address: 004c72f0
// Address Range: [[004c72f0, 004c7354]]
// Convention: unknown
// Signature: int FUN_004c72f0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004c72f0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f7b70);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  iVar1 = FUN_004f98c0(param_1 + 0x348,0);
  iVar1 = FUN_00408930(iVar1 + -0x348,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
