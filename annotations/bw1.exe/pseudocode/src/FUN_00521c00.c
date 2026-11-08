// Name: FUN_00521c00
// Address: 00521c00
// Address Range: [[00521c00, 00521c43]]
// Convention: unknown
// Signature: int FUN_00521c00(int param_1)

#include "nocturne.h"

int FUN_00521c00(int param_1)

{
  int iVar1;
  
  FUN_00521d50(param_1);
  iVar1 = FUN_00466880(param_1 + 0x738,0);
  iVar1 = FUN_00466880(iVar1 + -0x398,0);
  iVar1 = FUN_00466880(iVar1 + -0x398,0);
  return iVar1 + -8;
}
