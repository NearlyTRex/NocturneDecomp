// Name: FUN_0054e5a0
// Address: 0054e5a0
// Address Range: [[0054e5a0, 0054e7ea]]
// Convention: unknown
// Signature: int FUN_0054e5a0(undefined4 param_1)

#include "nocturne.h"

int FUN_0054e5a0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00409d30(param_1);
  iVar2 = FUN_00454490(iVar2 + 0x150);
  iVar2 = FUN_005644a7(iVar2 + 0x17c,4,&DAT_0059b030);
  iVar2 = FUN_005644a7(iVar2 + 0x668,4,&DAT_005a3d20);
  iVar2 = FUN_0043b5d0(iVar2 + 0x6e4);
  *(byte ***)(iVar2 + -0xecc) = &PTR_FUN_005a3c44;
  FUN_00454580(iVar2 + -0xec8,"32ford.kfm");
  *(uint *)(iVar2 + -0x6e8) = 4;
  FUN_00454580(iVar2 + -0x6d0,"32ltire.kfm");
  FUN_00454580(iVar2 + -0x368,"32ltire.kfm");
  FUN_00454580(iVar2 + -0x51c,"32rtire.kfm");
  FUN_00454580(iVar2 + -0x1b4,"32rtire.kfm");
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
  return iVar2 + -0x1018;
}
