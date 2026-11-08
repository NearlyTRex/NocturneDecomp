// Name: FUN_005312c0
// Address: 005312c0
// Address Range: [[005312c0, 0053139f]]
// Convention: unknown
// Signature: undefined4 FUN_005312c0(int param_1)

#include "nocturne.h"

uint FUN_005312c0(int param_1)

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
    FUN_005bfb40(local_1c,"crsr%d",iVar2);
    FUN_0040d220(iVar3,local_1c,0x36,0x37);
    iVar3 = iVar3 + 0x14;
  } while (iVar2 < 8);
  iVar3 = param_1 + 0xa0;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    FUN_005bfb40(local_3c,"flame%d",iVar2);
    FUN_0040d220(iVar3,local_3c,0x36,0x37);
    iVar3 = iVar3 + 0x14;
  } while (iVar2 < 7);
  iVar3 = param_1 + 300;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    FUN_005bfb40(local_2c,"crsrskll%d",iVar2);
    FUN_0040d220(iVar3,local_2c,0x36,0x37);
    iVar3 = iVar3 + 0x14;
  } while (iVar2 < 7);
  iVar3 = param_1 + 0x1b8;
  do {
    uVar1 = FUN_0040d220(iVar3,"crsrskll7",0x36,0x37);
    iVar3 = iVar3 + 0x14;
  } while (iVar3 != param_1 + 600);
  return uVar1;
}
