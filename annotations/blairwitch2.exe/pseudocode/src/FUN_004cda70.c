// Name: FUN_004cda70
// Address: 004cda70
// Address Range: [[004cda70, 004cdadb]]
// Convention: unknown
// Signature: int FUN_004cda70(undefined4 param_1)

#include "nocturne.h"

int FUN_004cda70(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  iVar1 = FUN_0044fc80(iVar1 + 0x2b4);
  *(byte **)(iVar1 + -4) = &DAT_005f8144;
  FUN_0044fd70(iVar1,"bullet.kfm");
  *(uint *)(iVar1 + 0x17c) = 1;
  *(uint *)(iVar1 + 0x180) = 0x42480000;
  *(uint *)(iVar1 + -0x1b8) = 0;
  *(uint *)(iVar1 + 0x184) = 0x3e800000;
  return iVar1 + -0x2b4;
}
