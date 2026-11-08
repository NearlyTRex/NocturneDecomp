// Name: FUN_00503050
// Address: 00503050
// Address Range: [[00503050, 00503093]]
// Convention: unknown
// Signature: int FUN_00503050(int param_1,uint param_2)

#include "nocturne.h"

int FUN_00503050(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005b7fa7(param_1,&DAT_005fa5f0);
    FUN_005b7fce(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0x50) = &PTR_FUN_005fa5e4;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005b7fdc(param_1);
  return param_1;
}
