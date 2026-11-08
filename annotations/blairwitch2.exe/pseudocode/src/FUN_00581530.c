// Name: FUN_00581530
// Address: 00581530
// Address Range: [[00581530, 0058165f]]
// Convention: unknown
// Signature: int FUN_00581530(undefined4 param_1)

#include "nocturne.h"

int FUN_00581530(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00487db0(param_1);
  iVar1 = FUN_00544cd0(iVar1 + 0x10af8);
  iVar1 = FUN_005adda0(iVar1 + 0x22b4);
  iVar1 = FUN_005adda0(iVar1 + 0x3ab30);
  iVar1 = FUN_005adda0(iVar1 + 0x3ab30);
  iVar1 = FUN_005b6e60(iVar1 + 0x3ab34);
  *(uint *)(iVar1 + -0xc2c90) = 0x5fd844;
  FUN_005478b0(iVar1 + -0xc2c8c,0x5ed991);
  FUN_005478b0(iVar1 + -0xb2448,"batboss.dfm");
  *(uint *)(iVar1 + -0xbfb10) = 0x40000000;
  *(uint *)(iVar1 + -0xbfb0c) = 0x40400000;
  *(uint *)(iVar1 + -0xbfb08) = 0x42480000;
  *(uint *)(iVar1 + -0xbfb04) = 0x42c80000;
  *(uint *)(iVar1 + 0xc30) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + 0xc2c) = 0;
  *(uint *)(iVar1 + 0xc48) = 0;
  *(uint *)(iVar1 + 0xc4c) = 0;
  *(uint *)(iVar1 + 0xc50) = 0;
  *(uint *)(iVar1 + 0xc54) = 0;
  *(uint *)(iVar1 + 0xc44) = 0;
  *(uint *)(iVar1 + 0xc58) = 0;
  *(uint *)(iVar1 + 0xc34) = 0x41200000;
  *(uint *)(iVar1 + 0xc40) = 1;
  *(uint *)(iVar1 + -0xc0714) = 0;
  return iVar1 + -0xc2f40;
}
