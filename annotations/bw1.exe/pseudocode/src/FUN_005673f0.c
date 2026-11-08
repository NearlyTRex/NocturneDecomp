// Name: FUN_005673f0
// Address: 005673f0
// Address Range: [[005673f0, 0056744d]]
// Convention: unknown
// Signature: int FUN_005673f0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_005673f0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_00600810);
    FUN_005c0336(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x50) = &PTR_FUN_006058b4;
  FUN_005674d0(param_1);
  iVar1 = FUN_00524200(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
