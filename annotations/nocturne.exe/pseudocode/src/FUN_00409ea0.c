// Name: FUN_00409ea0
// Address: 00409ea0
// Address Range: [[00409ea0, 00409ef8]]
// Convention: unknown
// Signature: int FUN_00409ea0(int param_1,uint param_2)

#include "nocturne.h"

int FUN_00409ea0(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_0056445f(param_1,&DAT_005993d0);
    FUN_00564486(uVar1);
    return param_1;
  }
  *(uint *)(param_1 + 0x68) = 0x495fd67;
  *(byte ***)(param_1 + 0x14c) = &PTR_FUN_005992d4;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_00564494(param_1);
  return param_1;
}
