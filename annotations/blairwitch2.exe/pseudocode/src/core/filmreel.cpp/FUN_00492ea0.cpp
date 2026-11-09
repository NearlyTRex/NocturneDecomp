// Name: core_filmreel.cpp_FUN_00492ea0
// Address: 00492ea0
// Address Range: [[00492ea0, 00492eeb]]
// Convention: unknown
// Signature: void core_filmreel_cpp_FUN_00492ea0(void)

#include "nocturne.h"

void core_filmreel_cpp_FUN_00492ea0(void)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint auStack_24 [6];
  
  auStack_24[1] = 0;
  auStack_24[2] = 0xbdcccccd;
  auStack_24[3] = 0x3f800000;
  auStack_24[4] = 0x40400000;
  auStack_24[5] = 0x3dcccccd;
  auStack_24[0] = 0xbf800000;
  puVar2 = auStack_24;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
