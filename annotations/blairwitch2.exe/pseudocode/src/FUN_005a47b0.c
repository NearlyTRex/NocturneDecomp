// Name: FUN_005a47b0
// Address: 005a47b0
// Address Range: [[005a47b0, 005a4869]]
// Convention: unknown
// Signature: int FUN_005a47b0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005a47b0(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0059e3b0(param_1);
  *(uint *)(iVar2 + 0x2b0) = 0x5ff724;
  FUN_005478b0(iVar2 + 0x2b4,0x5f03f4);
  *(uint *)(iVar2 + 0x3434) = 0x3f800000;
  *(uint *)(iVar2 + 0x1134c) = 0x3f800000;
  *(uint *)(iVar2 + 0x11380) = 0;
  *(uint *)(iVar2 + 0x11384) = 0;
  *(uint *)(iVar2 + 0x11388) = 1;
  *(uint *)(iVar2 + 0x1138c) = 1;
  uVar1 = _DAT_005ff71c;
  *(uint *)(iVar2 + 0x11394) = 0;
  *(uint *)(iVar2 + 0x11344) = 2;
  *(uint *)(iVar2 + 0x11370) = uVar1;
  FUN_005a4880(iVar2,0,0);
  FUN_0059d990(iVar2 + 0x10af8,"Animation");
  FUN_0059dc80(iVar2 + 0x10af8);
  return iVar2;
}
