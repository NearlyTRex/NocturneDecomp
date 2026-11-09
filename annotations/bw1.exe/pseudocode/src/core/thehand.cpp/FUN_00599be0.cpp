// Name: core_thehand.cpp_FUN_00599be0
// Address: 00599be0
// Address Range: [[00599be0, 00599c1e]]
// Convention: unknown
// Signature: void core_thehand_cpp_FUN_00599be0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_thehand_cpp_FUN_00599be0(int param_1)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  uint auStack_34 [12];
  
  puVar2 = (uint *)(_DAT_02c8ad48 * 0x30 + param_1 + 0xfd8);
  puVar3 = auStack_34;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = auStack_34;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
