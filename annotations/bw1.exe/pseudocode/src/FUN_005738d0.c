// Name: FUN_005738d0
// Address: 005738d0
// Address Range: [[005738d0, 0057390b]]
// Convention: unknown
// Signature: undefined4 FUN_005738d0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005738d0(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0056fa10(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x30) = param_2;
  *(uint *)(iVar1 + 0x34) = 1;
  *(byte *)(iVar1 + 0x118) = *(byte *)(iVar1 + 0x118) | 4;
  FUN_00573e70();
  return 1;
}
