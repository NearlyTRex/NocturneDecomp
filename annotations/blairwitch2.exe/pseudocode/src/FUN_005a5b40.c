// Name: FUN_005a5b40
// Address: 005a5b40
// Address Range: [[005a5b40, 005a5c01]]
// Convention: unknown
// Signature: int FUN_005a5b40(undefined4 param_1)

#include "nocturne.h"

int FUN_005a5b40(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a47b0(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5ffad4;
  FUN_005478b0(iVar1 + 0x2b4,0x5f05eb);
  *(uint *)(iVar1 + 0x3434) = 0x3f800000;
  *(uint *)(iVar1 + 0x1134c) = 0x3fc00000;
  *(uint *)(iVar1 + 0x11380) = 0;
  *(uint *)(iVar1 + 0x11384) = 0;
  *(uint *)(iVar1 + 0x11388) = 1;
  *(uint *)(iVar1 + 0x1138c) = 1;
  *(uint *)(iVar1 + 0x11390) = 0;
  *(uint *)(iVar1 + 0x11394) = 0;
  FUN_005b15c0(iVar1 + 0x2d0c,"steubencloth.cth");
  FUN_005a5c20(iVar1,0,0);
  FUN_0059d990(iVar1 + 0x10af8,"Animation");
  FUN_0059dc80(iVar1 + 0x10af8);
  return iVar1;
}
