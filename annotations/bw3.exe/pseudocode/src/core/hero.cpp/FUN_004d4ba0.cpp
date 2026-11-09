// Name: core_hero.cpp_FUN_004d4ba0
// Address: 004d4ba0
// Address Range: [[004d4ba0, 004d4bdd]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004d4ba0(void)

#include "nocturne.h"

void core_hero_cpp_FUN_004d4ba0(void)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint auStack_1c [6];
  
  auStack_1c[1] = 0;
  auStack_1c[3] = 0x3f800000;
  auStack_1c[4] = 0x40c00000;
  auStack_1c[5] = 0x3f800000;
  auStack_1c[2] = 0xbf800000;
  auStack_1c[0] = 0xbf800000;
  puVar2 = auStack_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
