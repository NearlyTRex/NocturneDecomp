// Name: FUN_00568eb8
// Address: 00568eb8
// Address Range: [[00568eb8, 00568ec5]]
// Convention: unknown
// Signature: void FUN_00568eb8(undefined4 param_1)

#include "nocturne.h"

void FUN_00568eb8(uint param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_005c1abc)();
  *(uint *)(iVar1 + 8) = param_1;
  return;
}
