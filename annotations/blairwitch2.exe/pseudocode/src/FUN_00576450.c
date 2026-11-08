// Name: FUN_00576450
// Address: 00576450
// Address Range: [[00576450, 0057649d]]
// Convention: unknown
// Signature: int FUN_00576450(undefined4 param_1)

#include "nocturne.h"

int FUN_00576450(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  iVar1 = FUN_0044fc80(iVar1 + 0x2b4);
  *(uint *)(iVar1 + -4) = 0x5fcfc4;
  FUN_0044fd70(iVar1,"beartrap.kfm");
  *(uint *)(iVar1 + 0x180) = 0;
  return iVar1 + -0x2b4;
}
