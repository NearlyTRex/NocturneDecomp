// Name: FUN_005031c0
// Address: 005031c0
// Address Range: [[005031c0, 0050328f]]
// Convention: unknown
// Signature: void FUN_005031c0(void)

#include "nocturne.h"

void FUN_005031c0(void)

{
  byte uVar1;
  uint uVar2;
  byte auStack_10c [256];
  
  FUN_004032b0();
  do {
    FUN_0057dc40();
    FUN_00401fe0("Nocturne(R) Debug/editor Menu",0,0);
    FUN_00401fe0("1. Play a mission",0,0x16);
    FUN_00401fe0("Z. Display memory usage info",0,0xbb);
    FUN_005acff0();
    FUN_004032b0();
    uVar1 = FUN_005b2510();
    uVar2 = FUN_005c12b0(uVar1);
    if (uVar2 < 0x34) {
      if ((0x30 < uVar2) && (uVar2 < 0x32)) {
        FUN_004d7250(0x01CCF390,0);
      }
    }
    else if ((((0x34 < uVar2) && (0x40 < uVar2)) && (0x41 < uVar2)) && (uVar2 == 0x5a)) {
      FUN_00498e40(0x01C3EB54,auStack_10c);
      FUN_004942e0(0x01C3EB54,auStack_10c);
    }
  } while (uVar2 != 0x1b);
  FUN_004032b0();
  return;
}
