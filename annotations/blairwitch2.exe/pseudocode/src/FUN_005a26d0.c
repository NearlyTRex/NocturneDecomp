// Name: FUN_005a26d0
// Address: 005a26d0
// Address Range: [[005a26d0, 005a281b]]
// Convention: unknown
// Signature: int FUN_005a26d0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005a26d0(uint param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar5 = FUN_0059e3b0(param_1);
  *(uint *)(iVar5 + 0x2b0) = 0x5ff184;
  FUN_005478b0(iVar5 + 0x2b4,"twigzombie.dfm");
  *(uint *)(iVar5 + 0x1134c) = 0x3f400000;
  *(uint *)(iVar5 + 0x11380) = 0;
  *(uint *)(iVar5 + 0x11384) = 0;
  pcVar7 = (char *)(iVar5 + 0x113d4);
  *(uint *)(iVar5 + 0x11388) = 1;
  uVar3 = _DAT_005ff16c;
  *(uint *)(iVar5 + 0x1138c) = 6;
  uVar4 = _DAT_005ff170;
  *(uint *)(iVar5 + 0x11398) = 0x4479c000;
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
  FUN_005a28a0(iVar5,0,0);
  iVar1 = iVar5 + 0x10af8;
  FUN_0059d7f0(iVar1,"ChaseComplete","Attacking");
  FUN_0059d990(iVar1,"Alert");
  FUN_0059dc80(iVar1);
  pcVar7 = (char *)(iVar5 + 0x11444);
  pcVar6 = "twighit0?.wav";
  do {
    cVar2 = *pcVar6;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  pcVar6 = "twigloop01.wav";
  pcVar7 = (char *)(iVar5 + 0x11741);
  do {
    cVar2 = *pcVar6;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  *(uint *)(iVar5 + 0x2ac) = 0;
  return iVar5;
}
