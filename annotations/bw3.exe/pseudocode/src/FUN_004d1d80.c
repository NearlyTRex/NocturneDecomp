// Name: FUN_004d1d80
// Address: 004d1d80
// Address Range: [[004d1d80, 004d1deb]]
// Convention: unknown
// Signature: int FUN_004d1d80(undefined4 param_1)

#include "nocturne.h"

int FUN_004d1d80(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  iVar1 = FUN_00462500(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x5e1314;
  FUN_004625f0(iVar1,"health_lg.kfm");
  *(uint *)(iVar1 + 0x17c) = 1;
  *(uint *)(iVar1 + 0x180) = 0x42480000;
  *(uint *)(iVar1 + 0x188) = 0;
  *(uint *)(iVar1 + 0x184) = 0;
  return iVar1 + -0x158;
}
