// Name: core_actor.cpp_FUN_00408b40
// Address: 00408b40
// Address Range: [[00408b40, 00408b7d]]
// Convention: unknown
// Signature: void core_actor_cpp_FUN_00408b40(void)

#include "nocturne.h"

void core_actor_cpp_FUN_00408b40(void)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint auStack_1c [6];
  
  auStack_1c[1] = 0;
  auStack_1c[3] = 0x40800000;
  auStack_1c[4] = 0x41000000;
  auStack_1c[5] = 0x40800000;
  auStack_1c[2] = 0xc0800000;
  auStack_1c[0] = 0xc0800000;
  puVar2 = auStack_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
