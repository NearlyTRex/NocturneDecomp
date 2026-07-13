// Name: FUN_005494a0
// Address: 005494a0
// Address Range: [[005494a0, 005495e7]]
// Convention: unknown
// Signature: int FUN_005494a0(undefined4 param_1)

#include "nocturne.h"

int FUN_005494a0(uint param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  char *pcVar5;
  byte local_24 [12];
  uint local_18;
  uint local_14;
  uint local_10;
  
  iVar2 = FUN_00553d90(param_1);
  iVar2 = FUN_00454490(iVar2 + 0x57c);
  *(byte ***)(iVar2 + -0x430) = &PTR_FUN_005a37b4;
  FUN_00454580(iVar2 + -0x42c,"gturret_head.kfm");
  FUN_00454580(iVar2,"gturret_tripod.kfm");
  *(uint *)(iVar2 + 0x17c) = 0;
  *(byte *)(iVar2 + 0x180) = 0;
  *(uint *)(iVar2 + 0x1e4) = 0x40400000;
  *(uint *)(iVar2 + 0x1e8) = 0x40c00000;
  *(uint *)(iVar2 + 0x1ec) = 0x40400000;
  *(uint *)(iVar2 + 0x1f0) = 0x3e4ccccd;
  *(uint *)(iVar2 + 500) = 0x41f00000;
  pcVar4 = "CCharacter";
  *(uint *)(iVar2 + 0x1f8) = 0;
  *(uint *)(iVar2 + -0x284) = 0;
  pcVar5 = (char *)(iVar2 + 0x200);
  *(uint *)(iVar2 + 0x1fc) = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x3f800000;
  puVar3 = (uint *)FUN_0040a240(iVar2 + -0x57c,local_24,&local_18);
  if ((uint *)(iVar2 + 0x2c8) != puVar3) {
    *(uint *)(iVar2 + 0x2c8) = *puVar3;
    *(uint *)(iVar2 + 0x2cc) = puVar3[1];
    *(uint *)(iVar2 + 0x2d0) = puVar3[2];
  }
  *(uint *)(iVar2 + 0x2d8) = 0;
  *(uint *)(iVar2 + 0x2e8) = 0;
  *(uint *)(iVar2 + 0x2d4) = 0;
  return iVar2 + -0x57c;
}
