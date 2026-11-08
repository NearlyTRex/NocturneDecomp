// Name: FUN_005776f0
// Address: 005776f0
// Address Range: [[005776f0, 00577839]]
// Convention: unknown
// Signature: int FUN_005776f0(undefined4 param_1)

#include "nocturne.h"

int FUN_005776f0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408790(param_1);
  *(byte **)(iVar2 + 0x2b0) = &DAT_005fd224;
  *(uint *)(iVar2 + 700) = 0x40a00000;
  *(uint *)(iVar2 + 0x2c0) = 0x41100000;
  *(uint *)(iVar2 + 0x2c4) = 0x40a00000;
  *(uint *)(iVar2 + 0x2cc) = 0;
  *(uint *)(iVar2 + 0x2b8) = 0;
  pcVar3 = "nobody";
  *(byte *)(iVar2 + 0x380) = 0;
  *(byte *)(iVar2 + 0x3e4) = 0;
  *(uint *)(iVar2 + 0x2c8) = 0;
  pcVar4 = (char *)(iVar2 + 0x2d4);
  *(uint *)(iVar2 + 0x2d0) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "CDemonActor";
  pcVar4 = (char *)(iVar2 + 0x324);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x374) = 0;
  *(uint *)(iVar2 + 0x378) = 0x3e800000;
  *(uint *)(iVar2 + 0x37c) = 0x3f800000;
  *(uint *)(iVar2 + 0x448) = 0;
  *(uint *)(iVar2 + 0x44c) = 0;
  *(uint *)(iVar2 + 0x450) = 1;
  *(uint *)(iVar2 + 0x454) = 0x42c80000;
  *(uint *)(iVar2 + 100) = 0x96;
  *(uint *)(iVar2 + 0x4c8) = 0;
  *(uint *)(iVar2 + 0x45c) = 0;
  *(uint *)(iVar2 + 0x2b4) = 0x47c34ff3;
  *(uint *)(iVar2 + 0x460) = 1;
  *(byte *)(iVar2 + 0x464) = 0;
  *(uint *)(iVar2 + 0x4cc) = 0;
  *(int *)(iVar2 + 0x458) = iVar2;
  return iVar2;
}
