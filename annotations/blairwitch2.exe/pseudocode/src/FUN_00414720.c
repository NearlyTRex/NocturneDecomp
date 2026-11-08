// Name: FUN_00414720
// Address: 00414720
// Address Range: [[00414720, 00414777]]
// Convention: unknown
// Signature: int FUN_00414720(undefined4 param_1)

#include "nocturne.h"

int FUN_00414720(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  iVar1 = FUN_0044fc80(iVar1 + 0x2b4);
  *(uint *)(iVar1 + -4) = 0x5f3244;
  FUN_0044fd70(iVar1,"question.kfm");
  *(uint *)(iVar1 + 0x180) = 0x41f00000;
  *(uint *)(iVar1 + 0x184) = 0x41f00000;
  return iVar1 + -0x2b4;
}
