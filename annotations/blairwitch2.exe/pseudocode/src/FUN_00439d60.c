// Name: FUN_00439d60
// Address: 00439d60
// Address Range: [[00439d60, 00439db7]]
// Convention: unknown
// Signature: int FUN_00439d60(undefined4 param_1)

#include "nocturne.h"

int FUN_00439d60(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  iVar1 = FUN_0044fc80(iVar1 + 0x2b4);
  *(uint *)(iVar1 + -4) = 0x5f4b64;
  FUN_0044fd70(iVar1,"question.kfm");
  *(uint *)(iVar1 + 0x184) = 0;
  *(uint *)(iVar1 + 0x17c) = 0;
  return iVar1 + -0x2b4;
}
