// Name: FUN_005a2fb0
// Address: 005a2fb0
// Address Range: [[005a2fb0, 005a313f]]
// Convention: unknown
// Signature: int FUN_005a2fb0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005a2fb0(uint param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = FUN_0059e3b0(param_1);
  *(uint *)(iVar4 + 0x2b0) = 0x5ff374;
  FUN_005478b0(iVar4 + 0x2b4,"schnell.dfm");
  *(uint *)(iVar4 + 0x3434) = 0x40000000;
  *(uint *)(iVar4 + 0x3444) = 0x40a00000;
  *(uint *)(iVar4 + 0x1134c) = 0x40200000;
  *(uint *)(iVar4 + 0x11380) = 0;
  *(uint *)(iVar4 + 0x11384) = 0;
  *(uint *)(iVar4 + 0x11388) = 1;
  *(uint *)(iVar4 + 0x1138c) = 2;
  *(uint *)(iVar4 + 0x11860) = 0;
  pcVar6 = (char *)(iVar4 + 0x113d4);
  *(uint *)(iVar4 + 0x11864) = 0;
  uVar3 = _DAT_005ff34c;
  *(uint *)(iVar4 + 0x11868) = 2;
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
  FUN_005a31c0(iVar4,0,0);
  uVar3 = _DAT_005ff350;
  *(uint *)(iVar4 + 0x11398) = 0;
  iVar1 = iVar4 + 0x10af8;
  *(uint *)(iVar4 + 0x1186c) = 0;
  *(uint *)(iVar4 + 0x11394) = uVar3;
  FUN_0059d990(iVar1,"Alert");
  FUN_0059dc80(iVar1);
  FUN_0059d7f0(iVar1,"ChaseComplete","MeleeAttack");
  pcVar6 = (char *)(iVar4 + 0x11444);
  pcVar5 = "schnellhit0?.wav";
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  pcVar5 = "schnellamb0?.wav";
  pcVar6 = (char *)(iVar4 + 0x11741);
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  *(uint *)(iVar4 + 0x11844) = 0x40a00000;
  *(uint *)(iVar4 + 0x2ac) = 0;
  return iVar4;
}
