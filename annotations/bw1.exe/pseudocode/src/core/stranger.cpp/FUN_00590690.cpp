// Name: core_stranger.cpp_FUN_00590690
// Address: 00590690
// Address Range: [[00590690, 005906d3]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_00590690(int param_1,int param_2)

#include "nocturne.h"

void core_stranger_cpp_FUN_00590690(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint auStack_38 [12];
  
  bVar3 = 0;
  core_stranger_cpp_FUN_0058afe0(param_1,*(uint *)(param_1 + 0x25b0 + param_2 * 0x78),param_2)
  ;
  puVar2 = auStack_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
