// Name: FUN_005839f0
// Address: 005839f0
// Address Range: [[005839f0, 00583c3a]]
// Convention: unknown
// Signature: int FUN_005839f0(undefined4 param_1)

#include "nocturne.h"

int FUN_005839f0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408790(param_1);
  iVar2 = FUN_0044fc80(iVar2 + 0x2b4);
  iVar2 = FUN_005b7f5f(iVar2 + 0x17c,4,0x5f3fc0);
  iVar2 = FUN_005b7f5f(iVar2 + 0x668,4,0x5fdae0);
  iVar2 = FUN_00438a50(iVar2 + 0x6e4);
  *(uint *)(iVar2 + -0xecc) = 0x5fd9f4;
  FUN_0044fd70(iVar2 + -0xec8,0x5edc28);
  *(uint *)(iVar2 + -0x6e8) = 4;
  FUN_0044fd70(iVar2 + -0x6d0,0x5edc33);
  FUN_0044fd70(iVar2 + -0x368,0x5edc3f);
  FUN_0044fd70(iVar2 + -0x51c,0x5edc4b);
  FUN_0044fd70(iVar2 + -0x1b4,0x5edc57);
  *(uint *)(iVar2 + -0x6e4) = 0xc0200000;
  *(uint *)(iVar2 + -0x6e0) = 0xc0200000;
  *(uint *)(iVar2 + -0x6dc) = 0x40a00000;
  *(uint *)(iVar2 + -0x6d8) = 0x3fa00000;
  *(uint *)(iVar2 + -0x6d4) = 0x3e800000;
  *(uint *)(iVar2 + -0x530) = 0x40200000;
  *(uint *)(iVar2 + -0x52c) = 0xc0200000;
  *(uint *)(iVar2 + -0x528) = 0x40a00000;
  *(uint *)(iVar2 + -0x524) = 0x3fa00000;
  *(uint *)(iVar2 + -0x520) = 0x3e800000;
  *(uint *)(iVar2 + -0x37c) = 0xc0200000;
  *(uint *)(iVar2 + -0x378) = 0xc0200000;
  *(uint *)(iVar2 + -0x374) = 0xc0900000;
  *(uint *)(iVar2 + -0x370) = 0x3fa00000;
  *(uint *)(iVar2 + -0x36c) = 0x3e800000;
  *(uint *)(iVar2 + -0x1c8) = 0x40200000;
  *(uint *)(iVar2 + -0x1c4) = 0xc0200000;
  *(uint *)(iVar2 + -0x1c0) = 0xc0900000;
  *(uint *)(iVar2 + -0x1bc) = 0x3fa00000;
  *(uint *)(iVar2 + -0x1b8) = 0x3e800000;
  *(uint *)(iVar2 + -0x708) = 0x44fa0000;
  *(uint *)(iVar2 + -0x748) = 0;
  *(uint *)(iVar2 + -0x74c) = *(uint *)(iVar2 + -0x748);
  *(uint *)(iVar2 + -0x750) = *(uint *)(iVar2 + -0x74c);
  *(uint *)(iVar2 + -0x754) = 0;
  *(uint *)(iVar2 + -0x758) = *(uint *)(iVar2 + -0x754);
  *(uint *)(iVar2 + -0x75c) = *(uint *)(iVar2 + -0x758);
  *(uint *)(iVar2 + -0x724) = 0;
  pcVar3 = "chicpath.pth";
  *(uint *)(iVar2 + -0x728) = *(uint *)(iVar2 + -0x724);
  *(uint *)(iVar2 + -0x72c) = *(uint *)(iVar2 + -0x728);
  *(uint *)(iVar2 + 0xc) = 0;
  pcVar4 = (char *)(iVar2 + 0x14);
  *(uint *)(iVar2 + 0x10) = 0x42c80000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x4c) = 0;
  *(uint *)(iVar2 + 0x50) = 0;
  *(uint *)(iVar2 + 0x54) = 0;
  return iVar2 + -0x117c;
}
