// Name: FUN_005a8f80
// Address: 005a8f80
// Address Range: [[005a8f80, 005a9041]]
// Convention: unknown
// Signature: int FUN_005a8f80(undefined4 param_1)

#include "nocturne.h"

int FUN_005a8f80(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a47b0(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x6004e4;
  FUN_005478b0(iVar1 + 0x2b4,"Belling.dfm");
  *(uint *)(iVar1 + 0x3434) = 0x3f800000;
  *(uint *)(iVar1 + 0x1134c) = 0x3fc00000;
  *(uint *)(iVar1 + 0x11380) = 0;
  *(uint *)(iVar1 + 0x11384) = 0;
  *(uint *)(iVar1 + 0x11388) = 0;
  *(uint *)(iVar1 + 0x1138c) = 0;
  *(uint *)(iVar1 + 0x11390) = 0;
  *(uint *)(iVar1 + 0x11394) = 0;
  FUN_005b15c0(iVar1 + 0x2d0c,"Bellingcloth.cth");
  FUN_005a9060(iVar1,0,0);
  FUN_0059d990(iVar1 + 0x10af8,"Animation");
  FUN_0059dc80(iVar1 + 0x10af8);
  return iVar1;
}
