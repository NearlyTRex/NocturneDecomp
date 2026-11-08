// Name: FUN_004e45e0
// Address: 004e45e0
// Address Range: [[004e45e0, 004e46af]]
// Convention: unknown
// Signature: void FUN_004e45e0(void)

#include "nocturne.h"

void FUN_004e45e0(void)

{
  byte uVar1;
  uint uVar2;
  byte auStack_10c [256];
  
  FUN_004032b0();
  do {
    FUN_0055b1f0();
    FUN_00401fe0("Nocturne(R) Debug/editor Menu",0,0);
    FUN_00401fe0("1. Play a mission",0,0x16);
    FUN_00401fe0("Z. Display memory usage info",0,0xbb);
    FUN_00589560();
    FUN_004032b0();
    uVar1 = FUN_0058ead0();
    uVar2 = FUN_005b8e40(uVar1);
    if (uVar2 < 0x34) {
      if ((0x30 < uVar2) && (uVar2 < 0x32)) {
        FUN_004bc840(0x01CB6900,0);
      }
    }
    else if ((((0x34 < uVar2) && (0x40 < uVar2)) && (0x41 < uVar2)) && (uVar2 == 0x5a)) {
      FUN_004807e0(0x01C25594,auStack_10c);
      FUN_0047bda0(0x01C25594,auStack_10c);
    }
  } while (uVar2 != 0x1b);
  FUN_004032b0();
  return;
}
