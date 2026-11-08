// Name: FUN_004d0a00
// Address: 004d0a00
// Address Range: [[004d0a00, 004d0a3d]]
// Convention: unknown
// Signature: void FUN_004d0a00(void)

#include "nocturne.h"

void FUN_004d0a00(void)

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
