// Name: FUN_004b76f0
// Address: 004b76f0
// Address Range: [[004b76f0, 004b7704]]
// Convention: unknown
// Signature: void FUN_004b76f0(undefined4 param_1)

#include "nocturne.h"

void FUN_004b76f0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00532130(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_00600044;
  return;
}
