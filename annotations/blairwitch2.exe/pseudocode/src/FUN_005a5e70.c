// Name: FUN_005a5e70
// Address: 005a5e70
// Address Range: [[005a5e70, 005a5f4e]]
// Convention: unknown
// Signature: int FUN_005a5e70(undefined4 param_1)

#include "nocturne.h"

int FUN_005a5e70(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_005a47b0(param_1);
  *(byte **)(iVar2 + 0x2b0) = &DAT_005ffca4;
  FUN_005478b0(iVar2 + 0x2b4,0x5f062d);
  *(uint *)(iVar2 + 0x3434) = 0x3f000000;
  *(uint *)(iVar2 + 0x1134c) = 0x3f99999a;
  *(uint *)(iVar2 + 0xfc) = 1;
  *(uint *)(iVar2 + 0x113c4) = 0x3f800000;
  *(uint *)(iVar2 + 0x2a8) = 0x3dcccccd;
  *(uint *)(iVar2 + 0x11380) = 0;
  *(uint *)(iVar2 + 0x11384) = 0;
  *(uint *)(iVar2 + 0x11388) = 1;
  *(uint *)(iVar2 + 0x1138c) = 2;
  *(uint *)(iVar2 + 0x11390) = 0;
  FUN_005a60d0(iVar2,0,0);
  iVar1 = iVar2 + 0x10af8;
  FUN_0059d7f0(iVar1,"ChaseComplete","MeleeAttack");
  FUN_0059d990(iVar1,"Animation");
  FUN_0059dc80(iVar1);
  *(uint *)(iVar2 + 0x2ac) = 0;
  return iVar2;
}
