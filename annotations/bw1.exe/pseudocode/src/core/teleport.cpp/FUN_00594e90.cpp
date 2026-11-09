// Name: core_teleport.cpp_FUN_00594e90
// Address: 00594e90
// Address Range: [[00594e90, 00594ed0]]
// Convention: unknown
// Signature: void core_teleport_cpp_FUN_00594e90(void)

#include "nocturne.h"

void core_teleport_cpp_FUN_00594e90(void)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint auStack_1c [6];
  
  auStack_1c[1] = 0xbf800000;
  auStack_1c[3] = 0x40e00000;
  auStack_1c[4] = 0x41000000;
  auStack_1c[5] = 0x40e00000;
  auStack_1c[2] = 0xc0e00000;
  auStack_1c[0] = 0xc0e00000;
  puVar2 = auStack_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
