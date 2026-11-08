// Name: FUN_00420ea0
// Address: 00420ea0
// Address Range: [[00420ea0, 00421051]]
// Convention: unknown
// Signature: int FUN_00420ea0(undefined4 param_1)

#include "nocturne.h"

int FUN_00420ea0(uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = FUN_00488fd0(param_1);
  iVar2 = FUN_005a30d7(iVar2 + 0xd05c,400,0x5dcd30);
  iVar2 = FUN_005a30d7(iVar2 + 0x6404,1,0x5dcd50);
  *(byte ***)(iVar2 + -0x1330c) = &PTR_FUN_005dcbe4;
  *(uint *)(iVar2 + -0x640c) = 0;
  uVar3 = FUN_0040cea0(0x1e,0x2d);
  *(uint *)(iVar2 + -0x6408) = uVar3;
  FUN_005a28f0(iVar2 + -0x6404,0,0x6400);
  *(uint *)(iVar2 + -4) = 0;
  FUN_004625f0(iVar2,0x5b7705);
  FUN_0054eae0(iVar2 + -0x13308,0x5b7710);
  *(uint *)(iVar2 + 0x3bc) = 0;
  pcVar4 = (char *)0x5b7719;
  *(uint *)(iVar2 + 0x3c0) = 0;
  *(uint *)(iVar2 + 0x3f8) = 0;
  pcVar5 = (char *)(iVar2 + 0x88dc);
  *(uint *)(iVar2 + 0x88cc) = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = (char *)0x5b771e;
  pcVar5 = (char *)(iVar2 + 0x8940);
  *(uint *)(iVar2 + 0x88d0) = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "false";
  pcVar5 = (char *)(iVar2 + 0x89a4);
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x101f4) = 0x401f5c29;
  *(uint *)(iVar2 + -0x101f0) = 0x40200000;
  *(uint *)(iVar2 + -0x101e4) = 0x3fa66666;
  *(uint *)(iVar2 + -0x101e0) = 0x3fc00000;
  *(uint *)(iVar2 + 0x8a34) = 0;
  *(uint *)(iVar2 + 0x88d4) = 0;
  *(uint *)(iVar2 + 0x88d8) = 0x41f00000;
  *(uint *)(iVar2 + 0x8a3c) = 0;
  *(uint *)(iVar2 + 0x8a40) = 0;
  return iVar2 + -0x13460;
}
