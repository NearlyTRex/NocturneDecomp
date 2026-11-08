// Name: FUN_00599070
// Address: 00599070
// Address Range: [[00599070, 005990c5]]
// Convention: unknown
// Signature: int FUN_00599070(undefined4 param_1)

#include "nocturne.h"

int FUN_00599070(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a0410(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_00606e04;
  FUN_00569f50(iVar1 + 0x158,"thehand.dfm");
  *(uint *)(iVar1 + 0x2ff4) = 0x42480000;
  *(uint *)(iVar1 + 0x2ff8) = 0x42c80000;
  *(uint *)(iVar1 + 0xc268) = 0;
  *(uint *)(iVar1 + 0xc26c) = 0;
  return iVar1;
}
