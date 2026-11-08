// Name: FUN_004ca070
// Address: 004ca070
// Address Range: [[004ca070, 004ca084]]
// Convention: unknown
// Signature: void FUN_004ca070(undefined4 param_1)

#include "nocturne.h"

void FUN_004ca070(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00510dd0(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_005f7bd4;
  return;
}
