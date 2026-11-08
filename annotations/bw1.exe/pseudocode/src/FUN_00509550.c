// Name: FUN_00509550
// Address: 00509550
// Address Range: [[00509550, 0050969e]]
// Convention: unknown
// Signature: int FUN_00509550(undefined4 param_1)

#include "nocturne.h"

int FUN_00509550(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_005ad4c0(param_1);
  *(uint *)(iVar2 + 0x154) = 0x6037f4;
  FUN_00468950(iVar2 + 0x158,"melee.kfm");
  *(uint *)(iVar2 + 0x2e0) = 7;
  *(uint *)(iVar2 + 0x59c) = 0xffffffff;
  *(uint *)(iVar2 + 0x568) = 0;
  *(uint *)(iVar2 + 0x2d8) = 0;
  *(uint *)(iVar2 + 0x2dc) = 0;
  *(uint *)(iVar2 + 0x2e4) = 0;
  *(uint *)(iVar2 + 0x2e8) = 0x40a00000;
  *(uint *)(iVar2 + 0x2ec) = 0;
  *(uint *)(iVar2 + 0x2f0) = 0;
  *(uint *)(iVar2 + 0x578) = 1;
  *(uint *)(iVar2 + 0x57c) = 0x41200000;
  *(uint *)(iVar2 + 0x580) = 0x41700000;
  *(uint *)(iVar2 + 0x584) = 0x3f000000;
  *(uint *)(iVar2 + 0x588) = 0;
  pcVar3 = "shovel?.wav";
  *(uint *)(iVar2 + 0x590) = 0;
  *(uint *)(iVar2 + 0x594) = 0;
  pcVar4 = (char *)(iVar2 + 0x5a0);
  *(uint *)(iVar2 + 0x59c) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "shvl-f?.wav";
  pcVar4 = (char *)(iVar2 + 0x604);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "shvl-s?.wav";
  pcVar4 = (char *)(iVar2 + 0x668);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return iVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return iVar2;
}
