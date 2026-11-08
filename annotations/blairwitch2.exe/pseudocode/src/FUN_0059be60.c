// Name: FUN_0059be60
// Address: 0059be60
// Address Range: [[0059be60, 0059beb3]]
// Convention: unknown
// Signature: void FUN_0059be60(undefined4 param_1)

#include "nocturne.h"

void FUN_0059be60(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0059ab30(param_1);
  iVar1 = FUN_0040d420(iVar1 + 4);
  iVar1 = FUN_005b7f5f(iVar1 + 0x48,0x1e,&DAT_005fe5f0);
  iVar1 = FUN_0044fc80(iVar1 + 0x528);
  iVar1 = FUN_0044fc80(iVar1 + 0x17c);
  *(byte ***)(iVar1 + -0x6f0) = &PTR_FUN_005fe524;
  return;
}
