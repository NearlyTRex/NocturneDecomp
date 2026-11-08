// Name: FUN_004e4400
// Address: 004e4400
// Address Range: [[004e4400, 004e44ca]]
// Convention: unknown
// Signature: void FUN_004e4400(void)

#include "nocturne.h"

void FUN_004e4400(void)

{
  byte uVar1;
  uint uVar2;
  byte auStack_10c [256];
  
  do {
    FUN_00560d70();
    FUN_00401fe0("Blair Witch 3 Debug/editor Menu",0,0);
    FUN_00401fe0("1. Play a mission",0,0x16);
    FUN_00401fe0("Z. Display memory usage info",0,0xbb);
    FUN_0057a8a0();
    FUN_004032b0();
    uVar1 = FUN_00580790();
    uVar2 = FUN_005a4120(uVar1);
    if (uVar2 < 0x34) {
      if ((0x30 < uVar2) && (uVar2 < 0x32)) {
        FUN_004be8d0(0x01D2130C,0);
      }
    }
    else if ((((0x34 < uVar2) && (0x40 < uVar2)) && (0x41 < uVar2)) && (uVar2 == 0x5a)) {
      FUN_004819e0(0x01C5B0E4,auStack_10c);
      FUN_0047ce80(0x01C5B0E4,auStack_10c);
    }
  } while (uVar2 != 0x1b);
  FUN_004032b0();
  return;
}
