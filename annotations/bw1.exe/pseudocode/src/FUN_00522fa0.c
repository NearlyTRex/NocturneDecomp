// Name: FUN_00522fa0
// Address: 00522fa0
// Address Range: [[00522fa0, 00522fbe]]
// Convention: unknown
// Signature: void FUN_00522fa0(undefined4 param_1)

#include "nocturne.h"

void FUN_00522fa0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c0357(param_1,2,&DAT_00604280);
  *(uint *)(iVar1 + 0xc28) = 1;
  return;
}
