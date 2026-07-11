// Name: FUN_004c8510
// Address: 004c8510
// Address Range: [[004c8510, 004c85da]]
// Convention: unknown
// Signature: void FUN_004c8510(void)

#include "nocturne.h"

void FUN_004c8510(void)

{
  byte uVar1;
  uint uVar2;
  byte auStack_10c [256];
  
  do {
    FUN_0052ee70();
    FUN_00402600("Nocturne(R) Debug/editor Menu",0,0);
    FUN_00402600("1. Play a mission",0,0x16);
    FUN_00402600("Z. Display memory usage info",0,0xbb);
    FUN_00553910();
    FUN_00403f50();
    uVar1 = FUN_00558b00();
    uVar2 = FUN_00565e20(uVar1);
    if (uVar2 < 0x34) {
      if ((0x30 < uVar2) && (uVar2 < 0x32)) {
        FUN_004a4b50(0x01C775EC,0);
      }
    }
    else if ((((0x34 < uVar2) && (0x40 < uVar2)) && (0x41 < uVar2)) && (uVar2 == 0x5a)) {
      FUN_004736d0(0x01BCD074,auStack_10c);
      FUN_0046fe60(0x01BCD074,auStack_10c);
    }
  } while (uVar2 != 0x1b);
  FUN_00403f50();
  return;
}
