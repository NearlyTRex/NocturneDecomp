// Name: FUN_005a1b40
// Address: 005a1b40
// Address Range: [[005a1b40, 005a1cbd]]
// Convention: unknown
// Signature: int FUN_005a1b40(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005a1b40(uint param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar5 = FUN_0059e3b0(param_1);
  *(byte **)(iVar5 + 0x2b0) = &DAT_005fefa4;
  FUN_005478b0(iVar5 + 0x2b4,"conzombie_david.dfm");
  *(uint *)(iVar5 + 0x3434) = 0x3f333333;
  *(uint *)(iVar5 + 0xfc) = 1;
  *(uint *)(iVar5 + 0x2814) = 0;
  *(uint *)(iVar5 + 0x113c4) = 0;
  *(uint *)(iVar5 + 0x1134c) = 0x40200000;
  *(uint *)(iVar5 + 0x11380) = 0;
  pcVar7 = (char *)(iVar5 + 0x113d4);
  *(uint *)(iVar5 + 0x11384) = 0;
  uVar3 = _DAT_005fef8c;
  *(uint *)(iVar5 + 0x11388) = 1;
  uVar4 = _DAT_005fef90;
  *(uint *)(iVar5 + 0x1138c) = 1;
  pcVar6 = "flinch";
  *(uint *)(iVar5 + 0x11418) = 1;
  *(uint *)(iVar5 + 0x11370) = uVar3;
  *(uint *)(iVar5 + 0x11394) = uVar4;
  do {
    cVar2 = *pcVar6;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  FUN_005a1e10(iVar5,0,0);
  iVar1 = iVar5 + 0x10af8;
  FUN_0059d7f0(iVar1,"ChaseComplete","RangeAttack");
  FUN_0059d990(iVar1,"AlertInvisible");
  pcVar7 = (char *)(iVar5 + 0x11444);
  FUN_0059dc80(iVar1);
  *(uint *)(iVar5 + 0x11430) = 0;
  *(uint *)(iVar5 + 0x280c) = 1;
  pcVar6 = "confedhit0?.wav";
  *(uint *)(iVar5 + 0x11348) = 1;
  do {
    cVar2 = *pcVar6;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  pcVar6 = "uniondeath0?.wav";
  pcVar7 = (char *)(iVar5 + 0x11543);
  do {
    cVar2 = *pcVar6;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') {
      return iVar5;
    }
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  return iVar5;
}
