// Name: core_marquee.cpp_FUN_005071d0
// Address: 005071d0
// Address Range: [[005071d0, 00507244]]
// Convention: unknown
// Signature: void core_marquee_cpp_FUN_005071d0(int param_1)

#include "nocturne.h"

void core_marquee_cpp_FUN_005071d0(int param_1)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint auStack_1c [4];
  uint uStack_c;
  uint uStack_8;
  
  if (auStack_1c != (uint *)(param_1 + 0x184)) {
    auStack_1c[0] = *(uint *)(param_1 + 0x184);
    auStack_1c[1] = *(uint *)(param_1 + 0x188);
    auStack_1c[2] = *(uint *)(param_1 + 0x18c);
  }
  if (auStack_1c + 3 == (uint *)(param_1 + 400)) {
    puVar2 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *unaff_ESI = *puVar2;
      puVar2 = puVar2 + 1;
      unaff_ESI = unaff_ESI + 1;
    }
    return;
  }
  auStack_1c[3] = *(uint *)(param_1 + 400);
  uStack_c = *(uint *)(param_1 + 0x194);
  uStack_8 = *(uint *)(param_1 + 0x198);
  puVar2 = auStack_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
