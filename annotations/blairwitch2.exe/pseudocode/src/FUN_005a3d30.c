// Name: FUN_005a3d30
// Address: 005a3d30
// Address Range: [[005a3d30, 005a3e6b]]
// Convention: unknown
// Signature: int FUN_005a3d30(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005a3d30(uint param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = FUN_0059e3b0(param_1);
  *(byte **)(iVar4 + 0x2b0) = &DAT_005ff554;
  FUN_005478b0(iVar4 + 0x2b4,"unzombie_brett.dfm");
  *(uint *)(iVar4 + 0x2814) = 0;
  *(uint *)(iVar4 + 0xfc) = 1;
  *(uint *)(iVar4 + 0x3434) = 0x3f333333;
  *(uint *)(iVar4 + 0x113c4) = 0;
  *(uint *)(iVar4 + 0x1134c) = 0x40200000;
  *(uint *)(iVar4 + 0x11380) = 0;
  *(uint *)(iVar4 + 0x11384) = 0;
  pcVar6 = (char *)(iVar4 + 0x113d4);
  *(uint *)(iVar4 + 0x11388) = 1;
  uVar3 = _DAT_005ff53c;
  *(uint *)(iVar4 + 0x1138c) = 1;
  pcVar5 = "flinch";
  *(uint *)(iVar4 + 0x11418) = 1;
  *(uint *)(iVar4 + 0x11370) = uVar3;
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  *(uint *)(iVar4 + 0x11858) = 0;
  FUN_005a3fc0(iVar4,0,0);
  iVar1 = iVar4 + 0x10af8;
  *(uint *)(iVar4 + 0x11394) = _DAT_005ff540;
  FUN_0059d7f0(iVar1,"ChaseComplete","VanishAttack");
  FUN_0059d990(iVar1,"AlertInvisible");
  FUN_0059dc80(iVar1);
  *(uint *)(iVar4 + 0x11430) = 0;
  *(uint *)(iVar4 + 0x280c) = 1;
  *(uint *)(iVar4 + 0x11348) = 1;
  return iVar4;
}
