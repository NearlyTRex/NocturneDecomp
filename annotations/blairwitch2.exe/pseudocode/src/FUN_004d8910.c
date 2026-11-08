// Name: FUN_004d8910
// Address: 004d8910
// Address Range: [[004d8910, 004d893e]]
// Convention: unknown
// Signature: int FUN_004d8910(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

int FUN_004d8910(int param_1,uint param_2,uint param_3)

{
  *(byte ***)(param_1 + 0x200) = &PTR_FUN_005f8ef4;
  FUN_004d8990(param_1,param_2);
  FUN_004d89d0(param_1,param_3);
  return param_1;
}
