// Name: FUN_00576930
// Address: 00576930
// Address Range: [[00576930, 00576973]]
// Convention: unknown
// Signature: int FUN_00576930(undefined4 param_1)

#include "nocturne.h"

int FUN_00576930(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  iVar1 = FUN_0044fc80(iVar1 + 0x2b4);
  *(uint *)(iVar1 + -4) = 0x5fd0f4;
  FUN_0044fd70(iVar1,"question.kfm");
  return iVar1 + -0x2b4;
}
