// Name: FUN_004d8a20
// Address: 004d8a20
// Address Range: [[004d8a20, 004d8a4e]]
// Convention: unknown
// Signature: int FUN_004d8a20(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

int FUN_004d8a20(int param_1,uint param_2,uint param_3)

{
  *(byte ***)(param_1 + 0x200) = &PTR_FUN_005e2074;
  FUN_004d8aa0(param_1,param_2);
  FUN_004d8ae0(param_1,param_3);
  return param_1;
}
