// Name: FUN_005a9230
// Address: 005a9230
// Address Range: [[005a9230, 005a9367]]
// Convention: unknown
// Signature: int FUN_005a9230(undefined4 param_1)

#include "nocturne.h"

int FUN_005a9230(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_0059e3b0(param_1);
  *(byte **)(iVar2 + 0x2b0) = &DAT_006006c4;
  FUN_005478b0(iVar2 + 0x2b4,"SHChild1.dfm");
  *(uint *)(iVar2 + 0x3434) = 0x3f000000;
  *(uint *)(iVar2 + 0x1134c) = 0x40200000;
  *(uint *)(iVar2 + 0xfc) = 1;
  *(uint *)(iVar2 + 0x113c4) = 0x3f800000;
  *(uint *)(iVar2 + 0x2a8) = 0x3dcccccd;
  *(uint *)(iVar2 + 0x11380) = 0;
  *(uint *)(iVar2 + 0x11384) = 0;
  *(uint *)(iVar2 + 0x11388) = 1;
  *(uint *)(iVar2 + 0x1138c) = 2;
  *(uint *)(iVar2 + 0x11390) = 0;
  *(uint *)(iVar2 + 0x1185c) = 0;
  *(uint *)(iVar2 + 0x11860) = 0x40a00000;
  *(uint *)(iVar2 + 0x11864) = 0;
  *(uint *)(iVar2 + 0x11858) = 0;
  FUN_005a94c0(iVar2,0,0);
  iVar1 = iVar2 + 0x10af8;
  FUN_0059d6f0(iVar1,"SleepComplete","Alert");
  FUN_0059d7f0(iVar1,"ChaseComplete","MeleeAttack");
  FUN_0059d990(iVar1,"Animation");
  FUN_0059dc80(iVar1);
  *(uint *)(iVar2 + 0x10a28) = 1;
  *(uint *)(iVar2 + 0x280c) = 1;
  *(uint *)(iVar2 + 0x11348) = 1;
  *(uint *)(iVar2 + 0x2ac) = 0;
  return iVar2;
}
