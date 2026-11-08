// Name: FUN_00502350
// Address: 00502350
// Address Range: [[00502350, 00502387]]
// Convention: unknown
// Signature: void FUN_00502350(int param_1)

#include "nocturne.h"

void FUN_00502350(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044dc10(param_1 + 8);
  iVar1 = FUN_0044dc10(iVar1 + 0x398);
  iVar1 = FUN_0044dc10(iVar1 + 0x398);
  *(uint *)(iVar1 + -0x738) = 0;
  return;
}
