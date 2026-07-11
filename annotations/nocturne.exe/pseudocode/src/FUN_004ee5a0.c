// Name: FUN_004ee5a0
// Address: 004ee5a0
// Address Range: [[004ee5a0, 004ee67f]]
// Convention: unknown
// Signature: undefined4 FUN_004ee5a0(int param_1)

#include "nocturne.h"

uint FUN_004ee5a0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte local_3c [16];
  byte local_2c [16];
  byte local_1c [16];
  
  iVar2 = 0;
  iVar3 = param_1;
  do {
    iVar2 = iVar2 + 1;
    FUN_00563c90(local_1c,"crsr%d",iVar2);
    FUN_0040e3c0(iVar3,local_1c,0x36,0x37);
    iVar3 = iVar3 + 0x14;
  } while (iVar2 < 8);
  iVar3 = param_1 + 0xa0;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    FUN_00563c90(local_3c,"flame%d",iVar2);
    FUN_0040e3c0(iVar3,local_3c,0x36,0x37);
    iVar3 = iVar3 + 0x14;
  } while (iVar2 < 7);
  iVar3 = param_1 + 300;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    FUN_00563c90(local_2c,"crsrskll%d",iVar2);
    FUN_0040e3c0(iVar3,local_2c,0x36,0x37);
    iVar3 = iVar3 + 0x14;
  } while (iVar2 < 7);
  iVar3 = param_1 + 0x1b8;
  do {
    uVar1 = FUN_0040e3c0(iVar3,"crsrskll7",0x36,0x37);
    iVar3 = iVar3 + 0x14;
  } while (iVar3 != param_1 + 600);
  return uVar1;
}
