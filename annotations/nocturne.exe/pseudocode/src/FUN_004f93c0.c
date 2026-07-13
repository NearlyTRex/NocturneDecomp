// Name: FUN_004f93c0
// Address: 004f93c0
// Address Range: [[004f93c0, 004f93d7]]
// Convention: unknown
// Signature: void FUN_004f93c0(undefined4 param_1)

#include "nocturne.h"

void FUN_004f93c0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004f8810(param_1);
  *(byte ***)(iVar1 + 0x194) = &PTR_FUN_005a14f4;
  return;
}
