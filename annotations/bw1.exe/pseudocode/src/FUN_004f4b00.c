// Name: FUN_004f4b00
// Address: 004f4b00
// Address Range: [[004f4b00, 004f4b2e]]
// Convention: unknown
// Signature: int FUN_004f4b00(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

int FUN_004f4b00(int param_1,uint param_2,uint param_3)

{
  *(byte ***)(param_1 + 0x200) = &PTR_FUN_00602964;
  FUN_004f4b80(param_1,param_2);
  FUN_004f4bc0(param_1,param_3);
  return param_1;
}
