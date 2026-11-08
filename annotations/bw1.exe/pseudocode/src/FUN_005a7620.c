// Name: FUN_005a7620
// Address: 005a7620
// Address Range: [[005a7620, 005a786a]]
// Convention: unknown
// Signature: int FUN_005a7620(undefined4 param_1)

#include "nocturne.h"

int FUN_005a7620(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004085c0(param_1);
  iVar2 = FUN_00468860(iVar2 + 0x158);
  iVar2 = FUN_005c0357(iVar2 + 0x17c,4,0x5fd3b0);
  iVar2 = FUN_005c0357(iVar2 + 0x668,4,0x607a40);
  iVar2 = FUN_00447d10(iVar2 + 0x6e4);
  *(uint *)(iVar2 + -0xecc) = 0x607964;
  FUN_00468950(iVar2 + -0xec8,0x5f8f84);
  *(uint *)(iVar2 + -0x6e8) = 4;
  FUN_00468950(iVar2 + -0x6d0,0x5f8f8f);
  FUN_00468950(iVar2 + -0x368,0x5f8f9b);
  FUN_00468950(iVar2 + -0x51c,0x5f8fa7);
  FUN_00468950(iVar2 + -0x1b4,0x5f8fb3);
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
  return iVar2 + -0x1020;
}
