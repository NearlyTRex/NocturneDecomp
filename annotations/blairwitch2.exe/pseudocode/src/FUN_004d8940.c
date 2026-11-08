// Name: FUN_004d8940
// Address: 004d8940
// Address Range: [[004d8940, 004d8986]]
// Convention: unknown
// Signature: int FUN_004d8940(int param_1,uint param_2)

#include "nocturne.h"

int FUN_004d8940(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005b7fa7(param_1,&DAT_005f75a0);
    FUN_005b7fce(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0x200) = &PTR_FUN_005f8ef4;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005b7fdc(param_1);
  return param_1;
}
