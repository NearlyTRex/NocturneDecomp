// Name: FUN_0059e3b0
// Address: 0059e3b0
// Address Range: [[0059e3b0, 0059e691]]
// Convention: unknown
// Signature: int FUN_0059e3b0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0059e3b0(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  uint auStack_18 [3];
  
  iVar6 = FUN_00487db0(param_1);
  iVar7 = FUN_0059d610(iVar6 + 0x10af8);
  iVar6 = iVar7 + -0x10af8;
  *(uint *)(iVar7 + -0x10848) = 0x5fec04;
  *(uint *)(iVar7 + 0x924) = 0;
  *(uint *)(iVar7 + 0x854) = 0x3f800000;
  *(uint *)(iVar7 + 0x8ac) = 0;
  *(uint *)(iVar7 + 0x8b0) = 0;
  *(uint *)(iVar7 + 0x8b4) = 2;
  *(uint *)(iVar7 + 0x888) = 0;
  *(uint *)(iVar7 + 0x88c) = 0;
  *(uint *)(iVar7 + 0x890) = 0;
  *(uint *)(iVar7 + 0x894) = 0;
  *(uint *)(iVar7 + 0x898) = 0xffffffff;
  *(uint *)(iVar7 + 0x89c) = 0x41200000;
  *(uint *)(iVar7 + 0x8a0) = 0x41f00000;
  *(uint *)(iVar7 + 0x8a8) = 0x41f00000;
  *(uint *)(iVar7 + 0x84c) = 0;
  *(uint *)(iVar7 + 0x8c4) = 0;
  *(uint *)(iVar7 + 0x8c8) = 0x3f800000;
  *(uint *)(iVar7 + 0x8d4) = 0;
  uVar3 = _DAT_005febe4;
  *(uint *)(iVar7 + 0x8d0) = 0x40a00000;
  uVar4 = _DAT_005febe8;
  *(uint *)(iVar7 + 0x8cc) = 0x3f800000;
  uVar5 = _DAT_005febec;
  *(uint *)(iVar7 + 0x8c0) = 0;
  uVar2 = _DAT_005febe0;
  *(uint *)(iVar7 + 0x8bc) = 0;
  uVar8 = _DAT_005febdc;
  *(uint *)(iVar7 + 0x920) = 0;
  *(uint *)(iVar7 + 0x878) = uVar3;
  *(uint *)(iVar7 + 0x87c) = uVar4;
  *(uint *)(iVar7 + 0x880) = uVar5;
  *(uint *)(iVar7 + -0xd6c0) = uVar2;
  *(uint *)(iVar7 + -0xd6bc) = uVar8;
  *(uint *)(iVar7 + 0x8d8) = 0;
  if (*(int *)(iVar7 + 0x920) != 0) {
    pcVar9 = (char *)0x5ef863;
    pcVar10 = (char *)(iVar7 + 0x8dc);
    do {
      cVar1 = *pcVar9;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
  }
  *(uint *)(iVar7 + 0x914) = 0x3e800000;
  *(uint *)(iVar7 + 0x918) = 0x3f000000;
  *(uint *)(iVar7 + 0x91c) = 0x3e800000;
  FUN_0059e8c0(iVar6,0,0);
  FUN_0059d6f0(iVar7,"ChaseComplete","Chasing");
  FUN_0059d8e0(iVar7,"Nothing");
  FUN_0059da70(iVar7);
  FUN_0059d990(iVar7,"Nothing");
  FUN_0059dc80(iVar7);
  uVar8 = FUN_0059db90(iVar7);
  FUN_0059d6f0(iVar7,"BurnComplete",uVar8);
  *(uint *)(iVar7 + 0x928) = 0;
  *(uint *)(iVar7 + 0x884) = 0xfffffc19;
  *(uint *)(iVar7 + 0x904) = 0xfffffc19;
  if ((uint *)(iVar7 + 0x92c) != auStack_18) {
    *(uint *)(iVar7 + 0x930) = 0;
    *(uint *)(iVar7 + 0x92c) = 0;
    *(uint *)(iVar7 + 0x934) = 0x3e4ccccd;
  }
  *(uint *)(iVar7 + 0x938) = 0;
  *(uint *)(iVar7 + 0x850) = 0;
  *(byte *)(iVar7 + 0x94c) = 0;
  *(byte *)(iVar7 + 0xa4b) = 0;
  *(byte *)(iVar7 + 0xb4a) = 0;
  *(byte *)(iVar7 + 0xc49) = 0;
  *(uint *)(iVar7 + 0xd4c) = 0x41200000;
  uVar8 = _DAT_005febf0;
  *(uint *)(iVar7 + 0xd48) = 0;
  pcVar9 = "bodyfall0?.wav";
  *(uint *)(iVar7 + 0xd54) = 0;
  pcVar10 = (char *)(iVar7 + 0xb4a);
  *(uint *)(iVar7 + 0x948) = uVar8;
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') {
      return iVar6;
    }
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  return iVar6;
}
