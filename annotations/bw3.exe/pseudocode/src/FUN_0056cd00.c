// Name: FUN_0056cd00
// Address: 0056cd00
// Address Range: [[0056cd00, 0056cd4d]]
// Convention: unknown
// Signature: int FUN_0056cd00(undefined4 param_1)

#include "nocturne.h"

int FUN_0056cd00(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  iVar1 = FUN_00462500(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x5e5694;
  FUN_004625f0(iVar1,"beartrap.kfm");
  *(uint *)(iVar1 + 0x180) = 0;
  return iVar1 + -0x158;
}
