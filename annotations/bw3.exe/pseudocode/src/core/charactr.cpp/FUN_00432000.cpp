// Name: core_charactr.cpp_FUN_00432000
// Address: 00432000
// Address Range: [[00432000, 0043205e]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00432000(int param_1,int param_2)

#include "nocturne.h"

void core_charactr_cpp_FUN_00432000(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  int *piVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_38 [12];
  
  bVar4 = 0;
  piVar2 = (int *)(param_1 + 0x25a8 + param_2 * 0x78);
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(piVar2 + 3,param_1 + 0xfd8 + *piVar2 * 0x30);
  puVar3 = auStack_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
  }
  return;
}
