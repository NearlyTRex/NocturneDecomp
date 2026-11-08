// Name: FUN_0053d710
// Address: 0053d710
// Address Range: [[0053d710, 0053d727]]
// Convention: unknown
// Signature: void FUN_0053d710(undefined4 param_1)

#include "nocturne.h"

void FUN_0053d710(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0053c5c0(param_1);
  *(byte ***)(iVar1 + 0x194) = &PTR_FUN_00604aa4;
  return;
}
