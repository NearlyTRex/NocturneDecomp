// Name: FUN_00594a00
// Address: 00594a00
// Address Range: [[00594a00, 00594a2d]]
// Convention: unknown
// Signature: int FUN_00594a00(undefined4 param_1)

#include "nocturne.h"

int FUN_00594a00(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00531670(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_00606714;
  FUN_00569f50(iVar1 + 0x158,"drummer.dfm");
  return iVar1;
}
