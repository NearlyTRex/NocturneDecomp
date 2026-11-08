// Name: FUN_005a4a80
// Address: 005a4a80
// Address Range: [[005a4a80, 005a4bf3]]
// Convention: unknown
// Signature: int FUN_005a4a80(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005a4a80(uint param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar5 = FUN_005a47b0(param_1);
  *(uint *)(iVar5 + 0x2b0) = 0x5ff904;
  FUN_005478b0(iVar5 + 0x2b4,"union_brett.dfm");
  *(uint *)(iVar5 + 0x3434) = 0x3f800000;
  *(uint *)(iVar5 + 0x1134c) = 0x40200000;
  *(uint *)(iVar5 + 0x11850) = 0;
  *(uint *)(iVar5 + 0x11854) = 999;
  *(uint *)(iVar5 + 0x11860) = 0;
  *(uint *)(iVar5 + 0x11380) = 0;
  *(uint *)(iVar5 + 0x11384) = 0;
  *(uint *)(iVar5 + 0x11388) = 1;
  pcVar7 = (char *)(iVar5 + 0x113d4);
  *(uint *)(iVar5 + 0x1138c) = 4;
  uVar3 = _DAT_005ff8ec;
  *(uint *)(iVar5 + 0x11390) = 0;
  uVar4 = _DAT_005ff8f0;
  *(uint *)(iVar5 + 0x11398) = 0x40a00000;
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
  FUN_005a4c50(iVar5,0,0);
  iVar1 = iVar5 + 0x10af8;
  FUN_0059d7f0(iVar1,"ChaseComplete","RangeAttack");
  FUN_0059d990(iVar1,"Alert");
  FUN_0059dc80(iVar1);
  pcVar7 = (char *)(iVar5 + 0x11444);
  pcVar6 = "unionhit0?.wav";
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
