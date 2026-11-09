// Name: core_dest.cpp_FUN_00459410
// Address: 00459410
// Address Range: [[00459410, 00459493]]
// Convention: unknown
// Signature: void core_dest_cpp_FUN_00459410(int param_1)

#include "nocturne.h"

void core_dest_cpp_FUN_00459410(int param_1)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x158);
  if (iVar1 == 0) {
    uStack_4c = 0xbf800000;
    uStack_54 = 0xbf800000;
    uStack_50 = 0xbdcccccd;
    uStack_48 = 0x3f800000;
    iVar1 = 6;
    uStack_44 = 0x40066666;
    uStack_40 = 0x3f800000;
    puVar2 = &uStack_54;
    puVar3 = auStack_3c;
  }
  else {
    puVar3 = auStack_3c;
    (**(code **)(*(int *)(iVar1 + 0x154) + 0x1c))(iVar1);
    iVar1 = 6;
    puVar2 = auStack_24;
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar3 = auStack_3c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
  }
  return;
}
