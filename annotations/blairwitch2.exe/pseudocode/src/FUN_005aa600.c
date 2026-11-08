// Name: FUN_005aa600
// Address: 005aa600
// Address Range: [[005aa600, 005aa7d8]]
// Convention: unknown
// Signature: int FUN_005aa600(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005aa600(uint param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar3 = FUN_0059e3b0(param_1);
  *(byte **)(iVar3 + 0x2b0) = &DAT_00600a84;
  FUN_005478b0(iVar3 + 0x2b4,0x5f0af3);
  iVar1 = iVar3 + 0x2d0c;
  FUN_005b15c0(iVar1,"hagdress.cth");
  FUN_005b15c0(iVar1,"haghair.cth");
  FUN_005b15c0(iVar1,"hagshal.cth");
  *(uint *)(iVar3 + 0x3434) = 0x3f000000;
  *(uint *)(iVar3 + 0x1134c) = 0x40200000;
  *(uint *)(iVar3 + 0xfc) = 1;
  *(uint *)(iVar3 + 0x113c4) = 0x3f800000;
  *(uint *)(iVar3 + 0x2a8) = 0x3dcccccd;
  *(uint *)(iVar3 + 0x11380) = 0;
  *(uint *)(iVar3 + 0x11384) = 0;
  *(uint *)(iVar3 + 0x11388) = 1;
  *(uint *)(iVar3 + 0x1138c) = 1;
  *(uint *)(iVar3 + 0x11390) = 0;
  pcVar4 = "flinch";
  *(uint *)(iVar3 + 0x11858) = 0;
  FUN_005aa970(iVar3,0,0);
  pcVar5 = (char *)(iVar3 + 0x113d4);
  *(uint *)(iVar3 + 0x11418) = 1;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  iVar1 = iVar3 + 0x10af8;
  FUN_0059d7f0(iVar1,"ChaseComplete","MeleeAttack");
  *(uint *)(iVar3 + 0x11394) = _DAT_00600a6c;
  FUN_0059d990(iVar1,"Alert");
  pcVar5 = (char *)(iVar3 + 0x11444);
  FUN_0059dc80(iVar1);
  pcVar4 = (char *)0x5f0b47;
  *(uint *)(iVar3 + 0x11348) = 1;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  pcVar4 = "hagdeath0?.wav";
  pcVar5 = (char *)(iVar3 + 0x11543);
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  pcVar4 = (char *)0x5f0b63;
  pcVar5 = (char *)(iVar3 + 0x11741);
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  *(uint *)(iVar3 + 0x11844) = 0x40c00000;
  *(uint *)(iVar3 + 0x1185c) = 0;
  return iVar3;
}
